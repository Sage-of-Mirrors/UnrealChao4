// Fill out your copyright notice in the Description page of Project Settings.


#include "TestAnimLibrary.h"
#include "ChaoAnimMetadata.h"

LoopType UTestAnimLibrary::GetAnimationLoopType(UAnimSequence* seq) {
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

ChaoPose UTestAnimLibrary::GetAnimationPose(UAnimSequence* seq) {
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

int32 UTestAnimLibrary::GetAnimationTransitionID(UAnimSequence* seq) {
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

float UTestAnimLibrary::GetAnimationPlaySpeed(UAnimSequence* seq) {
	if (seq == nullptr) {
		return -1;
	}

	return seq->RateScale;
}