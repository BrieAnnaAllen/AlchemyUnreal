// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Pickup_Actor.generated.h"

UCLASS()
class PLAYERMOVEMENT_API APickup_Actor : public AActor
{
	GENERATED_BODY()
	

	UPROPERTY(BlueprintReadOnly, VisibleDefaultsOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))
		class USphereComponent* CollectionSphere;
public:
	// Sets default values for this actor's properties
	APickup_Actor();

protected:

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Pickup_Actor")
		void OnCollection(class APawnPlayerMove* Collector);

	void OnCollection_Implementation(class APawnPlayerMove* Collector);

private:

	UFUNCTION()
		void OnSphereOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
			UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult &SweepResult);

};

