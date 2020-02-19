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
#ifdef RANDOMUE4STUFF_ChaoAnimationMontagerLibrary_generated_h
#error "ChaoAnimationMontagerLibrary.generated.h already included, missing '#pragma once' in ChaoAnimationMontagerLibrary.h"
#endif
#define RANDOMUE4STUFF_ChaoAnimationMontagerLibrary_generated_h

#define RandomUE4Stuff_Source_RandomUE4Stuff_ChaoAnimationMontagerLibrary_h_21_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetAnimationPlaySpeed) \
	{ \
		P_GET_OBJECT(UAnimSequence,Z_Param_seq); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UChaoAnimationMontagerLibrary::GetAnimationPlaySpeed(Z_Param_seq); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAnimationTransitionID) \
	{ \
		P_GET_OBJECT(UAnimSequence,Z_Param_seq); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UChaoAnimationMontagerLibrary::GetAnimationTransitionID(Z_Param_seq); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAnimationPose) \
	{ \
		P_GET_OBJECT(UAnimSequence,Z_Param_seq); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ChaoPose*)Z_Param__Result=UChaoAnimationMontagerLibrary::GetAnimationPose(Z_Param_seq); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAnimationLoopType) \
	{ \
		P_GET_OBJECT(UAnimSequence,Z_Param_seq); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(LoopType*)Z_Param__Result=UChaoAnimationMontagerLibrary::GetAnimationLoopType(Z_Param_seq); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGenerateMontages) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UChaoAnimationMontagerLibrary::GenerateMontages(); \
		P_NATIVE_END; \
	}


#define RandomUE4Stuff_Source_RandomUE4Stuff_ChaoAnimationMontagerLibrary_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetAnimationPlaySpeed) \
	{ \
		P_GET_OBJECT(UAnimSequence,Z_Param_seq); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UChaoAnimationMontagerLibrary::GetAnimationPlaySpeed(Z_Param_seq); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAnimationTransitionID) \
	{ \
		P_GET_OBJECT(UAnimSequence,Z_Param_seq); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UChaoAnimationMontagerLibrary::GetAnimationTransitionID(Z_Param_seq); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAnimationPose) \
	{ \
		P_GET_OBJECT(UAnimSequence,Z_Param_seq); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ChaoPose*)Z_Param__Result=UChaoAnimationMontagerLibrary::GetAnimationPose(Z_Param_seq); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAnimationLoopType) \
	{ \
		P_GET_OBJECT(UAnimSequence,Z_Param_seq); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(LoopType*)Z_Param__Result=UChaoAnimationMontagerLibrary::GetAnimationLoopType(Z_Param_seq); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGenerateMontages) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UChaoAnimationMontagerLibrary::GenerateMontages(); \
		P_NATIVE_END; \
	}


#define RandomUE4Stuff_Source_RandomUE4Stuff_ChaoAnimationMontagerLibrary_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUChaoAnimationMontagerLibrary(); \
	friend struct Z_Construct_UClass_UChaoAnimationMontagerLibrary_Statics; \
public: \
	DECLARE_CLASS(UChaoAnimationMontagerLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RandomUE4Stuff"), NO_API) \
	DECLARE_SERIALIZER(UChaoAnimationMontagerLibrary)


#define RandomUE4Stuff_Source_RandomUE4Stuff_ChaoAnimationMontagerLibrary_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUChaoAnimationMontagerLibrary(); \
	friend struct Z_Construct_UClass_UChaoAnimationMontagerLibrary_Statics; \
public: \
	DECLARE_CLASS(UChaoAnimationMontagerLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RandomUE4Stuff"), NO_API) \
	DECLARE_SERIALIZER(UChaoAnimationMontagerLibrary)


#define RandomUE4Stuff_Source_RandomUE4Stuff_ChaoAnimationMontagerLibrary_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UChaoAnimationMontagerLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UChaoAnimationMontagerLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UChaoAnimationMontagerLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UChaoAnimationMontagerLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UChaoAnimationMontagerLibrary(UChaoAnimationMontagerLibrary&&); \
	NO_API UChaoAnimationMontagerLibrary(const UChaoAnimationMontagerLibrary&); \
public:


#define RandomUE4Stuff_Source_RandomUE4Stuff_ChaoAnimationMontagerLibrary_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UChaoAnimationMontagerLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UChaoAnimationMontagerLibrary(UChaoAnimationMontagerLibrary&&); \
	NO_API UChaoAnimationMontagerLibrary(const UChaoAnimationMontagerLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UChaoAnimationMontagerLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UChaoAnimationMontagerLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UChaoAnimationMontagerLibrary)


#define RandomUE4Stuff_Source_RandomUE4Stuff_ChaoAnimationMontagerLibrary_h_21_PRIVATE_PROPERTY_OFFSET
#define RandomUE4Stuff_Source_RandomUE4Stuff_ChaoAnimationMontagerLibrary_h_18_PROLOG
#define RandomUE4Stuff_Source_RandomUE4Stuff_ChaoAnimationMontagerLibrary_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RandomUE4Stuff_Source_RandomUE4Stuff_ChaoAnimationMontagerLibrary_h_21_PRIVATE_PROPERTY_OFFSET \
	RandomUE4Stuff_Source_RandomUE4Stuff_ChaoAnimationMontagerLibrary_h_21_RPC_WRAPPERS \
	RandomUE4Stuff_Source_RandomUE4Stuff_ChaoAnimationMontagerLibrary_h_21_INCLASS \
	RandomUE4Stuff_Source_RandomUE4Stuff_ChaoAnimationMontagerLibrary_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define RandomUE4Stuff_Source_RandomUE4Stuff_ChaoAnimationMontagerLibrary_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RandomUE4Stuff_Source_RandomUE4Stuff_ChaoAnimationMontagerLibrary_h_21_PRIVATE_PROPERTY_OFFSET \
	RandomUE4Stuff_Source_RandomUE4Stuff_ChaoAnimationMontagerLibrary_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	RandomUE4Stuff_Source_RandomUE4Stuff_ChaoAnimationMontagerLibrary_h_21_INCLASS_NO_PURE_DECLS \
	RandomUE4Stuff_Source_RandomUE4Stuff_ChaoAnimationMontagerLibrary_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RANDOMUE4STUFF_API UClass* StaticClass<class UChaoAnimationMontagerLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID RandomUE4Stuff_Source_RandomUE4Stuff_ChaoAnimationMontagerLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
