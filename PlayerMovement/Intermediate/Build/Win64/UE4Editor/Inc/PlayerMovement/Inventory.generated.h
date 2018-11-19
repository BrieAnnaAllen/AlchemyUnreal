// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PLAYERMOVEMENT_Inventory_generated_h
#error "Inventory.generated.h already included, missing '#pragma once' in Inventory.h"
#endif
#define PLAYERMOVEMENT_Inventory_generated_h

#define PlayerMovement_Source_PlayerMovement_Public_UI_Inventory_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnResumeClicked) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnResumeClicked(); \
		P_NATIVE_END; \
	}


#define PlayerMovement_Source_PlayerMovement_Public_UI_Inventory_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnResumeClicked) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnResumeClicked(); \
		P_NATIVE_END; \
	}


#define PlayerMovement_Source_PlayerMovement_Public_UI_Inventory_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInventory(); \
	friend struct Z_Construct_UClass_UInventory_Statics; \
public: \
	DECLARE_CLASS(UInventory, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PlayerMovement"), NO_API) \
	DECLARE_SERIALIZER(UInventory)


#define PlayerMovement_Source_PlayerMovement_Public_UI_Inventory_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUInventory(); \
	friend struct Z_Construct_UClass_UInventory_Statics; \
public: \
	DECLARE_CLASS(UInventory, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PlayerMovement"), NO_API) \
	DECLARE_SERIALIZER(UInventory)


#define PlayerMovement_Source_PlayerMovement_Public_UI_Inventory_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInventory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInventory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInventory); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInventory); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInventory(UInventory&&); \
	NO_API UInventory(const UInventory&); \
public:


#define PlayerMovement_Source_PlayerMovement_Public_UI_Inventory_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInventory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInventory(UInventory&&); \
	NO_API UInventory(const UInventory&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInventory); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInventory); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInventory)


#define PlayerMovement_Source_PlayerMovement_Public_UI_Inventory_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ResumeButton() { return STRUCT_OFFSET(UInventory, ResumeButton); }


#define PlayerMovement_Source_PlayerMovement_Public_UI_Inventory_h_12_PROLOG
#define PlayerMovement_Source_PlayerMovement_Public_UI_Inventory_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PlayerMovement_Source_PlayerMovement_Public_UI_Inventory_h_15_PRIVATE_PROPERTY_OFFSET \
	PlayerMovement_Source_PlayerMovement_Public_UI_Inventory_h_15_RPC_WRAPPERS \
	PlayerMovement_Source_PlayerMovement_Public_UI_Inventory_h_15_INCLASS \
	PlayerMovement_Source_PlayerMovement_Public_UI_Inventory_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PlayerMovement_Source_PlayerMovement_Public_UI_Inventory_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PlayerMovement_Source_PlayerMovement_Public_UI_Inventory_h_15_PRIVATE_PROPERTY_OFFSET \
	PlayerMovement_Source_PlayerMovement_Public_UI_Inventory_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	PlayerMovement_Source_PlayerMovement_Public_UI_Inventory_h_15_INCLASS_NO_PURE_DECLS \
	PlayerMovement_Source_PlayerMovement_Public_UI_Inventory_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PlayerMovement_Source_PlayerMovement_Public_UI_Inventory_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
