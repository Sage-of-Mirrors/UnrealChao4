// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RandomUE4Stuff/ChaoAnimationLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChaoAnimationLibrary() {}
// Cross Module References
	RANDOMUE4STUFF_API UClass* Z_Construct_UClass_UChaoAnimationLibrary_NoRegister();
	RANDOMUE4STUFF_API UClass* Z_Construct_UClass_UChaoAnimationLibrary();
	ANIMATIONMODIFIERS_API UClass* Z_Construct_UClass_UAnimationBlueprintLibrary();
	UPackage* Z_Construct_UPackage__Script_RandomUE4Stuff();
	RANDOMUE4STUFF_API UFunction* Z_Construct_UFunction_UChaoAnimationLibrary_GenerateMontages();
// End Cross Module References
	void UChaoAnimationLibrary::StaticRegisterNativesUChaoAnimationLibrary()
	{
		UClass* Class = UChaoAnimationLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GenerateMontages", &UChaoAnimationLibrary::execGenerateMontages },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UChaoAnimationLibrary_GenerateMontages_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChaoAnimationLibrary_GenerateMontages_Statics::Function_MetaDataParams[] = {
		{ "Category", "Meta" },
		{ "ModuleRelativePath", "ChaoAnimationLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UChaoAnimationLibrary_GenerateMontages_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChaoAnimationLibrary, nullptr, "GenerateMontages", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UChaoAnimationLibrary_GenerateMontages_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UChaoAnimationLibrary_GenerateMontages_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UChaoAnimationLibrary_GenerateMontages()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UChaoAnimationLibrary_GenerateMontages_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UChaoAnimationLibrary_NoRegister()
	{
		return UChaoAnimationLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UChaoAnimationLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UChaoAnimationLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimationBlueprintLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_RandomUE4Stuff,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UChaoAnimationLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UChaoAnimationLibrary_GenerateMontages, "GenerateMontages" }, // 2602151445
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaoAnimationLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "ChaoAnimationLibrary.h" },
		{ "ModuleRelativePath", "ChaoAnimationLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UChaoAnimationLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UChaoAnimationLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UChaoAnimationLibrary_Statics::ClassParams = {
		&UChaoAnimationLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UChaoAnimationLibrary_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UChaoAnimationLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UChaoAnimationLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UChaoAnimationLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UChaoAnimationLibrary, 2227633319);
	template<> RANDOMUE4STUFF_API UClass* StaticClass<UChaoAnimationLibrary>()
	{
		return UChaoAnimationLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UChaoAnimationLibrary(Z_Construct_UClass_UChaoAnimationLibrary, &UChaoAnimationLibrary::StaticClass, TEXT("/Script/RandomUE4Stuff"), TEXT("UChaoAnimationLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UChaoAnimationLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
