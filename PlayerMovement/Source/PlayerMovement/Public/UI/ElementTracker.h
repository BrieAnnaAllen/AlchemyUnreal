// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PlayerMovement/Public/UI/Pickup_Actor.h"
#include "ElementTracker.generated.h"

UCLASS()
class PLAYERMOVEMENT_API AElementTracker : public APickup_Actor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AElementTracker();

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Pickup_Actor")
		void CheckObject(AActor* Element);
	void CheckObject_Implementation(AActor* Element);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Type")
	bool HasItem;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	
	
};
