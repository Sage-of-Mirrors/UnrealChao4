// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AnimationBlueprintLibrary.h"
#include "ChaoAnimEntry.h"
#include "Animation/AnimSequence.h"
#include "TestAnimLibrary.generated.h"

/**
 * 
 */
UCLASS()
class RANDOMUE4STUFF_API UTestAnimLibrary : public UAnimationBlueprintLibrary
{
	GENERATED_BODY()

	UFUNCTION(BlueprintGetter, Category = "Animation Utility")
	static LoopType GetAnimationLoopType(UAnimSequence* seq);

	UFUNCTION(BlueprintGetter, Category = "Animation Utility")
	static ChaoPose GetAnimationPose(UAnimSequence* seq);

	UFUNCTION(BlueprintGetter, Category = "Animation Utility")
	static int32 GetAnimationTransitionID(UAnimSequence* seq);

	UFUNCTION(BlueprintGetter, Category = "Animation Utility")
	static float GetAnimationPlaySpeed(UAnimSequence* seq);
};
