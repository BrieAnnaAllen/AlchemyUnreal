// Fill out your copyright notice in the Description page of Project Settings.

#include "Unstable.h"


// Sets default values
AUnstable::AUnstable()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	BoxComp = CreateDefaultSubobject<UBoxComponent>(TEXT("TriggerArea"));

	ReactionTypeEnum = EReactionType::RT_Unstable;
	ElementTypeEnum = EElementType::ET_None;
}

// Called when the game starts or when spawned
void AUnstable::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AUnstable::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AUnstable::Reaction_Implementation()
{
	UE_LOG(LogTemp, Error, TEXT("Message: This Unstable Reaction has not been impelemented"));
	//This should be filled out by the other Elements that are children of this class
}

