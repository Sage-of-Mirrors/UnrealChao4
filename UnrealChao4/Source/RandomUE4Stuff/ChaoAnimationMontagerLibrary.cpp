// Fill out your copyright notice in the Description page of Project Settings.

#include "ChaoAnimationMontagerLibrary.h"
#include "IndexMapEntry.h"
#include "RandomUE4Stuff.h"
#include "AnimationCore.h"
#include "Animation/Skeleton.h"
#include "Animation/AnimMontage.h"
#include "AnimationEditorUtils.h"
#include "Factories/AnimMontageFactory.h"
#include "Animation/AnimSequence.h"
#include "AssetRegistryModule.h"
#include "Animation/AnimMetaData.h"
#include "ChaoAnimMetadata.h"
#include "AnimNotify_OnEndAnimation.h"
#include <EngineUtils.h>

void UChaoAnimationMontagerLibrary::GenerateMontages() {
	IPlatformFile& PlatformFile = FPlatformFileManager::Get().GetPlatformFile();

	TArray<ChaoAnimEntry> ini_entries = GetIniList(PlatformFile);
	TArray<IndexMapEntry> index_entries = GetIndexMap(PlatformFile);

	TArray<UObject*> assets;
	EngineUtils::FindOrLoadAssetsByPath(TEXT("/Game/ThirdPersonBP/Chao/Model/Animation"), assets, EngineUtils::EAssetToLoad::ATL_Regular);

	USkeleton* skel = LoadObject<USkeleton>(NULL, TEXT("/Game/ThirdPersonBP/Chao/Model/Chao_Skeleton"), NULL, LOAD_None, NULL);

	for (int32 i = 0; i < ini_entries.Num(); i++) {
		ChaoAnimEntry cur_entry = ini_entries[i];

		FString package_name = "/Game/ThirdPersonBP/Chao/Model/FinalAnimations/";
		FString anim_name = FString::Printf(TEXT("final_anim_%i"), i);
		package_name += anim_name;

		UPackage* anim_package = CreatePackage(nullptr, *package_name);

		UAnimSequence* src_seq = GetAnimationDataFromName(cur_entry.Name, index_entries, assets);
		UAnimSequence* new_seq = DuplicateObject<UAnimSequence>(src_seq, anim_package, FName(*anim_name));

		UChaoAnimMetadata* meta = NewObject<UChaoAnimMetadata>(anim_package);
		meta->Pose = cur_entry.Pose;
		meta->LoopType = cur_entry.LoopType;
		meta->TransitionID = cur_entry.TransitionID;

		new_seq->AddMetaData(meta);

		float orig_anim_length = new_seq->GetPlayLength();
		float anim_length_dif = 0;

		if (cur_entry.StartFrame != 0) {
			if (!new_seq->CropRawAnimData(cur_entry.StartFrame / new_seq->GetFrameRate(), true)) {
				UE_LOG(LogTemp, Warning, TEXT("Failed to crop anim start!"));
			}
			else {
				anim_length_dif = orig_anim_length - new_seq->GetPlayLength();
			}
		}

		if (cur_entry.EndFrame != 0) {
			if (!new_seq->CropRawAnimData(((cur_entry.EndFrame + 1) / new_seq->GetFrameRate()) - anim_length_dif, false)) {
				UE_LOG(LogTemp, Warning, TEXT("Failed to crop anim end!"));
			}
		}

		new_seq->RateScale = cur_entry.PlaySpeed;

		//FAssetRegistryModule::AssetCreated(test);
		anim_package->FullyLoad();
		anim_package->SetDirtyFlag(true);
	}
}

ChaoAnimEntry UChaoAnimationMontagerLibrary::GetAnimEntryFromIndex(int32 index, TArray<ChaoAnimEntry> animations) {
	for (auto It = animations.CreateConstIterator(); It; ++It) {
		ChaoAnimEntry ent = *It;

		if (ent.ID == index) {
			return ent;
		}
	}

	UE_LOG(LogTemp, Warning, TEXT("Anim ID %i not found!"), index);
	ChaoAnimEntry error;
	return error;
}

void UChaoAnimationMontagerLibrary::GenerateMontage(TArray<ChaoAnimEntry> entries, TArray<IndexMapEntry> index_map, TArray<UObject*> animations, USkeleton* chao_skeleton) {
	UE_LOG(LogTemp, Warning, TEXT("Creating montage with %i source(s)"), entries.Num());

	FString absolute_path = FPaths::GameContentDir() + "ThirdPersonBP/Chao/Model/Montages/";

	FPackageName::RegisterMountPoint(FString("/Game/ThirdPersonBP/Chao/Model/Montages/"), absolute_path);
	UPackage* test = CreatePackage(nullptr, *absolute_path);

	UAnimMontageFactory* montage_factory = NewObject<UAnimMontageFactory>();

	UAnimMontage* new_montage = AnimationEditorUtils::CreateAnimationAsset<UAnimMontage>(chao_skeleton, FString(TEXT("/Game/ThirdPersonBP/Chao/Model/Montages")), FString(TEXT("test")));

	int32 name_index = 0;
	float cur_time = 0.0f;

	for (auto It = entries.CreateConstIterator(); It; ++It) {
		ChaoAnimEntry cur_entry = *It;
		UAnimSequence* animation = GetAnimationDataFromName(cur_entry.Name, index_map, animations);

		FString section_name = FString::Printf(TEXT("[%i] %s"), name_index++, *animation->GetName());
		new_montage->AddAnimCompositeSection(FName(*section_name), cur_time);

		FAnimSegment seg;

		float playspeed_abs = FMath::Abs<float>(cur_entry.PlaySpeed);
		
		seg.AnimReference = animation;
		seg.AnimPlayRate = cur_entry.PlaySpeed;
		seg.AnimStartTime = (cur_entry.StartFrame / playspeed_abs) / 30.0f;

		float end_time = 0.0f;

		if (cur_entry.EndFrame == 0) {
			end_time = (animation->GetNumberOfFrames() / playspeed_abs) / 30.0f;
		}
		else {
			end_time = (cur_entry.EndFrame / playspeed_abs) / 30.0f;
		}

		seg.AnimEndTime = end_time;

		cur_time += seg.AnimEndTime - seg.AnimStartTime;
		
		new_montage->SlotAnimTracks[0].AnimTrack.AnimSegments.Add(seg);
	}

	new_montage->AddAnimCompositeSection(FName(TEXT("End")), cur_time);

	test->MarkPackageDirty();
	//UPackage::Save(test, new_montage, EObjectFlags::RF_NoFlags, TEXT("/Game/ThirdPersonBP/Chao/Model/Montages/test.uasset"));
}

TArray<ChaoAnimEntry> UChaoAnimationMontagerLibrary::GetIniList(IPlatformFile& PlatformFile) {
	FString ini_path = FString(TEXT("D:\\Github\\RandomUE4Stuff\\RandomUE4Stuff\\Content\\ThirdPersonBP\\Chao\\Model\\Animation\\info.ini"));

	TArray<FString> lines;
	FFileHelper::LoadFileToStringArray(lines, *ini_path);
	FString* test = lines.GetData();

	int32 index = 0;
	int32 max_lines = lines.Num();
	TArray<ChaoAnimEntry> anim_entries;

	for (int i = 0; i < 622; i++) {
		anim_entries.Add(CreateEntry(test, index, max_lines));
	}

	UE_LOG(LogTemp, Warning, TEXT("Done. %i INI entries parsed"), anim_entries.Num());

	return anim_entries;
}

ChaoAnimEntry UChaoAnimationMontagerLibrary::CreateEntry(FString* file, int32& index, int32 max) {
	ChaoAnimEntry entry;
	
	FString id_str = file[index++];
	id_str = id_str.Replace(TEXT("["), TEXT(""));
	id_str = id_str.Replace(TEXT("]"), TEXT(""));

	UE_LOG(LogTemp, Warning, TEXT("Parsed ID: %s"), *id_str);

	entry.ID = FCString::Atoi(*id_str);

	FString line = file[index];

	while (!line.StartsWith("[")) {
		FString cur_attribute = file[index];
		UE_LOG(LogTemp, Warning, TEXT("%s"), *cur_attribute);

		TArray<FString> buf;
		cur_attribute.ParseIntoArray(buf, TEXT("="));
		FString* dat = buf.GetData();

		if (dat[0] == "TransitionID") {
			entry.TransitionID = FCString::Atoi(*dat[1]);
		}
		else if (dat[0] == "StartFrame") {
			entry.StartFrame = FCString::Atoi(*dat[1]);
		}
		else if (dat[0] == "EndFrame") {
			entry.EndFrame = FCString::Atoi(*dat[1]);
		}
		else if (dat[0] == "PlaySpeed") {
			entry.PlaySpeed = FCString::Atof(*dat[1]) * 2;
		}
		else if (dat[0] == "Pose") {
			entry.Pose = (ChaoPose)FCString::Atoi(*dat[1]);
		}
		else if (dat[0] == "Motion") {
			entry.Name = dat[1];
		}
		else if (dat[0] == "Flag1") {
			entry.LoopType = (LoopType)FCString::Atoi(*dat[1]);
		}

		if (index + 1 < max) {
			line = file[++index];
		}
		else {
			break;
		}
	}

	// They specify start and end frames backward if the play speed is negative, so flip that for UE4.
	if (entry.PlaySpeed < 0) {
		int32 temp = entry.EndFrame;
		entry.EndFrame = entry.StartFrame;
		entry.StartFrame = temp;
	}

	return entry;
}

TArray<IndexMapEntry> UChaoAnimationMontagerLibrary::GetIndexMap(IPlatformFile& PlatformFile) {
	FString txt_path = FString(TEXT("D:\\Github\\RandomUE4Stuff\\RandomUE4Stuff\\Content\\ThirdPersonBP\\Chao\\Model\\Animation\\indexmap.txt"));
	TArray<IndexMapEntry> entries;

	TArray<FString> lines;
	FFileHelper::LoadFileToStringArray(lines, *txt_path);

	for (auto It = lines.CreateConstIterator(); It; ++It) {
		TArray<FString> split_line;
		(*It).ParseIntoArray(split_line, TEXT(","));

		IndexMapEntry new_entry;
		new_entry.Index = FCString::Atoi(*split_line[0]);
		new_entry.Name = split_line[1];

		entries.Add(new_entry);
	}

	UE_LOG(LogTemp, Warning, TEXT("Done. %i index map entries parsed"), entries.Num());

	return entries;
}

UAnimSequence* UChaoAnimationMontagerLibrary::GetAnimationDataFromName(FString name, TArray<IndexMapEntry> index_map, TArray<UObject*> animations) {
	int32 index = 0;
	
	for (auto It = index_map.CreateConstIterator(); It; ++It) {
		IndexMapEntry ent = *It;

		if (ent.Name != name) {
			continue;
		}

		index = ent.Index;
	}

	UE_LOG(LogTemp, Warning, TEXT("Anim lookup index: %i"), index);

	for (auto It = animations.CreateConstIterator(); It; ++It) {
		UAnimSequence* test = Cast<UAnimSequence>(*It);
		FString anim_name = test->GetName();

		TArray<FString> split_name;
		anim_name.ParseIntoArray(split_name, TEXT("_"));

		if (FCString::Atoi(*split_name[3]) == index) {
			return test;
		}
	}

	return nullptr;
}

LoopType UChaoAnimationMontagerLibrary::GetAnimationLoopType(UAnimSequence* seq) {
	if (seq == nullptr) {
		return LoopType::Loop_to_Frame_0;
	}

	TArray<UAnimMetaData*> meta = seq->GetMetaData();
	UChaoAnimMetadata* data = (UChaoAnimMetadata*)meta[0];

	if (data != nullptr) {
		return data->LoopType;
	}

	return LoopType::Loop_to_Frame_0;
}

ChaoPose UChaoAnimationMontagerLibrary::GetAnimationPose(UAnimSequence* seq) {
	if (seq == nullptr) {
		return ChaoPose::Standing;
	}

	TArray<UAnimMetaData*> meta = seq->GetMetaData();
	UChaoAnimMetadata* data = (UChaoAnimMetadata*)meta[0];

	if (data != nullptr) {
		return data->Pose;
	}

	return ChaoPose::Standing;
}

int32 UChaoAnimationMontagerLibrary::GetAnimationTransitionID(UAnimSequence* seq) {
	if (seq == nullptr) {
		return -1;
	}

	TArray<UAnimMetaData*> meta = seq->GetMetaData();
	UChaoAnimMetadata* data = (UChaoAnimMetadata*)meta[0];

	if (data != nullptr) {
		return data->TransitionID;
	}

	return -1;
}

float UChaoAnimationMontagerLibrary::GetAnimationPlaySpeed(UAnimSequence* seq) {
	if (seq == nullptr) {
		return -1;
	}

	return seq->RateScale;
}