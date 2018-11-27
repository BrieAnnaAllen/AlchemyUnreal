// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayerMovement/PawnPlayerMove.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePawnPlayerMove() {}
// Cross Module References
	PLAYERMOVEMENT_API UClass* Z_Construct_UClass_APawnPlayerMove_NoRegister();
	PLAYERMOVEMENT_API UClass* Z_Construct_UClass_APawnPlayerMove();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_PlayerMovement();
	PLAYERMOVEMENT_API UFunction* Z_Construct_UFunction_APawnPlayerMove_EndInventory();
	PLAYERMOVEMENT_API UFunction* Z_Construct_UFunction_APawnPlayerMove_Interact();
	PLAYERMOVEMENT_API UFunction* Z_Construct_UFunction_APawnPlayerMove_StartInventory();
	PLAYERMOVEMENT_API UClass* Z_Construct_UClass_AGenericHUD_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCapsuleComponent_NoRegister();
// End Cross Module References
	void APawnPlayerMove::StaticRegisterNativesAPawnPlayerMove()
	{
		UClass* Class = APawnPlayerMove::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EndInventory", &APawnPlayerMove::execEndInventory },
			{ "Interact", &APawnPlayerMove::execInteract },
			{ "StartInventory", &APawnPlayerMove::execStartInventory },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_APawnPlayerMove_EndInventory_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APawnPlayerMove_EndInventory_Statics::Function_MetaDataParams[] = {
		{ "Category", "Character|Input" },
		{ "ModuleRelativePath", "PawnPlayerMove.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APawnPlayerMove_EndInventory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APawnPlayerMove, "EndInventory", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APawnPlayerMove_EndInventory_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_APawnPlayerMove_EndInventory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APawnPlayerMove_EndInventory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APawnPlayerMove_EndInventory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APawnPlayerMove_Interact_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APawnPlayerMove_Interact_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PawnPlayerMove.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APawnPlayerMove_Interact_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APawnPlayerMove, "Interact", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00080401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APawnPlayerMove_Interact_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_APawnPlayerMove_Interact_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APawnPlayerMove_Interact()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APawnPlayerMove_Interact_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APawnPlayerMove_StartInventory_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APawnPlayerMove_StartInventory_Statics::Function_MetaDataParams[] = {
		{ "Category", "Character|Input" },
		{ "ModuleRelativePath", "PawnPlayerMove.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APawnPlayerMove_StartInventory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APawnPlayerMove, "StartInventory", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APawnPlayerMove_StartInventory_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_APawnPlayerMove_StartInventory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APawnPlayerMove_StartInventory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APawnPlayerMove_StartInventory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_APawnPlayerMove_NoRegister()
	{
		return APawnPlayerMove::StaticClass();
	}
	struct Z_Construct_UClass_APawnPlayerMove_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InteractionDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InteractionDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HudReference_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HudReference;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraHeightOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CameraHeightOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CameraDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsCameraPitchInverted_MetaData[];
#endif
		static void NewProp_IsCameraPitchInverted_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsCameraPitchInverted;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsCameraYawInverted_MetaData[];
#endif
		static void NewProp_IsCameraYawInverted_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsCameraYawInverted;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharacterMoveSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CharacterMoveSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpringArm_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpringArm;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Camera_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Camera;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkeletalMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SkeletalMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StaticMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Capsule_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Capsule;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APawnPlayerMove_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_PlayerMovement,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_APawnPlayerMove_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_APawnPlayerMove_EndInventory, "EndInventory" }, // 1016203393
		{ &Z_Construct_UFunction_APawnPlayerMove_Interact, "Interact" }, // 614763273
		{ &Z_Construct_UFunction_APawnPlayerMove_StartInventory, "StartInventory" }, // 1003117119
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APawnPlayerMove_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "PawnPlayerMove.h" },
		{ "ModuleRelativePath", "PawnPlayerMove.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APawnPlayerMove_Statics::NewProp_InteractionDistance_MetaData[] = {
		{ "Category", "Character" },
		{ "ModuleRelativePath", "PawnPlayerMove.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APawnPlayerMove_Statics::NewProp_InteractionDistance = { UE4CodeGen_Private::EPropertyClass::Float, "InteractionDistance", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000005, 1, nullptr, STRUCT_OFFSET(APawnPlayerMove, InteractionDistance), METADATA_PARAMS(Z_Construct_UClass_APawnPlayerMove_Statics::NewProp_InteractionDistance_MetaData, ARRAY_COUNT(Z_Construct_UClass_APawnPlayerMove_Statics::NewProp_InteractionDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APawnPlayerMove_Statics::NewProp_HudReference_MetaData[] = {
		{ "ModuleRelativePath", "PawnPlayerMove.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APawnPlayerMove_Statics::NewProp_HudReference = { UE4CodeGen_Private::EPropertyClass::Object, "HudReference", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000000, 1, nullptr, STRUCT_OFFSET(APawnPlayerMove, HudReference), Z_Construct_UClass_AGenericHUD_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APawnPlayerMove_Statics::NewProp_HudReference_MetaData, ARRAY_COUNT(Z_Construct_UClass_APawnPlayerMove_Statics::NewProp_HudReference_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APawnPlayerMove_Statics::NewProp_CameraHeightOffset_MetaData[] = {
		{ "Category", "Character" },
		{ "ModuleRelativePath", "PawnPlayerMove.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APawnPlayerMove_Statics::NewProp_CameraHeightOffset = { UE4CodeGen_Private::EPropertyClass::Float, "CameraHeightOffset", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000010005, 1, nullptr, STRUCT_OFFSET(APawnPlayerMove, CameraHeightOffset), METADATA_PARAMS(Z_Construct_UClass_APawnPlayerMove_Statics::NewProp_CameraHeightOffset_MetaData, ARRAY_COUNT(Z_Construct_UClass_APawnPlayerMove_Statics::NewProp_CameraHeightOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APawnPlayerMove_Statics::NewProp_CameraDistance_MetaData[] = {
		{ "Category", "Character" },
		{ "ModuleRelativePath", "PawnPlayerMove.h" },
		{ "ToolTip", "Distance of Camera to Camera Boom center" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APawnPlayerMove_Statics::NewProp_CameraDistance = { UE4CodeGen_Private::EPropertyClass::Float, "CameraDistance", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000010005, 1, nullptr, STRUCT_OFFSET(APawnPlayerMove, CameraDistance), METADATA_PARAMS(Z_Construct_UClass_APawnPlayerMove_Statics::NewProp_CameraDistance_MetaData, ARRAY_COUNT(Z_Construct_UClass_APawnPlayerMove_Statics::NewProp_CameraDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APawnPlayerMove_Statics::NewProp_IsCameraPitchInverted_MetaData[] = {
		{ "Category", "Character" },
		{ "ModuleRelativePath", "PawnPlayerMove.h" },
		{ "ToolTip", "Invert pitch axis of camera?" },
	};
#endif
	void Z_Construct_UClass_APawnPlayerMove_Statics::NewProp_IsCameraPitchInverted_SetBit(void* Obj)
	{
		((APawnPlayerMove*)Obj)->IsCameraPitchInverted = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APawnPlayerMove_Statics::NewProp_IsCameraPitchInverted = { UE4CodeGen_Private::EPropertyClass::Bool, "IsCameraPitchInverted", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000010005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(APawnPlayerMove), &Z_Construct_UClass_APawnPlayerMove_Statics::NewProp_IsCameraPitchInverted_SetBit, METADATA_PARAMS(Z_Construct_UClass_APawnPlayerMove_Statics::NewProp_IsCameraPitchInverted_MetaData, ARRAY_COUNT(Z_Construct_UClass_APawnPlayerMove_Statics::NewProp_IsCameraPitchInverted_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APawnPlayerMove_Statics::NewProp_IsCameraYawInverted_MetaData[] = {
		{ "Category", "Character" },
		{ "ModuleRelativePath", "PawnPlayerMove.h" },
		{ "ToolTip", "Invert yaw axis of camera?" },
	};
#endif
	void Z_Construct_UClass_APawnPlayerMove_Statics::NewProp_IsCameraYawInverted_SetBit(void* Obj)
	{
		((APawnPlayerMove*)Obj)->IsCameraYawInverted = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APawnPlayerMove_Statics::NewProp_IsCameraYawInverted = { UE4CodeGen_Private::EPropertyClass::Bool, "IsCameraYawInverted", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000010005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(APawnPlayerMove), &Z_Construct_UClass_APawnPlayerMove_Statics::NewProp_IsCameraYawInverted_SetBit, METADATA_PARAMS(Z_Construct_UClass_APawnPlayerMove_Statics::NewProp_IsCameraYawInverted_MetaData, ARRAY_COUNT(Z_Construct_UClass_APawnPlayerMove_Statics::NewProp_IsCameraYawInverted_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APawnPlayerMove_Statics::NewProp_CharacterMoveSpeed_MetaData[] = {
		{ "Category", "Character" },
		{ "ModuleRelativePath", "PawnPlayerMove.h" },
		{ "ToolTip", "Character move speed" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APawnPlayerMove_Statics::NewProp_CharacterMoveSpeed = { UE4CodeGen_Private::EPropertyClass::Float, "CharacterMoveSpeed", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(APawnPlayerMove, CharacterMoveSpeed), METADATA_PARAMS(Z_Construct_UClass_APawnPlayerMove_Statics::NewProp_CharacterMoveSpeed_MetaData, ARRAY_COUNT(Z_Construct_UClass_APawnPlayerMove_Statics::NewProp_CharacterMoveSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APawnPlayerMove_Statics::NewProp_SpringArm_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PawnPlayerMove.h" },
		{ "ToolTip", "Camera Boom to keep the camera at a certain distance" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APawnPlayerMove_Statics::NewProp_SpringArm = { UE4CodeGen_Private::EPropertyClass::Object, "SpringArm", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x001000000009000d, 1, nullptr, STRUCT_OFFSET(APawnPlayerMove, SpringArm), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APawnPlayerMove_Statics::NewProp_SpringArm_MetaData, ARRAY_COUNT(Z_Construct_UClass_APawnPlayerMove_Statics::NewProp_SpringArm_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APawnPlayerMove_Statics::NewProp_Camera_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PawnPlayerMove.h" },
		{ "ToolTip", "Camera for Player" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APawnPlayerMove_Statics::NewProp_Camera = { UE4CodeGen_Private::EPropertyClass::Object, "Camera", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x001000000009000d, 1, nullptr, STRUCT_OFFSET(APawnPlayerMove, Camera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APawnPlayerMove_Statics::NewProp_Camera_MetaData, ARRAY_COUNT(Z_Construct_UClass_APawnPlayerMove_Statics::NewProp_Camera_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APawnPlayerMove_Statics::NewProp_SkeletalMesh_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PawnPlayerMove.h" },
		{ "ToolTip", "Skeletal Mesh for Character Models" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APawnPlayerMove_Statics::NewProp_SkeletalMesh = { UE4CodeGen_Private::EPropertyClass::Object, "SkeletalMesh", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x001000000009000d, 1, nullptr, STRUCT_OFFSET(APawnPlayerMove, SkeletalMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APawnPlayerMove_Statics::NewProp_SkeletalMesh_MetaData, ARRAY_COUNT(Z_Construct_UClass_APawnPlayerMove_Statics::NewProp_SkeletalMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APawnPlayerMove_Statics::NewProp_StaticMesh_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PawnPlayerMove.h" },
		{ "ToolTip", "Static Mesh for something?" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APawnPlayerMove_Statics::NewProp_StaticMesh = { UE4CodeGen_Private::EPropertyClass::Object, "StaticMesh", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x001000000008000d, 1, nullptr, STRUCT_OFFSET(APawnPlayerMove, StaticMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APawnPlayerMove_Statics::NewProp_StaticMesh_MetaData, ARRAY_COUNT(Z_Construct_UClass_APawnPlayerMove_Statics::NewProp_StaticMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APawnPlayerMove_Statics::NewProp_Capsule_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PawnPlayerMove.h" },
		{ "ToolTip", "Capsule Collider" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APawnPlayerMove_Statics::NewProp_Capsule = { UE4CodeGen_Private::EPropertyClass::Object, "Capsule", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x001000000009000d, 1, nullptr, STRUCT_OFFSET(APawnPlayerMove, Capsule), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APawnPlayerMove_Statics::NewProp_Capsule_MetaData, ARRAY_COUNT(Z_Construct_UClass_APawnPlayerMove_Statics::NewProp_Capsule_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APawnPlayerMove_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APawnPlayerMove_Statics::NewProp_InteractionDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APawnPlayerMove_Statics::NewProp_HudReference,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APawnPlayerMove_Statics::NewProp_CameraHeightOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APawnPlayerMove_Statics::NewProp_CameraDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APawnPlayerMove_Statics::NewProp_IsCameraPitchInverted,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APawnPlayerMove_Statics::NewProp_IsCameraYawInverted,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APawnPlayerMove_Statics::NewProp_CharacterMoveSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APawnPlayerMove_Statics::NewProp_SpringArm,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APawnPlayerMove_Statics::NewProp_Camera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APawnPlayerMove_Statics::NewProp_SkeletalMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APawnPlayerMove_Statics::NewProp_StaticMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APawnPlayerMove_Statics::NewProp_Capsule,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APawnPlayerMove_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APawnPlayerMove>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APawnPlayerMove_Statics::ClassParams = {
		&APawnPlayerMove::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_APawnPlayerMove_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_APawnPlayerMove_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_APawnPlayerMove_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_APawnPlayerMove_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APawnPlayerMove()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APawnPlayerMove_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APawnPlayerMove, 113920956);
	static FCompiledInDefer Z_CompiledInDefer_UClass_APawnPlayerMove(Z_Construct_UClass_APawnPlayerMove, &APawnPlayerMove::StaticClass, TEXT("/Script/PlayerMovement"), TEXT("APawnPlayerMove"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APawnPlayerMove);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
