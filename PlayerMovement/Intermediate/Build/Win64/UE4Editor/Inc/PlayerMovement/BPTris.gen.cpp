// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayerMovement/BPTris.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBPTris() {}
// Cross Module References
	PLAYERMOVEMENT_API UClass* Z_Construct_UClass_ABPTris_NoRegister();
	PLAYERMOVEMENT_API UClass* Z_Construct_UClass_ABPTris();
	PLAYERMOVEMENT_API UClass* Z_Construct_UClass_APawnPlayerMove();
	UPackage* Z_Construct_UPackage__Script_PlayerMovement();
// End Cross Module References
	void ABPTris::StaticRegisterNativesABPTris()
	{
	}
	UClass* Z_Construct_UClass_ABPTris_NoRegister()
	{
		return ABPTris::StaticClass();
	}
	struct Z_Construct_UClass_ABPTris_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABPTris_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawnPlayerMove,
		(UObject* (*)())Z_Construct_UPackage__Script_PlayerMovement,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABPTris_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "BPTris.h" },
		{ "ModuleRelativePath", "BPTris.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABPTris_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABPTris>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABPTris_Statics::ClassParams = {
		&ABPTris::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_ABPTris_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ABPTris_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABPTris()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABPTris_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABPTris, 3789380612);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABPTris(Z_Construct_UClass_ABPTris, &ABPTris::StaticClass, TEXT("/Script/PlayerMovement"), TEXT("ABPTris"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABPTris);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
