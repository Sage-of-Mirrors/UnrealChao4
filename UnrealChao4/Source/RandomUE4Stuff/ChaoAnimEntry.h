#pragma once

#include "CoreMinimal.h"

UENUM(BlueprintType)
enum class ChaoPose : uint8 {
	Standing,
	Sitting,
	On_Back,
	On_Belly,
	In_Air,
	Hopping
};

UENUM(BlueprintType)
enum class LoopType : uint8 {
	Loop_to_Frame_0,
	Loop_to_Frame_1,
	Return_to_Previous_Animation,
	None,
	Transition_with_Blend,
	Transition_Simple,
	TYPE6,
	Pingpong
};

struct ChaoAnimEntry {
	int32 ID = 0;
	int32 TransitionID = -1;
	int32 StartFrame = 0;
	int32 EndFrame = 0;
	float PlaySpeed = 1.0f;
	FString Name;
	ChaoPose Pose = ChaoPose::Standing;
	LoopType LoopType = LoopType::Loop_to_Frame_0;
};