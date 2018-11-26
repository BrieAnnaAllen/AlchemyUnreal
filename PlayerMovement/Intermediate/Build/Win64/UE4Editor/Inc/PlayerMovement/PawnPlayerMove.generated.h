// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PLAYERMOVEMENT_PawnPlayerMove_generated_h
#error "PawnPlayerMove.generated.h already included, missing '#pragma once' in PawnPlayerMove.h"
#endif
#define PLAYERMOVEMENT_PawnPlayerMove_generated_h

#define PlayerMovement_Source_PlayerMovement_PawnPlayerMove_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execInteract) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Interact(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEndInventory) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->EndInventory(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartInventory) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StartInventory(); \
		P_NATIVE_END; \
	}


#define PlayerMovement_Source_PlayerMovement_PawnPlayerMove_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execInteract) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Interact(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEndInventory) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->EndInventory(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartInventory) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StartInventory(); \
		P_NATIVE_END; \
	}


#define PlayerMovement_Source_PlayerMovement_PawnPlayerMove_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPawnPlayerMove(); \
	friend struct Z_Construct_UClass_APawnPlayerMove_Statics; \
public: \
	DECLARE_CLASS(APawnPlayerMove, APawn, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PlayerMovement"), NO_API) \
	DECLARE_SERIALIZER(APawnPlayerMove)


#define PlayerMovement_Source_PlayerMovement_PawnPlayerMove_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAPawnPlayerMove(); \
	friend struct Z_Construct_UClass_APawnPlayerMove_Statics; \
public: \
	DECLARE_CLASS(APawnPlayerMove, APawn, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PlayerMovement"), NO_API) \
	DECLARE_SERIALIZER(APawnPlayerMove)


#define PlayerMovement_Source_PlayerMovement_PawnPlayerMove_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APawnPlayerMove(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APawnPlayerMove) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APawnPlayerMove); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APawnPlayerMove); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APawnPlayerMove(APawnPlayerMove&&); \
	NO_API APawnPlayerMove(const APawnPlayerMove&); \
public:


#define PlayerMovement_Source_PlayerMovement_PawnPlayerMove_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APawnPlayerMove(APawnPlayerMove&&); \
	NO_API APawnPlayerMove(const APawnPlayerMove&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APawnPlayerMove); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APawnPlayerMove); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APawnPlayerMove)


#define PlayerMovement_Source_PlayerMovement_PawnPlayerMove_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__HudReference() { return STRUCT_OFFSET(APawnPlayerMove, HudReference); } \
	FORCEINLINE static uint32 __PPO__InteractionDistance() { return STRUCT_OFFSET(APawnPlayerMove, InteractionDistance); }


#define PlayerMovement_Source_PlayerMovement_PawnPlayerMove_h_9_PROLOG
#define PlayerMovement_Source_PlayerMovement_PawnPlayerMove_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PlayerMovement_Source_PlayerMovement_PawnPlayerMove_h_12_PRIVATE_PROPERTY_OFFSET \
	PlayerMovement_Source_PlayerMovement_PawnPlayerMove_h_12_RPC_WRAPPERS \
	PlayerMovement_Source_PlayerMovement_PawnPlayerMove_h_12_INCLASS \
	PlayerMovement_Source_PlayerMovement_PawnPlayerMove_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PlayerMovement_Source_PlayerMovement_PawnPlayerMove_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PlayerMovement_Source_PlayerMovement_PawnPlayerMove_h_12_PRIVATE_PROPERTY_OFFSET \
	PlayerMovement_Source_PlayerMovement_PawnPlayerMove_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	PlayerMovement_Source_PlayerMovement_PawnPlayerMove_h_12_INCLASS_NO_PURE_DECLS \
	PlayerMovement_Source_PlayerMovement_PawnPlayerMove_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PlayerMovement_Source_PlayerMovement_PawnPlayerMove_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
