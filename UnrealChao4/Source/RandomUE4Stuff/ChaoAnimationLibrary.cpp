// Fill out your copyright notice in the Description page of Project Settings.

#include "ChaoAnimationLibrary.h"
#include <Runtime\Core\Public\HAL\PlatformFilemanager.h>
#include <Runtime\Core\Public\HAL\PlatformFile.h>

void UChaoAnimationLibrary::GenerateMontages() {
	IPlatformFile& PlatformFile = FPlatformFileManager::Get().GetPlatformFile();

	FString path = "D:\\Github\\RandomUE4Stuff\\RandomUE4Stuff\\Content\\ThirdPersonBP\\Chao\\Model\\Animation\\info.ini";
	int64 file_size = PlatformFile.FileSize(*path);

	UE_LOG(LogTemp, Warning, TEXT("Filesize is: %d"), file_size);
}