// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "AnimNotify_OnEndAnimation.generated.h"

/**
 * 
 */
UCLASS()
class RANDOMUE4STUFF_API UAnimNotify_OnEndAnimation : public UAnimNotify
{
	GENERATED_BODY()
	
	// Begin UAnimNotify interface
	virtual FString GetNotifyName_Implementation() const override;
	// End UAnimNotify interface
};
