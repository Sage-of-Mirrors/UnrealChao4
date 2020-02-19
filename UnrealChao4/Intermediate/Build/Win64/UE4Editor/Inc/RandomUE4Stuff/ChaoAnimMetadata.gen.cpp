// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RandomUE4Stuff/ChaoAnimMetadata.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChaoAnimMetadata() {}
// Cross Module References
	RANDOMUE4STUFF_API UClass* Z_Construct_UClass_UChaoAnimMetadata_NoRegister();
	RANDOMUE4STUFF_API UClass* Z_Construct_UClass_UChaoAnimMetadata();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMetaData();
	UPackage* Z_Construct_UPackage__Script_RandomUE4Stuff();
	RANDOMUE4STUFF_API UEnum* Z_Construct_UEnum_RandomUE4Stuff_LoopType();
	RANDOMUE4STUFF_API UEnum* Z_Construct_UEnum_RandomUE4Stuff_ChaoPose();
// End Cross Module References
	void UChaoAnimMetadata::StaticRegisterNativesUChaoAnimMetadata()
	{
	}
	UClass* Z_Construct_UClass_UChaoAnimMetadata_NoRegister()
	{
		return UChaoAnimMetadata::StaticClass();
	}
	struct Z_Construct_UClass_UChaoAnimMetadata_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TransitionID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TransitionID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LoopType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_LoopType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LoopType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Pose_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Pose;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Pose_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UChaoAnimMetadata_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimMetaData,
		(UObject* (*)())Z_Construct_UPackage__Script_RandomUE4Stuff,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaoAnimMetadata_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "ChaoAnimMetadata.h" },
		{ "ModuleRelativePath", "ChaoAnimMetadata.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaoAnimMetadata_Statics::NewProp_TransitionID_MetaData[] = {
		{ "Category", "Chao Animation" },
		{ "ModuleRelativePath", "ChaoAnimMetadata.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UChaoAnimMetadata_Statics::NewProp_TransitionID = { "TransitionID", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UChaoAnimMetadata, TransitionID), METADATA_PARAMS(Z_Construct_UClass_UChaoAnimMetadata_Statics::NewProp_TransitionID_MetaData, ARRAY_COUNT(Z_Construct_UClass_UChaoAnimMetadata_Statics::NewProp_TransitionID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaoAnimMetadata_Statics::NewProp_LoopType_MetaData[] = {
		{ "Category", "Chao Animation" },
		{ "ModuleRelativePath", "ChaoAnimMetadata.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UChaoAnimMetadata_Statics::NewProp_LoopType = { "LoopType", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UChaoAnimMetadata, LoopType), Z_Construct_UEnum_RandomUE4Stuff_LoopType, METADATA_PARAMS(Z_Construct_UClass_UChaoAnimMetadata_Statics::NewProp_LoopType_MetaData, ARRAY_COUNT(Z_Construct_UClass_UChaoAnimMetadata_Statics::NewProp_LoopType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UChaoAnimMetadata_Statics::NewProp_LoopType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaoAnimMetadata_Statics::NewProp_Pose_MetaData[] = {
		{ "Category", "Chao Animation" },
		{ "ModuleRelativePath", "ChaoAnimMetadata.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UChaoAnimMetadata_Statics::NewProp_Pose = { "Pose", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UChaoAnimMetadata, Pose), Z_Construct_UEnum_RandomUE4Stuff_ChaoPose, METADATA_PARAMS(Z_Construct_UClass_UChaoAnimMetadata_Statics::NewProp_Pose_MetaData, ARRAY_COUNT(Z_Construct_UClass_UChaoAnimMetadata_Statics::NewProp_Pose_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UChaoAnimMetadata_Statics::NewProp_Pose_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UChaoAnimMetadata_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaoAnimMetadata_Statics::NewProp_TransitionID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaoAnimMetadata_Statics::NewProp_LoopType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaoAnimMetadata_Statics::NewProp_LoopType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaoAnimMetadata_Statics::NewProp_Pose,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaoAnimMetadata_Statics::NewProp_Pose_Underlying,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UChaoAnimMetadata_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UChaoAnimMetadata>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UChaoAnimMetadata_Statics::ClassParams = {
		&UChaoAnimMetadata::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UChaoAnimMetadata_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UChaoAnimMetadata_Statics::PropPointers),
		0,
		0x001130A0u,
		METADATA_PARAMS(Z_Construct_UClass_UChaoAnimMetadata_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UChaoAnimMetadata_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UChaoAnimMetadata()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UChaoAnimMetadata_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UChaoAnimMetadata, 1211803891);
	template<> RANDOMUE4STUFF_API UClass* StaticClass<UChaoAnimMetadata>()
	{
		return UChaoAnimMetadata::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UChaoAnimMetadata(Z_Construct_UClass_UChaoAnimMetadata, &UChaoAnimMetadata::StaticClass, TEXT("/Script/RandomUE4Stuff"), TEXT("UChaoAnimMetadata"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UChaoAnimMetadata);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
