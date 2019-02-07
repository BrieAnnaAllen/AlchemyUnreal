// Fill out your copyright notice in the Description page of Project Settings.

#include "Elements/Ele_Fire.h"
#include "Stable.h"

AEle_Fire::AEle_Fire()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	ReactionTypeEnum = EReactionType::RT_Unstable;
	ElementTypeEnum = EElementType::ET_Fire;

	BoxComp->OnComponentBeginOverlap.AddDynamic(this, &AEle_Fire::OnOverlapBegin);
	//BoxComp->OnComponentEndOverlap.AddDynamic(this, &AEle_Fire::OnOverlapEnd);

}

void AEle_Fire::BeginPlay()
{
	Super::BeginPlay();
}

void AEle_Fire::Tick(float DeltaTime)
{

}

//this shuold be called when an overlap collision event happens
void AEle_Fire::Reaction_Implementation(EElementType OtherEleEnum, AActor* OtherChemical)
{
	UE_LOG(LogTemp, Warning, TEXT("Message: Fire Reaction Hit"));

	switch (OtherEleEnum)
	{
	case EElementType::ET_None:
		break;

	case EElementType::ET_Fire:
		UE_LOG(LogTemp, Warning, TEXT("Message: Fire Hit Fire"));
		break;

	case EElementType::ET_Ice:
		UE_LOG(LogTemp, Warning, TEXT("Message: Fire Hit Ice"));
		OtherChemical->BeginDestroy();
		OtherChemical->Destroy();
		break;

	case EElementType::ET_Acid:
		UE_LOG(LogTemp, Warning, TEXT("Message: Fire Hit Acid"));
		break;

	case EElementType::ET_Soap:
		UE_LOG(LogTemp, Warning, TEXT("Message: Fire Hit Soap"));
		break;

	case EElementType::ET_Lightning:
		break;

	default:
		break;
	}

}

void AEle_Fire::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult & SweepResult)
{
	if (OtherActor && (OtherActor != this))
	{
		bool bIsImplemented = OtherActor->GetClass()->IsChildOf(AStable::StaticClass());

		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Overlap Begin"));

		if (bIsImplemented)
		{
			AStable* StableObject = Cast<AStable>(OtherActor);
			AActor* ChemObject = Cast<AActor>(StableObject);

			Reaction_Implementation(StableObject->ElementTypeEnum, ChemObject);
		}
	}
}

void AEle_Fire::OnOverlapEnd(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult & SweepResult)
{
	if (OtherActor && (OtherActor != this))
	{
		bool bIsImplemented = OtherActor->GetClass()->IsChildOf(AStable::StaticClass());

		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Overlap End"));

		if (bIsImplemented)
		{
			//Reaction_Implementation();
		}
	}
}


