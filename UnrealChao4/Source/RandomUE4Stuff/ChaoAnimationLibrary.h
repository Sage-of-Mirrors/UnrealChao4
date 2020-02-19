// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AnimationBlueprintLibrary.h"
#include "ChaoAnimationLibrary.generated.h"

/**
 * 
 */
UCLASS()
class RANDOMUE4STUFF_API UChaoAnimationLibrary : public UAnimationBlueprintLibrary
{
	GENERATED_BODY()

	UFUNCTION(BlueprintCallable, Category = "Meta")
	static void GenerateMontages();
};
