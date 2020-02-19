// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef RANDOMUE4STUFF_ChaoAnimationLibrary_generated_h
#error "ChaoAnimationLibrary.generated.h already included, missing '#pragma once' in ChaoAnimationLibrary.h"
#endif
#define RANDOMUE4STUFF_ChaoAnimationLibrary_generated_h

#define RandomUE4Stuff_Source_RandomUE4Stuff_ChaoAnimationLibrary_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGenerateMontages) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UChaoAnimationLibrary::GenerateMontages(); \
		P_NATIVE_END; \
	}


#define RandomUE4Stuff_Source_RandomUE4Stuff_ChaoAnimationLibrary_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGenerateMontages) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UChaoAnimationLibrary::GenerateMontages(); \
		P_NATIVE_END; \
	}


#define RandomUE4Stuff_Source_RandomUE4Stuff_ChaoAnimationLibrary_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUChaoAnimationLibrary(); \
	friend struct Z_Construct_UClass_UChaoAnimationLibrary_Statics; \
public: \
	DECLARE_CLASS(UChaoAnimationLibrary, UAnimationBlueprintLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RandomUE4Stuff"), NO_API) \
	DECLARE_SERIALIZER(UChaoAnimationLibrary)


#define RandomUE4Stuff_Source_RandomUE4Stuff_ChaoAnimationLibrary_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUChaoAnimationLibrary(); \
	friend struct Z_Construct_UClass_UChaoAnimationLibrary_Statics; \
public: \
	DECLARE_CLASS(UChaoAnimationLibrary, UAnimationBlueprintLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RandomUE4Stuff"), NO_API) \
	DECLARE_SERIALIZER(UChaoAnimationLibrary)


#define RandomUE4Stuff_Source_RandomUE4Stuff_ChaoAnimationLibrary_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UChaoAnimationLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UChaoAnimationLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UChaoAnimationLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UChaoAnimationLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UChaoAnimationLibrary(UChaoAnimationLibrary&&); \
	NO_API UChaoAnimationLibrary(const UChaoAnimationLibrary&); \
public:


#define RandomUE4Stuff_Source_RandomUE4Stuff_ChaoAnimationLibrary_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UChaoAnimationLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UChaoAnimationLibrary(UChaoAnimationLibrary&&); \
	NO_API UChaoAnimationLibrary(const UChaoAnimationLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UChaoAnimationLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UChaoAnimationLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UChaoAnimationLibrary)


#define RandomUE4Stuff_Source_RandomUE4Stuff_ChaoAnimationLibrary_h_15_PRIVATE_PROPERTY_OFFSET
#define RandomUE4Stuff_Source_RandomUE4Stuff_ChaoAnimationLibrary_h_12_PROLOG
#define RandomUE4Stuff_Source_RandomUE4Stuff_ChaoAnimationLibrary_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RandomUE4Stuff_Source_RandomUE4Stuff_ChaoAnimationLibrary_h_15_PRIVATE_PROPERTY_OFFSET \
	RandomUE4Stuff_Source_RandomUE4Stuff_ChaoAnimationLibrary_h_15_RPC_WRAPPERS \
	RandomUE4Stuff_Source_RandomUE4Stuff_ChaoAnimationLibrary_h_15_INCLASS \
	RandomUE4Stuff_Source_RandomUE4Stuff_ChaoAnimationLibrary_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define RandomUE4Stuff_Source_RandomUE4Stuff_ChaoAnimationLibrary_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RandomUE4Stuff_Source_RandomUE4Stuff_ChaoAnimationLibrary_h_15_PRIVATE_PROPERTY_OFFSET \
	RandomUE4Stuff_Source_RandomUE4Stuff_ChaoAnimationLibrary_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	RandomUE4Stuff_Source_RandomUE4Stuff_ChaoAnimationLibrary_h_15_INCLASS_NO_PURE_DECLS \
	RandomUE4Stuff_Source_RandomUE4Stuff_ChaoAnimationLibrary_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RANDOMUE4STUFF_API UClass* StaticClass<class UChaoAnimationLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID RandomUE4Stuff_Source_RandomUE4Stuff_ChaoAnimationLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
