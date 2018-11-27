// Fill out your copyright notice in the Description page of Project Settings.

#include "UI/Inventory.h"
#include "PawnPlayerMove.h"
#include "Components/Button.h"
#include "Kismet/GameplayStatics.h"
#include "Components/InputComponent.h" 


bool UInventory::Initialize()
{
	//check if we fail the parent version of super first
	if (!Super::Initialize())
	{
		return false;
	}

	//Bind the onresumeclicked function to the resume button delegate for onclicked
	if (ResumeButton)
	{
		ResumeButton->OnClicked.AddDynamic(this, &UInventory::OnResumeClicked);
	}

	//finish the function
	return true;
}
void UInventory::OnResumeClicked()
{
	//check for a valid player reference
	if (APawnPlayerMove* Player = Cast<APawnPlayerMove>(GetOwningPlayerPawn()))
	{
		//if it is valid then unpause the game, which handles removing the menu
		Player->EndInventory();
	}
}


