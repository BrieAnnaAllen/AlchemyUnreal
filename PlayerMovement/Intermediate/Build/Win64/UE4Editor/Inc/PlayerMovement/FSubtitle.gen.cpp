// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayerMovement/FSubtitle.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFSubtitle() {}
// Cross Module References
	PLAYERMOVEMENT_API UScriptStruct* Z_Construct_UScriptStruct_FSubtitle();
	UPackage* Z_Construct_UPackage__Script_PlayerMovement();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
// End Cross Module References
class UScriptStruct* FSubtitle::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYERMOVEMENT_API uint32 Get_Z_Construct_UScriptStruct_FSubtitle_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSubtitle, Z_Construct_UPackage__Script_PlayerMovement(), TEXT("Subtitle"), sizeof(FSubtitle), Get_Z_Construct_UScriptStruct_FSubtitle_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSubtitle(FSubtitle::StaticStruct, TEXT("/Script/PlayerMovement"), TEXT("Subtitle"), false, nullptr, nullptr);
static struct FScriptStruct_PlayerMovement_StaticRegisterNativesFSubtitle
{
	FScriptStruct_PlayerMovement_StaticRegisterNativesFSubtitle()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("Subtitle")),new UScriptStruct::TCppStructOps<FSubtitle>);
	}
} ScriptStruct_PlayerMovement_StaticRegisterNativesFSubtitle;
	struct Z_Construct_UScriptStruct_FSubtitle_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssociatedTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AssociatedTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Subtitle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Subtitle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubtitle_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "FSubtitle.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSubtitle_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSubtitle>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubtitle_Statics::NewProp_AssociatedTime_MetaData[] = {
		{ "Category", "Subtitle" },
		{ "ModuleRelativePath", "FSubtitle.h" },
		{ "ToolTip", "timer if we wish to keep it" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSubtitle_Statics::NewProp_AssociatedTime = { UE4CodeGen_Private::EPropertyClass::Float, "AssociatedTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FSubtitle, AssociatedTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FSubtitle_Statics::NewProp_AssociatedTime_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSubtitle_Statics::NewProp_AssociatedTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubtitle_Statics::NewProp_Subtitle_MetaData[] = {
		{ "Category", "Subtitle" },
		{ "ModuleRelativePath", "FSubtitle.h" },
		{ "ToolTip", "subtitle that will be displayed" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSubtitle_Statics::NewProp_Subtitle = { UE4CodeGen_Private::EPropertyClass::Str, "Subtitle", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FSubtitle, Subtitle), METADATA_PARAMS(Z_Construct_UScriptStruct_FSubtitle_Statics::NewProp_Subtitle_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSubtitle_Statics::NewProp_Subtitle_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSubtitle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubtitle_Statics::NewProp_AssociatedTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubtitle_Statics::NewProp_Subtitle,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSubtitle_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayerMovement,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"Subtitle",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FSubtitle),
		alignof(FSubtitle),
		Z_Construct_UScriptStruct_FSubtitle_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FSubtitle_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSubtitle_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FSubtitle_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSubtitle()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSubtitle_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayerMovement();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("Subtitle"), sizeof(FSubtitle), Get_Z_Construct_UScriptStruct_FSubtitle_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSubtitle_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSubtitle_CRC() { return 2969993460U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
