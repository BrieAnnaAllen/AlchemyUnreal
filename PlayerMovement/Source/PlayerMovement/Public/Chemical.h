// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "Chemical.generated.h"

UENUM(BlueprintType)		//"BlueprintType" is essential to include
enum class EReactionType : uint8
{
	RT_None		UMETA(DisplayName = "None"),
	RT_Stable	UMETA(DisplayName = "Stable"),
	RT_Unstable UMETA(DisplayName = "Unstable")
};

UENUM(BlueprintType)		//"BlueprintType" is essential to include
enum class EElementType : uint8
{
	ET_None 	UMETA(DisplayName = "None"),
	ET_Fire 	UMETA(DisplayName = "Fire"),
	ET_Ice		UMETA(DisplayName = "Ice"),
	ET_Acid		UMETA(DisplayName = "Acid"),
	ET_Soap		UMETA(DisplayName = "Soap"),
	ET_Lightning	UMETA(DisplayName = "Lightning")

};

UINTERFACE(BlueprintType)
class PLAYERMOVEMENT_API UChemical : public UInterface
{
	GENERATED_BODY()
	
};

class PLAYERMOVEMENT_API IChemical 
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Chemical Reaction")
		void Reaction(const EElementType OtherEleEnum);

};

