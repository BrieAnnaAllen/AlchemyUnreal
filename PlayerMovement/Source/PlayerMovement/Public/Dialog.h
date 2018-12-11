// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Object.h"
#include "Engine/DataTable.h"
#include "FSubtitle.h"
#include "Dialog.generated.h"
 /**
  *
  */
USTRUCT(BlueprintType)
struct FDialog : public FTableRowBase
{
	GENERATED_USTRUCT_BODY()

		UPROPERTY(EditAnywhere)
		FString QuestionExcerpt;

	UPROPERTY(EditAnywhere)
		TArray<FFSubtitle> Subtitles;

	UPROPERTY(EditAnywhere)
		bool bShouldAIAnswer;


};
/*class PLAYERMOVEMENT_API Dialog
{
public:
	Dialog();
	~Dialog();
};*/
