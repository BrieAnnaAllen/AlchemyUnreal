// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayerMovement/Public/UI/GenericHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGenericHUD() {}
// Cross Module References
	PLAYERMOVEMENT_API UClass* Z_Construct_UClass_AGenericHUD_NoRegister();
	PLAYERMOVEMENT_API UClass* Z_Construct_UClass_AGenericHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_PlayerMovement();
	PLAYERMOVEMENT_API UFunction* Z_Construct_UFunction_AGenericHUD_HideAllMenus();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
// End Cross Module References
	void AGenericHUD::StaticRegisterNativesAGenericHUD()
	{
		UClass* Class = AGenericHUD::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HideAllMenus", &AGenericHUD::execHideAllMenus },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AGenericHUD_HideAllMenus_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGenericHUD_HideAllMenus_Statics::Function_MetaDataParams[] = {
		{ "Category", "GenericHUD" },
		{ "ModuleRelativePath", "Public/UI/GenericHUD.h" },
		{ "ToolTip", "hides all other menu's on screen" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGenericHUD_HideAllMenus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGenericHUD, "HideAllMenus", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGenericHUD_HideAllMenus_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AGenericHUD_HideAllMenus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGenericHUD_HideAllMenus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGenericHUD_HideAllMenus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AGenericHUD_NoRegister()
	{
		return AGenericHUD::StaticClass();
	}
	struct Z_Construct_UClass_AGenericHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PauseMenuClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_PauseMenuClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeadMenuClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_DeadMenuClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameplayHUDClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_GameplayHUDClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGenericHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_PlayerMovement,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AGenericHUD_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AGenericHUD_HideAllMenus, "HideAllMenus" }, // 204607648
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGenericHUD_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "UI/GenericHUD.h" },
		{ "ModuleRelativePath", "Public/UI/GenericHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGenericHUD_Statics::NewProp_PauseMenuClass_MetaData[] = {
		{ "Category", "GenericHUD" },
		{ "ModuleRelativePath", "Public/UI/GenericHUD.h" },
		{ "ToolTip", "the menu to use when the player pauses the game" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AGenericHUD_Statics::NewProp_PauseMenuClass = { UE4CodeGen_Private::EPropertyClass::Class, "PauseMenuClass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0024080000010005, 1, nullptr, STRUCT_OFFSET(AGenericHUD, PauseMenuClass), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AGenericHUD_Statics::NewProp_PauseMenuClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_AGenericHUD_Statics::NewProp_PauseMenuClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGenericHUD_Statics::NewProp_DeadMenuClass_MetaData[] = {
		{ "Category", "GenericHUD" },
		{ "ModuleRelativePath", "Public/UI/GenericHUD.h" },
		{ "ToolTip", "the menu to use when the player dies" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AGenericHUD_Statics::NewProp_DeadMenuClass = { UE4CodeGen_Private::EPropertyClass::Class, "DeadMenuClass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0024080000010005, 1, nullptr, STRUCT_OFFSET(AGenericHUD, DeadMenuClass), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AGenericHUD_Statics::NewProp_DeadMenuClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_AGenericHUD_Statics::NewProp_DeadMenuClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGenericHUD_Statics::NewProp_GameplayHUDClass_MetaData[] = {
		{ "Category", "GenericHUD" },
		{ "ModuleRelativePath", "Public/UI/GenericHUD.h" },
		{ "ToolTip", "The player's hud during gameplay, showing health, ammo, and the crosshair" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AGenericHUD_Statics::NewProp_GameplayHUDClass = { UE4CodeGen_Private::EPropertyClass::Class, "GameplayHUDClass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0024080000010005, 1, nullptr, STRUCT_OFFSET(AGenericHUD, GameplayHUDClass), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AGenericHUD_Statics::NewProp_GameplayHUDClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_AGenericHUD_Statics::NewProp_GameplayHUDClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGenericHUD_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGenericHUD_Statics::NewProp_PauseMenuClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGenericHUD_Statics::NewProp_DeadMenuClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGenericHUD_Statics::NewProp_GameplayHUDClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGenericHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGenericHUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGenericHUD_Statics::ClassParams = {
		&AGenericHUD::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009002ACu,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_AGenericHUD_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AGenericHUD_Statics::PropPointers),
		"Game",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AGenericHUD_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AGenericHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGenericHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGenericHUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGenericHUD, 96090637);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGenericHUD(Z_Construct_UClass_AGenericHUD, &AGenericHUD::StaticClass, TEXT("/Script/PlayerMovement"), TEXT("AGenericHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGenericHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
