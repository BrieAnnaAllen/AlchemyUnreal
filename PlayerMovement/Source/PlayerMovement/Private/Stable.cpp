// Fill out your copyright notice in the Description page of Project Settings.

#include "Stable.h"


// Sets default values
AStable::AStable()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	BoxComp = CreateDefaultSubobject<UBoxComponent>(TEXT("Trigger Area"));
	BoxComp->SetCollisionProfileName(TEXT("Trigger"));
	BoxComp->SetupAttachment(RootComponent);

	ReactionTypeEnum = EReactionType::RT_Stable;
	ElementTypeEnum = EElementType::ET_None;
}

// Called when the game starts or when spawned
void AStable::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AStable::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AStable::Reaction_Implementation(const EElementType OtherEleEnum)
{
	UE_LOG(LogTemp, Error, TEXT("Message: This Stable Reaction has not been impelemented"));
	//This should be filled out by the other Elements that are children of this class

}

