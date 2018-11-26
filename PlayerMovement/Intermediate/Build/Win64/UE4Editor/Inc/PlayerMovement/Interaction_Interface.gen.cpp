// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayerMovement/Public/UI/Interaction_Interface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInteraction_Interface() {}
// Cross Module References
	PLAYERMOVEMENT_API UClass* Z_Construct_UClass_UInteraction_Interface_NoRegister();
	PLAYERMOVEMENT_API UClass* Z_Construct_UClass_UInteraction_Interface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_PlayerMovement();
	PLAYERMOVEMENT_API UFunction* Z_Construct_UFunction_UInteraction_Interface_OnInteract();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	void IInteraction_Interface::OnInteract(AActor* Interactor)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnInteract instead.");
	}
	void UInteraction_Interface::StaticRegisterNativesUInteraction_Interface()
	{
		UClass* Class = UInteraction_Interface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnInteract", &IInteraction_Interface::execOnInteract },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UInteraction_Interface_OnInteract_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Interactor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInteraction_Interface_OnInteract_Statics::NewProp_Interactor = { UE4CodeGen_Private::EPropertyClass::Object, "Interactor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Interaction_Interface_eventOnInteract_Parms, Interactor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInteraction_Interface_OnInteract_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteraction_Interface_OnInteract_Statics::NewProp_Interactor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteraction_Interface_OnInteract_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interaction Interface" },
		{ "ModuleRelativePath", "Public/UI/Interaction_Interface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteraction_Interface_OnInteract_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteraction_Interface, "OnInteract", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020C00, sizeof(Interaction_Interface_eventOnInteract_Parms), Z_Construct_UFunction_UInteraction_Interface_OnInteract_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UInteraction_Interface_OnInteract_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInteraction_Interface_OnInteract_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UInteraction_Interface_OnInteract_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInteraction_Interface_OnInteract()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInteraction_Interface_OnInteract_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UInteraction_Interface_NoRegister()
	{
		return UInteraction_Interface::StaticClass();
	}
	struct Z_Construct_UClass_UInteraction_Interface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInteraction_Interface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_PlayerMovement,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UInteraction_Interface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UInteraction_Interface_OnInteract, "OnInteract" }, // 3412378763
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteraction_Interface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/UI/Interaction_Interface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInteraction_Interface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IInteraction_Interface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInteraction_Interface_Statics::ClassParams = {
		&UInteraction_Interface::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x000040A1u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UInteraction_Interface_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UInteraction_Interface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInteraction_Interface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInteraction_Interface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInteraction_Interface, 1206288917);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInteraction_Interface(Z_Construct_UClass_UInteraction_Interface, &UInteraction_Interface::StaticClass, TEXT("/Script/PlayerMovement"), TEXT("UInteraction_Interface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInteraction_Interface);
	static FName NAME_UInteraction_Interface_OnInteract = FName(TEXT("OnInteract"));
	void IInteraction_Interface::Execute_OnInteract(UObject* O, AActor* Interactor)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UInteraction_Interface::StaticClass()));
		Interaction_Interface_eventOnInteract_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UInteraction_Interface_OnInteract);
		if (Func)
		{
			Parms.Interactor=Interactor;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IInteraction_Interface*)(O->GetNativeInterfaceAddress(UInteraction_Interface::StaticClass())))
		{
			I->OnInteract_Implementation(Interactor);
		}
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
