// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Inventory.generated.h"

/**
 * 
 */
UCLASS()
class PLAYERMOVEMENT_API UInventory : public UUserWidget
{
	GENERATED_BODY()
	
protected:

	//occurs on compile from blueprint editor
	virtual bool Initialize() override;

private:

	//resume game button
	UPROPERTY(meta = (BindWidget))
		class UButton* ResumeButton;

	//when the button is clicked
	UFUNCTION()
		void OnResumeClicked();

	void UnPauseGame();

	
	
};
