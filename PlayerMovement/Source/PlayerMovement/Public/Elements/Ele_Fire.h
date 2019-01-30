// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Unstable.h"
#include "Ele_Fire.generated.h"

/**
 * 
 */
UCLASS()
class PLAYERMOVEMENT_API AEle_Fire : public AUnstable
{
	GENERATED_BODY()

public:
	//constructor
	AEle_Fire();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual void Reaction_Implementation() override;
	
};
