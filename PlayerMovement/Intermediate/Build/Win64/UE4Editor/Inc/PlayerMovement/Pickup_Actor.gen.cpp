// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayerMovement/Public/UI/Pickup_Actor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePickup_Actor() {}
// Cross Module References
	PLAYERMOVEMENT_API UClass* Z_Construct_UClass_APickup_Actor_NoRegister();
	PLAYERMOVEMENT_API UClass* Z_Construct_UClass_APickup_Actor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_PlayerMovement();
// End Cross Module References
	void APickup_Actor::StaticRegisterNativesAPickup_Actor()
	{
	}
	UClass* Z_Construct_UClass_APickup_Actor_NoRegister()
	{
		return APickup_Actor::StaticClass();
	}
	struct Z_Construct_UClass_APickup_Actor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APickup_Actor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_PlayerMovement,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APickup_Actor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UI/Pickup_Actor.h" },
		{ "ModuleRelativePath", "Public/UI/Pickup_Actor.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APickup_Actor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APickup_Actor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APickup_Actor_Statics::ClassParams = {
		&APickup_Actor::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_APickup_Actor_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_APickup_Actor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APickup_Actor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APickup_Actor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APickup_Actor, 2363860269);
	static FCompiledInDefer Z_CompiledInDefer_UClass_APickup_Actor(Z_Construct_UClass_APickup_Actor, &APickup_Actor::StaticClass, TEXT("/Script/PlayerMovement"), TEXT("APickup_Actor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APickup_Actor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
