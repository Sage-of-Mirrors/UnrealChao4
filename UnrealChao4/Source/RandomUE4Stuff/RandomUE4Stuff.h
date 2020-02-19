// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

#define GETENUMSTRING(evalue) ( (FindObject<UEnum>(nullptr, TEXT("ChaoPose")) != nullptr) ? FindObject<UEnum>(nullptr, TEXT("ChaoPose"))->GetDisplayNameText((int32)evalue).ToString() : FString("Invalid - are you sure enum uses UENUM() macro?") )


