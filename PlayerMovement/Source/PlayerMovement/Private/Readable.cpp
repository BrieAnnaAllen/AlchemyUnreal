// Fill out your copyright notice in the Description page of Project Settings.

#include "Readable.h"
#include "Kismet/GameplayStatics.h"
#include "Components/StaticMeshComponent.h"
#include "Components/CapsuleComponent.h"
#include "TimerManager.h"


// Sets default values
AReadable::AReadable()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Capsule = CreateDefaultSubobject<UCapsuleComponent>("Capsule");
	BoxComp = CreateDefaultSubobject<UBoxComponent>("BoxComp");
	StaticMesh = CreateDefaultSubobject<UStaticMeshComponent>("Static Mesh");
	RootComponent = Cast<USceneComponent>(Capsule);
	BoxComp->SetupAttachment(RootComponent);
	StaticMesh->SetupAttachment(RootComponent);


}

void AReadable::OnBoxOverlap(UPrimitiveComponent * HitComp, AActor * OtherActor, UPrimitiveComponent * OtherComp, int32 OtherIndex, bool bFromSweep, const FHitResult & SweepResult)
{
}

void AReadable::OnBoxEndOverlap(UPrimitiveComponent * HitComp, AActor * OtherActor, UPrimitiveComponent * OtherComp, int32 OtherIndex)
{
}

void AReadable::Talk(TArray<FFSubtitle> Subs)
{
}

// Called when the game starts or when spawned
void AReadable::BeginPlay()
{
	Super::BeginPlay();

	//Sets up registrationb of overlap functions
	BoxComp->OnComponentBeginOverlap.AddDynamic(this, &AReadable::OnBoxOverlap);
	BoxComp->OnComponentEndOverlap.AddDynamic(this, &AReadable::OnBoxEndOverlap);
	
}

// Called every frame
void AReadable::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

