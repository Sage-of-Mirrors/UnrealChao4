// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RandomUE4Stuff/ChaoAnimationMontagerLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChaoAnimationMontagerLibrary() {}
// Cross Module References
	RANDOMUE4STUFF_API UClass* Z_Construct_UClass_UChaoAnimationMontagerLibrary_NoRegister();
	RANDOMUE4STUFF_API UClass* Z_Construct_UClass_UChaoAnimationMontagerLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_RandomUE4Stuff();
	RANDOMUE4STUFF_API UFunction* Z_Construct_UFunction_UChaoAnimationMontagerLibrary_GenerateMontages();
	RANDOMUE4STUFF_API UFunction* Z_Construct_UFunction_UChaoAnimationMontagerLibrary_GetAnimationLoopType();
	RANDOMUE4STUFF_API UEnum* Z_Construct_UEnum_RandomUE4Stuff_LoopType();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequence_NoRegister();
	RANDOMUE4STUFF_API UFunction* Z_Construct_UFunction_UChaoAnimationMontagerLibrary_GetAnimationPlaySpeed();
	RANDOMUE4STUFF_API UFunction* Z_Construct_UFunction_UChaoAnimationMontagerLibrary_GetAnimationPose();
	RANDOMUE4STUFF_API UEnum* Z_Construct_UEnum_RandomUE4Stuff_ChaoPose();
	RANDOMUE4STUFF_API UFunction* Z_Construct_UFunction_UChaoAnimationMontagerLibrary_GetAnimationTransitionID();
// End Cross Module References
	void UChaoAnimationMontagerLibrary::StaticRegisterNativesUChaoAnimationMontagerLibrary()
	{
		UClass* Class = UChaoAnimationMontagerLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GenerateMontages", &UChaoAnimationMontagerLibrary::execGenerateMontages },
			{ "GetAnimationLoopType", &UChaoAnimationMontagerLibrary::execGetAnimationLoopType },
			{ "GetAnimationPlaySpeed", &UChaoAnimationMontagerLibrary::execGetAnimationPlaySpeed },
			{ "GetAnimationPose", &UChaoAnimationMontagerLibrary::execGetAnimationPose },
			{ "GetAnimationTransitionID", &UChaoAnimationMontagerLibrary::execGetAnimationTransitionID },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UChaoAnimationMontagerLibrary_GenerateMontages_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChaoAnimationMontagerLibrary_GenerateMontages_Statics::Function_MetaDataParams[] = {
		{ "Category", "Chao Animation Montager" },
		{ "ModuleRelativePath", "ChaoAnimationMontagerLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UChaoAnimationMontagerLibrary_GenerateMontages_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChaoAnimationMontagerLibrary, nullptr, "GenerateMontages", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UChaoAnimationMontagerLibrary_GenerateMontages_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UChaoAnimationMontagerLibrary_GenerateMontages_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UChaoAnimationMontagerLibrary_GenerateMontages()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UChaoAnimationMontagerLibrary_GenerateMontages_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UChaoAnimationMontagerLibrary_GetAnimationLoopType_Statics
	{
		struct ChaoAnimationMontagerLibrary_eventGetAnimationLoopType_Parms
		{
			UAnimSequence* seq;
			LoopType ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_seq;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UChaoAnimationMontagerLibrary_GetAnimationLoopType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ChaoAnimationMontagerLibrary_eventGetAnimationLoopType_Parms, ReturnValue), Z_Construct_UEnum_RandomUE4Stuff_LoopType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UChaoAnimationMontagerLibrary_GetAnimationLoopType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UChaoAnimationMontagerLibrary_GetAnimationLoopType_Statics::NewProp_seq = { "seq", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ChaoAnimationMontagerLibrary_eventGetAnimationLoopType_Parms, seq), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UChaoAnimationMontagerLibrary_GetAnimationLoopType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaoAnimationMontagerLibrary_GetAnimationLoopType_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaoAnimationMontagerLibrary_GetAnimationLoopType_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaoAnimationMontagerLibrary_GetAnimationLoopType_Statics::NewProp_seq,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChaoAnimationMontagerLibrary_GetAnimationLoopType_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animation Utility" },
		{ "ModuleRelativePath", "ChaoAnimationMontagerLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UChaoAnimationMontagerLibrary_GetAnimationLoopType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChaoAnimationMontagerLibrary, nullptr, "GetAnimationLoopType", nullptr, nullptr, sizeof(ChaoAnimationMontagerLibrary_eventGetAnimationLoopType_Parms), Z_Construct_UFunction_UChaoAnimationMontagerLibrary_GetAnimationLoopType_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UChaoAnimationMontagerLibrary_GetAnimationLoopType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UChaoAnimationMontagerLibrary_GetAnimationLoopType_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UChaoAnimationMontagerLibrary_GetAnimationLoopType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UChaoAnimationMontagerLibrary_GetAnimationLoopType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UChaoAnimationMontagerLibrary_GetAnimationLoopType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UChaoAnimationMontagerLibrary_GetAnimationPlaySpeed_Statics
	{
		struct ChaoAnimationMontagerLibrary_eventGetAnimationPlaySpeed_Parms
		{
			UAnimSequence* seq;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_seq;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UChaoAnimationMontagerLibrary_GetAnimationPlaySpeed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ChaoAnimationMontagerLibrary_eventGetAnimationPlaySpeed_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UChaoAnimationMontagerLibrary_GetAnimationPlaySpeed_Statics::NewProp_seq = { "seq", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ChaoAnimationMontagerLibrary_eventGetAnimationPlaySpeed_Parms, seq), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UChaoAnimationMontagerLibrary_GetAnimationPlaySpeed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaoAnimationMontagerLibrary_GetAnimationPlaySpeed_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaoAnimationMontagerLibrary_GetAnimationPlaySpeed_Statics::NewProp_seq,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChaoAnimationMontagerLibrary_GetAnimationPlaySpeed_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animation Utility" },
		{ "ModuleRelativePath", "ChaoAnimationMontagerLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UChaoAnimationMontagerLibrary_GetAnimationPlaySpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChaoAnimationMontagerLibrary, nullptr, "GetAnimationPlaySpeed", nullptr, nullptr, sizeof(ChaoAnimationMontagerLibrary_eventGetAnimationPlaySpeed_Parms), Z_Construct_UFunction_UChaoAnimationMontagerLibrary_GetAnimationPlaySpeed_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UChaoAnimationMontagerLibrary_GetAnimationPlaySpeed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UChaoAnimationMontagerLibrary_GetAnimationPlaySpeed_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UChaoAnimationMontagerLibrary_GetAnimationPlaySpeed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UChaoAnimationMontagerLibrary_GetAnimationPlaySpeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UChaoAnimationMontagerLibrary_GetAnimationPlaySpeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UChaoAnimationMontagerLibrary_GetAnimationPose_Statics
	{
		struct ChaoAnimationMontagerLibrary_eventGetAnimationPose_Parms
		{
			UAnimSequence* seq;
			ChaoPose ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_seq;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UChaoAnimationMontagerLibrary_GetAnimationPose_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ChaoAnimationMontagerLibrary_eventGetAnimationPose_Parms, ReturnValue), Z_Construct_UEnum_RandomUE4Stuff_ChaoPose, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UChaoAnimationMontagerLibrary_GetAnimationPose_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UChaoAnimationMontagerLibrary_GetAnimationPose_Statics::NewProp_seq = { "seq", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ChaoAnimationMontagerLibrary_eventGetAnimationPose_Parms, seq), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UChaoAnimationMontagerLibrary_GetAnimationPose_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaoAnimationMontagerLibrary_GetAnimationPose_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaoAnimationMontagerLibrary_GetAnimationPose_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaoAnimationMontagerLibrary_GetAnimationPose_Statics::NewProp_seq,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChaoAnimationMontagerLibrary_GetAnimationPose_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animation Utility" },
		{ "ModuleRelativePath", "ChaoAnimationMontagerLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UChaoAnimationMontagerLibrary_GetAnimationPose_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChaoAnimationMontagerLibrary, nullptr, "GetAnimationPose", nullptr, nullptr, sizeof(ChaoAnimationMontagerLibrary_eventGetAnimationPose_Parms), Z_Construct_UFunction_UChaoAnimationMontagerLibrary_GetAnimationPose_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UChaoAnimationMontagerLibrary_GetAnimationPose_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UChaoAnimationMontagerLibrary_GetAnimationPose_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UChaoAnimationMontagerLibrary_GetAnimationPose_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UChaoAnimationMontagerLibrary_GetAnimationPose()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UChaoAnimationMontagerLibrary_GetAnimationPose_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UChaoAnimationMontagerLibrary_GetAnimationTransitionID_Statics
	{
		struct ChaoAnimationMontagerLibrary_eventGetAnimationTransitionID_Parms
		{
			UAnimSequence* seq;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_seq;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UChaoAnimationMontagerLibrary_GetAnimationTransitionID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ChaoAnimationMontagerLibrary_eventGetAnimationTransitionID_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UChaoAnimationMontagerLibrary_GetAnimationTransitionID_Statics::NewProp_seq = { "seq", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ChaoAnimationMontagerLibrary_eventGetAnimationTransitionID_Parms, seq), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UChaoAnimationMontagerLibrary_GetAnimationTransitionID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaoAnimationMontagerLibrary_GetAnimationTransitionID_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaoAnimationMontagerLibrary_GetAnimationTransitionID_Statics::NewProp_seq,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChaoAnimationMontagerLibrary_GetAnimationTransitionID_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animation Utility" },
		{ "ModuleRelativePath", "ChaoAnimationMontagerLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UChaoAnimationMontagerLibrary_GetAnimationTransitionID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChaoAnimationMontagerLibrary, nullptr, "GetAnimationTransitionID", nullptr, nullptr, sizeof(ChaoAnimationMontagerLibrary_eventGetAnimationTransitionID_Parms), Z_Construct_UFunction_UChaoAnimationMontagerLibrary_GetAnimationTransitionID_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UChaoAnimationMontagerLibrary_GetAnimationTransitionID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UChaoAnimationMontagerLibrary_GetAnimationTransitionID_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UChaoAnimationMontagerLibrary_GetAnimationTransitionID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UChaoAnimationMontagerLibrary_GetAnimationTransitionID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UChaoAnimationMontagerLibrary_GetAnimationTransitionID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UChaoAnimationMontagerLibrary_NoRegister()
	{
		return UChaoAnimationMontagerLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UChaoAnimationMontagerLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UChaoAnimationMontagerLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_RandomUE4Stuff,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UChaoAnimationMontagerLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UChaoAnimationMontagerLibrary_GenerateMontages, "GenerateMontages" }, // 1871963906
		{ &Z_Construct_UFunction_UChaoAnimationMontagerLibrary_GetAnimationLoopType, "GetAnimationLoopType" }, // 1264973558
		{ &Z_Construct_UFunction_UChaoAnimationMontagerLibrary_GetAnimationPlaySpeed, "GetAnimationPlaySpeed" }, // 31567942
		{ &Z_Construct_UFunction_UChaoAnimationMontagerLibrary_GetAnimationPose, "GetAnimationPose" }, // 2792656328
		{ &Z_Construct_UFunction_UChaoAnimationMontagerLibrary_GetAnimationTransitionID, "GetAnimationTransitionID" }, // 1858637380
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaoAnimationMontagerLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "ChaoAnimationMontagerLibrary.h" },
		{ "ModuleRelativePath", "ChaoAnimationMontagerLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UChaoAnimationMontagerLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UChaoAnimationMontagerLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UChaoAnimationMontagerLibrary_Statics::ClassParams = {
		&UChaoAnimationMontagerLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UChaoAnimationMontagerLibrary_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UChaoAnimationMontagerLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UChaoAnimationMontagerLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UChaoAnimationMontagerLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UChaoAnimationMontagerLibrary, 249432599);
	template<> RANDOMUE4STUFF_API UClass* StaticClass<UChaoAnimationMontagerLibrary>()
	{
		return UChaoAnimationMontagerLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UChaoAnimationMontagerLibrary(Z_Construct_UClass_UChaoAnimationMontagerLibrary, &UChaoAnimationMontagerLibrary::StaticClass, TEXT("/Script/RandomUE4Stuff"), TEXT("UChaoAnimationMontagerLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UChaoAnimationMontagerLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
