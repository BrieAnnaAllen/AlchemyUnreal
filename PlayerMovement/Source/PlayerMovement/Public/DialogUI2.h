// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/WidgetComponent.h"
#include "Blueprint/UserWidget.h"
#include "Dialog.h"
#include "FSubtitle.h"
#include "DialogUI2.generated.h"


UCLASS()
class PLAYERMOVEMENT_API UDialogUI2 : public UWidgetComponent
{
	GENERATED_BODY()

	

public:
	//bind Subtitles to UI to see if there has been changes
	UPROPERTY(BlueprintReadOnly)
		FString SubtitleToDisplay;

	//display subtitles based on current subtitle array
	UFUNCTION(BlueprintCallable, Category = DialogSystem)
		void UpdateSubtitles(TArray<FFSubtitle> Subtitles);

	//populate buttons
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
		TArray<FString>Questions;

	//Add widget to viewport
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = DialogSystem)
		void Show();
};
