// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAnimSequence;
enum class ChaoPose : uint8;
enum class LoopType : uint8;
#ifdef RANDOMUE4STUFF_TestAnimLibrary_generated_h
#error "TestAnimLibrary.generated.h already included, missing '#pragma once' in TestAnimLibrary.h"
#endif
#define RANDOMUE4STUFF_TestAnimLibrary_generated_h

#define UnrealChao4_Source_RandomUE4Stuff_TestAnimLibrary_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetAnimationPlaySpeed) \
	{ \
		P_GET_OBJECT(UAnimSequence,Z_Param_seq); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UTestAnimLibrary::GetAnimationPlaySpeed(Z_Param_seq); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAnimationTransitionID) \
	{ \
		P_GET_OBJECT(UAnimSequence,Z_Param_seq); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UTestAnimLibrary::GetAnimationTransitionID(Z_Param_seq); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAnimationPose) \
	{ \
		P_GET_OBJECT(UAnimSequence,Z_Param_seq); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ChaoPose*)Z_Param__Result=UTestAnimLibrary::GetAnimationPose(Z_Param_seq); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAnimationLoopType) \
	{ \
		P_GET_OBJECT(UAnimSequence,Z_Param_seq); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(LoopType*)Z_Param__Result=UTestAnimLibrary::GetAnimationLoopType(Z_Param_seq); \
		P_NATIVE_END; \
	}


#define UnrealChao4_Source_RandomUE4Stuff_TestAnimLibrary_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetAnimationPlaySpeed) \
	{ \
		P_GET_OBJECT(UAnimSequence,Z_Param_seq); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UTestAnimLibrary::GetAnimationPlaySpeed(Z_Param_seq); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAnimationTransitionID) \
	{ \
		P_GET_OBJECT(UAnimSequence,Z_Param_seq); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UTestAnimLibrary::GetAnimationTransitionID(Z_Param_seq); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAnimationPose) \
	{ \
		P_GET_OBJECT(UAnimSequence,Z_Param_seq); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ChaoPose*)Z_Param__Result=UTestAnimLibrary::GetAnimationPose(Z_Param_seq); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAnimationLoopType) \
	{ \
		P_GET_OBJECT(UAnimSequence,Z_Param_seq); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(LoopType*)Z_Param__Result=UTestAnimLibrary::GetAnimationLoopType(Z_Param_seq); \
		P_NATIVE_END; \
	}


#define UnrealChao4_Source_RandomUE4Stuff_TestAnimLibrary_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTestAnimLibrary(); \
	friend struct Z_Construct_UClass_UTestAnimLibrary_Statics; \
public: \
	DECLARE_CLASS(UTestAnimLibrary, UAnimationBlueprintLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RandomUE4Stuff"), NO_API) \
	DECLARE_SERIALIZER(UTestAnimLibrary)


#define UnrealChao4_Source_RandomUE4Stuff_TestAnimLibrary_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUTestAnimLibrary(); \
	friend struct Z_Construct_UClass_UTestAnimLibrary_Statics; \
public: \
	DECLARE_CLASS(UTestAnimLibrary, UAnimationBlueprintLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RandomUE4Stuff"), NO_API) \
	DECLARE_SERIALIZER(UTestAnimLibrary)


#define UnrealChao4_Source_RandomUE4Stuff_TestAnimLibrary_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTestAnimLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTestAnimLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTestAnimLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTestAnimLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTestAnimLibrary(UTestAnimLibrary&&); \
	NO_API UTestAnimLibrary(const UTestAnimLibrary&); \
public:


#define UnrealChao4_Source_RandomUE4Stuff_TestAnimLibrary_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTestAnimLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTestAnimLibrary(UTestAnimLibrary&&); \
	NO_API UTestAnimLibrary(const UTestAnimLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTestAnimLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTestAnimLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTestAnimLibrary)


#define UnrealChao4_Source_RandomUE4Stuff_TestAnimLibrary_h_17_PRIVATE_PROPERTY_OFFSET
#define UnrealChao4_Source_RandomUE4Stuff_TestAnimLibrary_h_14_PROLOG
#define UnrealChao4_Source_RandomUE4Stuff_TestAnimLibrary_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealChao4_Source_RandomUE4Stuff_TestAnimLibrary_h_17_PRIVATE_PROPERTY_OFFSET \
	UnrealChao4_Source_RandomUE4Stuff_TestAnimLibrary_h_17_RPC_WRAPPERS \
	UnrealChao4_Source_RandomUE4Stuff_TestAnimLibrary_h_17_INCLASS \
	UnrealChao4_Source_RandomUE4Stuff_TestAnimLibrary_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UnrealChao4_Source_RandomUE4Stuff_TestAnimLibrary_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealChao4_Source_RandomUE4Stuff_TestAnimLibrary_h_17_PRIVATE_PROPERTY_OFFSET \
	UnrealChao4_Source_RandomUE4Stuff_TestAnimLibrary_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	UnrealChao4_Source_RandomUE4Stuff_TestAnimLibrary_h_17_INCLASS_NO_PURE_DECLS \
	UnrealChao4_Source_RandomUE4Stuff_TestAnimLibrary_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RANDOMUE4STUFF_API UClass* StaticClass<class UTestAnimLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UnrealChao4_Source_RandomUE4Stuff_TestAnimLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
