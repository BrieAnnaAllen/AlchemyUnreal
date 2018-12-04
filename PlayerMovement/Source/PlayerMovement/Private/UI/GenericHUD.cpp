// Fill out your copyright notice in the Description page of Project Settings.

#include "UI/GenericHUD.h"
#include "Blueprint/UserWidget.h"
#include "Runtime/UMG/Public/Blueprint/WidgetLayoutLibrary.h"


AGenericHUD::AGenericHUD()
{
	GameplayHUDClass = NULL;
	DeadMenuClass = NULL;
	PauseMenuClass = NULL;
}

bool AGenericHUD::ShowSpecificMenu(TSubclassOf<class UUserWidget> ClassToShow, bool GameOnly, bool ShowMouse)
{
	//remove all widgets first
	HideAllMenus();

	if (ClassToShow)
	{
		//Create the widget then add to screen
		UUserWidget* CreatedWidget = CreateWidget<UUserWidget>(GetOwningPlayerController(), ClassToShow);
		CreatedWidget->AddToPlayerScreen();

		if (GameOnly)
		{
			//set our input mode to game only which allows us full control of the player
			GetOwningPlayerController()->SetInputMode(FInputModeGameOnly());
		}
		else
		{
			//set our input mode to UI only
			FInputModeUIOnly InputMode;

			//this allows us to take the mouse out of the viewport
			InputMode.SetLockMouseToViewportBehavior(EMouseLockMode::DoNotLock);

			//confirm our input mode
			GetOwningPlayerController()->SetInputMode(InputMode);
		}

		//Update mouse cursor
		GetOwningPlayerController()->bShowMouseCursor = ShowMouse;

		//Exit the function
		return true;
	}

	//meaing the inputed class to show was invalid
	return false;
}

void AGenericHUD::HideAllMenus()
{
	//call an already established function to remove all widgets from the player's screen
	UWidgetLayoutLibrary::RemoveAllWidgets(this);
}