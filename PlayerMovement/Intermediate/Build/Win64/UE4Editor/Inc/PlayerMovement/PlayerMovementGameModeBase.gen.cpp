// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayerMovement/PlayerMovementGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerMovementGameModeBase() {}
// Cross Module References
	PLAYERMOVEMENT_API UClass* Z_Construct_UClass_APlayerMovementGameModeBase_NoRegister();
	PLAYERMOVEMENT_API UClass* Z_Construct_UClass_APlayerMovementGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_PlayerMovement();
// End Cross Module References
	void APlayerMovementGameModeBase::StaticRegisterNativesAPlayerMovementGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_APlayerMovementGameModeBase_NoRegister()
	{
		return APlayerMovementGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_APlayerMovementGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APlayerMovementGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_PlayerMovement,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerMovementGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "PlayerMovementGameModeBase.h" },
		{ "ModuleRelativePath", "PlayerMovementGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APlayerMovementGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlayerMovementGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APlayerMovementGameModeBase_Statics::ClassParams = {
		&APlayerMovementGameModeBase::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009002A8u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_APlayerMovementGameModeBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_APlayerMovementGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APlayerMovementGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APlayerMovementGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APlayerMovementGameModeBase, 1701662853);
	static FCompiledInDefer Z_CompiledInDefer_UClass_APlayerMovementGameModeBase(Z_Construct_UClass_APlayerMovementGameModeBase, &APlayerMovementGameModeBase::StaticClass, TEXT("/Script/PlayerMovement"), TEXT("APlayerMovementGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APlayerMovementGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
