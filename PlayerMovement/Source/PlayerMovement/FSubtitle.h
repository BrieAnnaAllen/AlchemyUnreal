// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "Engine.h"
#include "FSubtitle.generated.h"

/**
 * 
 */
USTRUCT(BlueprintType)
struct FSubtitle : public FTableRowBase
{
	GENERATED_USTRUCT_BODY()

	//subtitle that will be displayed 
	UPROPERTY(EditAnywhere)
		FString Subtitle;

	//timer if we wish to keep it
	UPROPERTY(EditAnywhere)
		float AssociatedTime;
};
/*{
public:
	FSubtitle();
	~FSubtitle();
};*/
