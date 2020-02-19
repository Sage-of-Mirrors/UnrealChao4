// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef RANDOMUE4STUFF_ChaoAnimEntry_generated_h
#error "ChaoAnimEntry.generated.h already included, missing '#pragma once' in ChaoAnimEntry.h"
#endif
#define RANDOMUE4STUFF_ChaoAnimEntry_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID RandomUE4Stuff_Source_RandomUE4Stuff_ChaoAnimEntry_h


#define FOREACH_ENUM_LOOPTYPE(op) \
	op(LoopType::Loop_to_Frame_0) \
	op(LoopType::Loop_to_Frame_1) \
	op(LoopType::Return_to_Previous_Animation) \
	op(LoopType::None) \
	op(LoopType::Transition_with_Blend) \
	op(LoopType::Transition_Simple) \
	op(LoopType::TYPE6) \
	op(LoopType::Pingpong) 

enum class LoopType : uint8;
template<> RANDOMUE4STUFF_API UEnum* StaticEnum<LoopType>();

#define FOREACH_ENUM_CHAOPOSE(op) \
	op(ChaoPose::Standing) \
	op(ChaoPose::Sitting) \
	op(ChaoPose::On_Back) \
	op(ChaoPose::On_Belly) \
	op(ChaoPose::In_Air) \
	op(ChaoPose::Hopping) 

enum class ChaoPose : uint8;
template<> RANDOMUE4STUFF_API UEnum* StaticEnum<ChaoPose>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
