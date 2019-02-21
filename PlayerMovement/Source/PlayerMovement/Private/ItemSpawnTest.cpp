// Fill out your copyright notice in the Description page of Project Settings.

#include "ItemSpawnTest.h"
#include "Engine/World.h"


// Sets default values
AItemSpawnTest::AItemSpawnTest()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AItemSpawnTest::BeginPlay()
{
	//AItemTest * ThisSpawn;
	Super::BeginPlay();
	//SpawnObject(ThisSpawn);
	
}

// Called every frame
void AItemSpawnTest::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AItemSpawnTest::SpawnObject(AItemTest * CurrentItem)
{
	FActorSpawnParameters SpawnInfo;
	FRotator Rotation(0.0f, 0.0f, 0.0f);
	FVector Location(0.0f, 0.0f, 0.0f);
	//GetWorld->SpawnActor(CurrentItem, Location, Rotation, SpawnInfo);
}
