// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Core.h"
#include "ChaoAnimEntry.h"
#include "ChaoAnimationMontagerLibrary.generated.h"

struct IndexMapEntry;
class UAnimSequence;
class USkeleton;

/**
 * 
 */
UCLASS()
class RANDOMUE4STUFF_API UChaoAnimationMontagerLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

	UFUNCTION(BlueprintCallable, Category = "Chao Animation Montager")
	static void GenerateMontages();
	static void GenerateMontage(TArray<ChaoAnimEntry> entries, TArray<IndexMapEntry> index_map, TArray<UObject*> animations, USkeleton* chao_skeleton);

	static TArray<ChaoAnimEntry> GetIniList(IPlatformFile& PlatformFile);
	static ChaoAnimEntry CreateEntry(FString* file, int32& index, int32 max);
	static TArray<IndexMapEntry> GetIndexMap(IPlatformFile& PlatformFile);
	static UAnimSequence* GetAnimationDataFromName(FString name, TArray<IndexMapEntry> index_map, TArray<UObject*> animations);
	static ChaoAnimEntry GetAnimEntryFromIndex(int32 index, TArray<ChaoAnimEntry> animations);

	UFUNCTION(BlueprintCallable, Category = "Animation Utility")
	static LoopType GetAnimationLoopType(UAnimSequence* seq);

	UFUNCTION(BlueprintCallable, Category = "Animation Utility")
	static ChaoPose GetAnimationPose(UAnimSequence* seq);

	UFUNCTION(BlueprintCallable, Category = "Animation Utility")
	static int32 GetAnimationTransitionID(UAnimSequence* seq);

	UFUNCTION(BlueprintCallable, Category = "Animation Utility")
	static float GetAnimationPlaySpeed(UAnimSequence* seq);
};
