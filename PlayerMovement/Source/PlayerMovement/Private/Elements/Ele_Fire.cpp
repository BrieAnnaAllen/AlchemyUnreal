// Fill out your copyright notice in the Description page of Project Settings.

#include "../../Public/Elements/Ele_Fire.h"

AEle_Fire::AEle_Fire()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	ReactionTypeEnum = EReactionType::RT_Unstable;
	ElementTypeEnum = EElementType::ET_Fire;
}

void AEle_Fire::BeginPlay()
{
	Super::BeginPlay();
}

void AEle_Fire::Tick(float DeltaTime)
{

}

//this shuold be called when an overlap collision event happens
void AEle_Fire::Reaction_Implementation()
{

}
