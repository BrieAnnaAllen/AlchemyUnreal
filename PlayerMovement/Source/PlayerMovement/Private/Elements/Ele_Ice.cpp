// Fill out your copyright notice in the Description page of Project Settings.

#include "Elements/Ele_Ice.h"
#include "Runtime/Engine/Classes/Components/StaticMeshComponent.h"
#include "Ele_Fire.h"
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
	if (ToBeDestroyed && timer < 0)
	{
		GetWorld()->DestroyActor(ToBeDestroyed);
		Destroy();
		timer = 0;
		GetWorld()->ForceGarbageCollection(true);
	}
	else
	{
		timer -= DeltaTime;
	}
}

void AEle_Ice::Reaction_Implementation(const EElementType OtherEleEnum, AActor* OtherChemical)
{
	UE_LOG(LogTemp, Warning, TEXT("Message: Ice Reaction Hit"));
	TArray<USceneComponent*> children;

	switch (OtherEleEnum)
	{
	case EElementType::ET_None:
		break;

	case EElementType::ET_Fire:
		timer = 2;

		//OtherChemical->GetDefaultAttachComponent()->GetAttachChildren
		//UE_LOG(LogTemp, Warning, TEXT("Message: Root Comp name > %s"), *(GetRootComponent()->GetName()));
		//children = GetRootComponent()->GetAttachChildren();
		//UE_LOG(LogTemp, Error, TEXT("%i children comps"), (children.Num()));

		//for (int16 i = 0; i < children.Num(); i++)
		//{
		//	UStaticMeshComponent* mesh = Cast<UStaticMeshComponent>(children[i]);

		//	if (mesh)
		//	{
		//		UE_LOG(LogTemp, Warning, TEXT("Message: Ice Hit Fire"));
		//		mesh->SetSimulatePhysics(false);
		//		mesh->SetVisibility(true);
		//	}
		//}
		OtherChemical->SetActorHiddenInGame(true);

		ToBeDestroyed = OtherChemical;
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
			AActor* ChemObject = Cast<AActor>(OtherActor);

			Reaction_Implementation(UnstableObject->ElementTypeEnum, ChemObject);
		}
	}
}

void AEle_Ice::OnOverlapEnd(UPrimitiveComponent * OverlappedComp, AActor * OtherActor, UPrimitiveComponent * OtherComp, int32 OtherBodyIndex)
{
}
