// Fill out your copyright notice in the Description page of Project Settings.

#include "ItemTest.h"


// Sets default values
AItemTest::AItemTest()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	StaticMesh = CreateDefaultSubobject<UStaticMeshComponent>("Static Mesh");

}

// Called when the game starts or when spawned
void AItemTest::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AItemTest::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

