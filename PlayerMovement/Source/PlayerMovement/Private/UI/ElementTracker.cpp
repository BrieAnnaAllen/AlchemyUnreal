// Fill out your copyright notice in the Description page of Project Settings.
#include "PlayerMovement/Public/UI/ElementTracker.h"


// Sets default values
AElementTracker::AElementTracker()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	//Fire = false;
	//Ice = false;
	//Acid = false;
	//Soap = false;
	HasItem = false;
}

void AElementTracker::CheckObject_Implementation(AActor* Element)
{
	APickup_Actor* Object= Cast<APickup_Actor>(Element);
	if (Object && !HasItem)
	{
		if (Object->Acid)
		{
			Acid = true;
			HasItem = true;
		}
		else if (Object->Ice)
		{
			Ice = true;
			HasItem = true;
		}
		else if (Object->Soap)
		{
			Soap = true;
			HasItem = true;
		}
		else if (Object->Fire)
		{
			Fire = true;
			HasItem = true;
		}
	}
}

// Called when the game starts or when spawned
void AElementTracker::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AElementTracker::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

