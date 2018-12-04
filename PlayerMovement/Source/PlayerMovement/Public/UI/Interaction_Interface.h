// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "Interaction_Interface.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UInteraction_Interface : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class PLAYERMOVEMENT_API IInteraction_Interface
{
	GENERATED_BODY()

		// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Interaction Interface")
		void OnInteract(AActor* Interactor);

};
