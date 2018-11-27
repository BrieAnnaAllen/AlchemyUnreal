// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayerMovement/Public/UI/Inventory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInventory() {}
// Cross Module References
	PLAYERMOVEMENT_API UClass* Z_Construct_UClass_UInventory_NoRegister();
	PLAYERMOVEMENT_API UClass* Z_Construct_UClass_UInventory();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_PlayerMovement();
	PLAYERMOVEMENT_API UFunction* Z_Construct_UFunction_UInventory_OnResumeClicked();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
// End Cross Module References
	void UInventory::StaticRegisterNativesUInventory()
	{
		UClass* Class = UInventory::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnResumeClicked", &UInventory::execOnResumeClicked },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UInventory_OnResumeClicked_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventory_OnResumeClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/Inventory.h" },
		{ "ToolTip", "when the button is clicked" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventory_OnResumeClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventory, "OnResumeClicked", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00040401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInventory_OnResumeClicked_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UInventory_OnResumeClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInventory_OnResumeClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInventory_OnResumeClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UInventory_NoRegister()
	{
		return UInventory::StaticClass();
	}
	struct Z_Construct_UClass_UInventory_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResumeButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ResumeButton;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInventory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_PlayerMovement,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UInventory_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UInventory_OnResumeClicked, "OnResumeClicked" }, // 3058319446
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventory_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UI/Inventory.h" },
		{ "ModuleRelativePath", "Public/UI/Inventory.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventory_Statics::NewProp_ResumeButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/Inventory.h" },
		{ "ToolTip", "resume game button" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInventory_Statics::NewProp_ResumeButton = { UE4CodeGen_Private::EPropertyClass::Object, "ResumeButton", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000080008, 1, nullptr, STRUCT_OFFSET(UInventory, ResumeButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UInventory_Statics::NewProp_ResumeButton_MetaData, ARRAY_COUNT(Z_Construct_UClass_UInventory_Statics::NewProp_ResumeButton_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInventory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventory_Statics::NewProp_ResumeButton,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInventory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInventory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInventory_Statics::ClassParams = {
		&UInventory::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x00B010A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_UInventory_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UInventory_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UInventory_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UInventory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInventory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInventory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInventory, 2068034894);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInventory(Z_Construct_UClass_UInventory, &UInventory::StaticClass, TEXT("/Script/PlayerMovement"), TEXT("UInventory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInventory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
