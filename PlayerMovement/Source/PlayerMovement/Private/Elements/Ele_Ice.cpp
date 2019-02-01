// Fill out your copyright notice in the Description page of Project Settings.

#include "Elements/Ele_Ice.h"
#include "Unstable.h"

AEle_Ice::AEle_Ice()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	ReactionTypeEnum = EReactionType::RT_Stable;
	ElementTypeEnum = EElementType::ET_Ice;

	BoxComp->OnComponentBeginOverlap.AddDynamic(this, &AEle_Ice::OnOverlapBegin);
	BoxComp->OnComponentEndOverlap.AddDynamic(this, &AEle_Ice::OnOverlapEnd);
}

void AEle_Ice::BeginPlay()
{
	Super::BeginPlay();

}

void AEle_Ice::Tick(float DeltaTime)
{
}

void AEle_Ice::Reaction_Implementation(const EElementType OtherEleEnum)
{
	UE_LOG(LogTemp, Warning, TEXT("Message: Ice Reaction Hit"));

	switch (OtherEleEnum)
	{
	case EElementType::ET_None:
		break;

	case EElementType::ET_Fire:
		UE_LOG(LogTemp, Warning, TEXT("Message: Ice Hit Fire"));
		break;

	case EElementType::ET_Ice:
		UE_LOG(LogTemp, Warning, TEXT("Message: Ice Hit Ice"));
		break;

	case EElementType::ET_Acid:
		UE_LOG(LogTemp, Warning, TEXT("Message: Ice Hit Acid"));
		break;

	case EElementType::ET_Soap:
		UE_LOG(LogTemp, Warning, TEXT("Message: Ice Hit Soap"));
		break;

	case EElementType::ET_Lightning:
		break;

	default:
		break;
	}

}

void AEle_Ice::OnOverlapBegin(UPrimitiveComponent * OverlappedComp, AActor * OtherActor, UPrimitiveComponent * OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult & SweepResult)
{
	if (OtherActor && (OtherActor != this))
	{
		bool bIsImplemented = OtherActor->GetClass()->IsChildOf(AUnstable::StaticClass());

		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, TEXT("Overlap Begin"));

		if (bIsImplemented)
		{
			AUnstable* UnstableObject = Cast<AUnstable>(OtherActor);

			Reaction_Implementation(UnstableObject->ElementTypeEnum);
		}
	}
}

void AEle_Ice::OnOverlapEnd(UPrimitiveComponent * OverlappedComp, AActor * OtherActor, UPrimitiveComponent * OtherComp, int32 OtherBodyIndex)
{
}
