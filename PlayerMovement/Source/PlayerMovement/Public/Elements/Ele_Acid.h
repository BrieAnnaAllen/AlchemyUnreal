// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Unstable.h"
#include "Pickup_Actor.h"
#include "Ele_Acid.generated.h"

/**
 * 
 */
UCLASS()
class PLAYERMOVEMENT_API AEle_Acid : public AUnstable
{
	GENERATED_BODY()

public:
	//constructor
	AEle_Acid();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual void Reaction_Implementation(const EElementType OtherEleEnum, AActor* OtherChemical) override;

	UFUNCTION()
		void OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	// declare overlap end function
	UFUNCTION()
		void OnOverlapEnd(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);


	
	
	
};
