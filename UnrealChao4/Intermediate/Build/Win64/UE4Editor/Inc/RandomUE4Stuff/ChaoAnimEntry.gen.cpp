// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RandomUE4Stuff/ChaoAnimEntry.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChaoAnimEntry() {}
// Cross Module References
	RANDOMUE4STUFF_API UEnum* Z_Construct_UEnum_RandomUE4Stuff_LoopType();
	UPackage* Z_Construct_UPackage__Script_RandomUE4Stuff();
	RANDOMUE4STUFF_API UEnum* Z_Construct_UEnum_RandomUE4Stuff_ChaoPose();
// End Cross Module References
	static UEnum* LoopType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_RandomUE4Stuff_LoopType, Z_Construct_UPackage__Script_RandomUE4Stuff(), TEXT("LoopType"));
		}
		return Singleton;
	}
	template<> RANDOMUE4STUFF_API UEnum* StaticEnum<LoopType>()
	{
		return LoopType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_LoopType(LoopType_StaticEnum, TEXT("/Script/RandomUE4Stuff"), TEXT("LoopType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_RandomUE4Stuff_LoopType_Hash() { return 2847642798U; }
	UEnum* Z_Construct_UEnum_RandomUE4Stuff_LoopType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_RandomUE4Stuff();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("LoopType"), 0, Get_Z_Construct_UEnum_RandomUE4Stuff_LoopType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "LoopType::Loop_to_Frame_0", (int64)LoopType::Loop_to_Frame_0 },
				{ "LoopType::Loop_to_Frame_1", (int64)LoopType::Loop_to_Frame_1 },
				{ "LoopType::Return_to_Previous_Animation", (int64)LoopType::Return_to_Previous_Animation },
				{ "LoopType::None", (int64)LoopType::None },
				{ "LoopType::Transition_with_Blend", (int64)LoopType::Transition_with_Blend },
				{ "LoopType::Transition_Simple", (int64)LoopType::Transition_Simple },
				{ "LoopType::TYPE6", (int64)LoopType::TYPE6 },
				{ "LoopType::Pingpong", (int64)LoopType::Pingpong },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Loop_to_Frame_0.Name", "LoopType::Loop_to_Frame_0" },
				{ "Loop_to_Frame_1.Name", "LoopType::Loop_to_Frame_1" },
				{ "ModuleRelativePath", "ChaoAnimEntry.h" },
				{ "None.Name", "LoopType::None" },
				{ "Pingpong.Name", "LoopType::Pingpong" },
				{ "Return_to_Previous_Animation.Name", "LoopType::Return_to_Previous_Animation" },
				{ "Transition_Simple.Name", "LoopType::Transition_Simple" },
				{ "Transition_with_Blend.Name", "LoopType::Transition_with_Blend" },
				{ "TYPE6.Name", "LoopType::TYPE6" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_RandomUE4Stuff,
				nullptr,
				"LoopType",
				"LoopType",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ChaoPose_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_RandomUE4Stuff_ChaoPose, Z_Construct_UPackage__Script_RandomUE4Stuff(), TEXT("ChaoPose"));
		}
		return Singleton;
	}
	template<> RANDOMUE4STUFF_API UEnum* StaticEnum<ChaoPose>()
	{
		return ChaoPose_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ChaoPose(ChaoPose_StaticEnum, TEXT("/Script/RandomUE4Stuff"), TEXT("ChaoPose"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_RandomUE4Stuff_ChaoPose_Hash() { return 3646336219U; }
	UEnum* Z_Construct_UEnum_RandomUE4Stuff_ChaoPose()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_RandomUE4Stuff();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ChaoPose"), 0, Get_Z_Construct_UEnum_RandomUE4Stuff_ChaoPose_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ChaoPose::Standing", (int64)ChaoPose::Standing },
				{ "ChaoPose::Sitting", (int64)ChaoPose::Sitting },
				{ "ChaoPose::On_Back", (int64)ChaoPose::On_Back },
				{ "ChaoPose::On_Belly", (int64)ChaoPose::On_Belly },
				{ "ChaoPose::In_Air", (int64)ChaoPose::In_Air },
				{ "ChaoPose::Hopping", (int64)ChaoPose::Hopping },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Hopping.Name", "ChaoPose::Hopping" },
				{ "In_Air.Name", "ChaoPose::In_Air" },
				{ "ModuleRelativePath", "ChaoAnimEntry.h" },
				{ "On_Back.Name", "ChaoPose::On_Back" },
				{ "On_Belly.Name", "ChaoPose::On_Belly" },
				{ "Sitting.Name", "ChaoPose::Sitting" },
				{ "Standing.Name", "ChaoPose::Standing" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_RandomUE4Stuff,
				nullptr,
				"ChaoPose",
				"ChaoPose",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
