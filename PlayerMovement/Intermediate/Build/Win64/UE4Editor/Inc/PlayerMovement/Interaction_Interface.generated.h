// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef PLAYERMOVEMENT_Interaction_Interface_generated_h
#error "Interaction_Interface.generated.h already included, missing '#pragma once' in Interaction_Interface.h"
#endif
#define PLAYERMOVEMENT_Interaction_Interface_generated_h

#define PlayerMovement_Source_PlayerMovement_Public_UI_Interaction_Interface_h_10_RPC_WRAPPERS \
	virtual void OnInteract_Implementation(AActor* Interactor) {}; \
 \
	DECLARE_FUNCTION(execOnInteract) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_Interactor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnInteract_Implementation(Z_Param_Interactor); \
		P_NATIVE_END; \
	}


#define PlayerMovement_Source_PlayerMovement_Public_UI_Interaction_Interface_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void OnInteract_Implementation(AActor* Interactor) {}; \
 \
	DECLARE_FUNCTION(execOnInteract) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_Interactor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnInteract_Implementation(Z_Param_Interactor); \
		P_NATIVE_END; \
	}


#define PlayerMovement_Source_PlayerMovement_Public_UI_Interaction_Interface_h_10_EVENT_PARMS \
	struct Interaction_Interface_eventOnInteract_Parms \
	{ \
		AActor* Interactor; \
	};


#define PlayerMovement_Source_PlayerMovement_Public_UI_Interaction_Interface_h_10_CALLBACK_WRAPPERS
#define PlayerMovement_Source_PlayerMovement_Public_UI_Interaction_Interface_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInteraction_Interface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInteraction_Interface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInteraction_Interface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInteraction_Interface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInteraction_Interface(UInteraction_Interface&&); \
	NO_API UInteraction_Interface(const UInteraction_Interface&); \
public:


#define PlayerMovement_Source_PlayerMovement_Public_UI_Interaction_Interface_h_10_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInteraction_Interface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInteraction_Interface(UInteraction_Interface&&); \
	NO_API UInteraction_Interface(const UInteraction_Interface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInteraction_Interface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInteraction_Interface); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInteraction_Interface)


#define PlayerMovement_Source_PlayerMovement_Public_UI_Interaction_Interface_h_10_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUInteraction_Interface(); \
	friend struct Z_Construct_UClass_UInteraction_Interface_Statics; \
public: \
	DECLARE_CLASS(UInteraction_Interface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/PlayerMovement"), NO_API) \
	DECLARE_SERIALIZER(UInteraction_Interface)


#define PlayerMovement_Source_PlayerMovement_Public_UI_Interaction_Interface_h_10_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	PlayerMovement_Source_PlayerMovement_Public_UI_Interaction_Interface_h_10_GENERATED_UINTERFACE_BODY() \
	PlayerMovement_Source_PlayerMovement_Public_UI_Interaction_Interface_h_10_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PlayerMovement_Source_PlayerMovement_Public_UI_Interaction_Interface_h_10_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	PlayerMovement_Source_PlayerMovement_Public_UI_Interaction_Interface_h_10_GENERATED_UINTERFACE_BODY() \
	PlayerMovement_Source_PlayerMovement_Public_UI_Interaction_Interface_h_10_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PlayerMovement_Source_PlayerMovement_Public_UI_Interaction_Interface_h_10_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IInteraction_Interface() {} \
public: \
	typedef UInteraction_Interface UClassType; \
	typedef IInteraction_Interface ThisClass; \
	static void Execute_OnInteract(UObject* O, AActor* Interactor); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define PlayerMovement_Source_PlayerMovement_Public_UI_Interaction_Interface_h_10_INCLASS_IINTERFACE \
protected: \
	virtual ~IInteraction_Interface() {} \
public: \
	typedef UInteraction_Interface UClassType; \
	typedef IInteraction_Interface ThisClass; \
	static void Execute_OnInteract(UObject* O, AActor* Interactor); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define PlayerMovement_Source_PlayerMovement_Public_UI_Interaction_Interface_h_7_PROLOG \
	PlayerMovement_Source_PlayerMovement_Public_UI_Interaction_Interface_h_10_EVENT_PARMS


#define PlayerMovement_Source_PlayerMovement_Public_UI_Interaction_Interface_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PlayerMovement_Source_PlayerMovement_Public_UI_Interaction_Interface_h_10_RPC_WRAPPERS \
	PlayerMovement_Source_PlayerMovement_Public_UI_Interaction_Interface_h_10_CALLBACK_WRAPPERS \
	PlayerMovement_Source_PlayerMovement_Public_UI_Interaction_Interface_h_10_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PlayerMovement_Source_PlayerMovement_Public_UI_Interaction_Interface_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PlayerMovement_Source_PlayerMovement_Public_UI_Interaction_Interface_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	PlayerMovement_Source_PlayerMovement_Public_UI_Interaction_Interface_h_10_CALLBACK_WRAPPERS \
	PlayerMovement_Source_PlayerMovement_Public_UI_Interaction_Interface_h_10_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PlayerMovement_Source_PlayerMovement_Public_UI_Interaction_Interface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
