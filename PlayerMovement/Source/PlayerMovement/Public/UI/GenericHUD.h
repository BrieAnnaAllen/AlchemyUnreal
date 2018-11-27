// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "GenericHUD.generated.h"

/**
 * 
 */
UCLASS()
class PLAYERMOVEMENT_API AGenericHUD : public AHUD
{
	GENERATED_BODY()

public:

	//constructor
	AGenericHUD();

	class TSubclassOf<UUserWidget> GetGameplayHUDClass() const { return GameplayHUDClass; }
	class TSubclassOf<UUserWidget> GetDeadMenuClass() const { return DeadMenuClass; }
	class TSubclassOf<UUserWidget> GetPauseMenuClas() const { return PauseMenuClass; }

	bool ShowSpecificMenu(class TSubclassOf<class UUserWidget> ClassToShow, bool GameOnly, bool ShowMouse);

	//hides all other menu's on screen
	UFUNCTION(BlueprintCallable, Category = "GenericHUD")
		void HideAllMenus();

protected:

	//The player's hud during gameplay, showing health, ammo, and the crosshair
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "GenericHUD")
		class TSubclassOf<UUserWidget> GameplayHUDClass;

	//the menu to use when the player dies
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "GenericHUD")
		class TSubclassOf<UUserWidget> DeadMenuClass;

	//the menu to use when the player pauses the game
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "GenericHUD")
		class TSubclassOf<UUserWidget> PauseMenuClass;



};
