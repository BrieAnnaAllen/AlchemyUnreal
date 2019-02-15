// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PhysicsEngine/PhysicsHandleComponent.h"
#include "PickUp_Component.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class PLAYERMOVEMENT_API UPickUp_Component : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UPickUp_Component();

	// Called when the game starts
	virtual void BeginPlay() override;

	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

private:
	//How for the grab distance is from the player
	float Reach = 100.f;

	UPhysicsHandleComponent* PhysicsHandle = nullptr;

	UInputComponent* InputComponent = nullptr;

	//Raycast and grab what's in reach
	void PickUp();
	
	//let go of picked up object
	void Release();

	//Find attached physics handle
	void FindPhysicsHandleComponent();

	//setup attached input component
	void SetupInputComponent();

	//Get the first physics body within reach
	const FHitResult GetFirstPhysicsBodyInReach();

	FVector GetReachLineEnd();
};
