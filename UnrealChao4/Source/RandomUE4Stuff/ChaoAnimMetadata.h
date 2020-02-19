// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimMetaData.h"
#include "ChaoAnimEntry.h"
#include "ChaoAnimMetadata.generated.h"

/**
 * 
 */
UCLASS()
class RANDOMUE4STUFF_API UChaoAnimMetadata : public UAnimMetaData
{
	GENERATED_BODY()

public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Chao Animation")
    ChaoPose Pose;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Chao Animation")
    LoopType LoopType;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Chao Animation")
    int32 TransitionID;
};
