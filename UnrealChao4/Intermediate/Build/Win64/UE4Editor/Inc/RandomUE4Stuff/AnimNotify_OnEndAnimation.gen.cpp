// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RandomUE4Stuff/AnimNotify_OnEndAnimation.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNotify_OnEndAnimation() {}
// Cross Module References
	RANDOMUE4STUFF_API UClass* Z_Construct_UClass_UAnimNotify_OnEndAnimation_NoRegister();
	RANDOMUE4STUFF_API UClass* Z_Construct_UClass_UAnimNotify_OnEndAnimation();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotify();
	UPackage* Z_Construct_UPackage__Script_RandomUE4Stuff();
// End Cross Module References
	void UAnimNotify_OnEndAnimation::StaticRegisterNativesUAnimNotify_OnEndAnimation()
	{
	}
	UClass* Z_Construct_UClass_UAnimNotify_OnEndAnimation_NoRegister()
	{
		return UAnimNotify_OnEndAnimation::StaticClass();
	}
	struct Z_Construct_UClass_UAnimNotify_OnEndAnimation_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimNotify_OnEndAnimation_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimNotify,
		(UObject* (*)())Z_Construct_UPackage__Script_RandomUE4Stuff,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNotify_OnEndAnimation_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "AnimNotify_OnEndAnimation.h" },
		{ "ModuleRelativePath", "AnimNotify_OnEndAnimation.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimNotify_OnEndAnimation_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimNotify_OnEndAnimation>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAnimNotify_OnEndAnimation_Statics::ClassParams = {
		&UAnimNotify_OnEndAnimation::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001120A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimNotify_OnEndAnimation_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_OnEndAnimation_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimNotify_OnEndAnimation()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAnimNotify_OnEndAnimation_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAnimNotify_OnEndAnimation, 2613543847);
	template<> RANDOMUE4STUFF_API UClass* StaticClass<UAnimNotify_OnEndAnimation>()
	{
		return UAnimNotify_OnEndAnimation::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAnimNotify_OnEndAnimation(Z_Construct_UClass_UAnimNotify_OnEndAnimation, &UAnimNotify_OnEndAnimation::StaticClass, TEXT("/Script/RandomUE4Stuff"), TEXT("UAnimNotify_OnEndAnimation"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimNotify_OnEndAnimation);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
