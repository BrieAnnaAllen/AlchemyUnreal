// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PLAYERMOVEMENT_GenericHUD_generated_h
#error "GenericHUD.generated.h already included, missing '#pragma once' in GenericHUD.h"
#endif
#define PLAYERMOVEMENT_GenericHUD_generated_h

#define PlayerMovement_Source_PlayerMovement_Public_UI_GenericHUD_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHideAllMenus) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->HideAllMenus(); \
		P_NATIVE_END; \
	}


#define PlayerMovement_Source_PlayerMovement_Public_UI_GenericHUD_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHideAllMenus) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->HideAllMenus(); \
		P_NATIVE_END; \
	}


#define PlayerMovement_Source_PlayerMovement_Public_UI_GenericHUD_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGenericHUD(); \
	friend struct Z_Construct_UClass_AGenericHUD_Statics; \
public: \
	DECLARE_CLASS(AGenericHUD, AHUD, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/PlayerMovement"), NO_API) \
	DECLARE_SERIALIZER(AGenericHUD)


#define PlayerMovement_Source_PlayerMovement_Public_UI_GenericHUD_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAGenericHUD(); \
	friend struct Z_Construct_UClass_AGenericHUD_Statics; \
public: \
	DECLARE_CLASS(AGenericHUD, AHUD, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/PlayerMovement"), NO_API) \
	DECLARE_SERIALIZER(AGenericHUD)


#define PlayerMovement_Source_PlayerMovement_Public_UI_GenericHUD_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGenericHUD(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGenericHUD) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGenericHUD); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGenericHUD); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGenericHUD(AGenericHUD&&); \
	NO_API AGenericHUD(const AGenericHUD&); \
public:


#define PlayerMovement_Source_PlayerMovement_Public_UI_GenericHUD_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGenericHUD(AGenericHUD&&); \
	NO_API AGenericHUD(const AGenericHUD&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGenericHUD); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGenericHUD); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGenericHUD)


#define PlayerMovement_Source_PlayerMovement_Public_UI_GenericHUD_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__GameplayHUDClass() { return STRUCT_OFFSET(AGenericHUD, GameplayHUDClass); } \
	FORCEINLINE static uint32 __PPO__DeadMenuClass() { return STRUCT_OFFSET(AGenericHUD, DeadMenuClass); } \
	FORCEINLINE static uint32 __PPO__PauseMenuClass() { return STRUCT_OFFSET(AGenericHUD, PauseMenuClass); }


#define PlayerMovement_Source_PlayerMovement_Public_UI_GenericHUD_h_12_PROLOG
#define PlayerMovement_Source_PlayerMovement_Public_UI_GenericHUD_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PlayerMovement_Source_PlayerMovement_Public_UI_GenericHUD_h_15_PRIVATE_PROPERTY_OFFSET \
	PlayerMovement_Source_PlayerMovement_Public_UI_GenericHUD_h_15_RPC_WRAPPERS \
	PlayerMovement_Source_PlayerMovement_Public_UI_GenericHUD_h_15_INCLASS \
	PlayerMovement_Source_PlayerMovement_Public_UI_GenericHUD_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PlayerMovement_Source_PlayerMovement_Public_UI_GenericHUD_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PlayerMovement_Source_PlayerMovement_Public_UI_GenericHUD_h_15_PRIVATE_PROPERTY_OFFSET \
	PlayerMovement_Source_PlayerMovement_Public_UI_GenericHUD_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	PlayerMovement_Source_PlayerMovement_Public_UI_GenericHUD_h_15_INCLASS_NO_PURE_DECLS \
	PlayerMovement_Source_PlayerMovement_Public_UI_GenericHUD_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PlayerMovement_Source_PlayerMovement_Public_UI_GenericHUD_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
