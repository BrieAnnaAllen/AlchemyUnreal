// Fill out your copyright notice in the Description page of Project Settings.

#include "PlayerMovement/Public/UI/PickUp_Component.h"
#include "Engine/World.h"
#include "DrawDebugHelpers.h"

// Sets default values for this component's properties
UPickUp_Component::UPickUp_Component()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

}


// Called when the game starts
void UPickUp_Component::BeginPlay()
{
	Super::BeginPlay();
	
	FindPhysicsHandleComponent();

	SetupInputComponent();
}



///Look for attached physics handle
void UPickUp_Component::FindPhysicsHandleComponent()
{
	PhysicsHandle = GetOwner()->FindComponentByClass<UPhysicsHandleComponent>();
	if (PhysicsHandle)
	{
		//Physics handle is found
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("%s missing physics handle component"), *(GetOwner()->GetName()));
	}
}

///Look for attached input component-Only appears at run time
void UPickUp_Component::SetupInputComponent()
{
	InputComponent = GetOwner()->FindComponentByClass<UInputComponent>();
	if (InputComponent)
	{
		//Input is found
		InputComponent->BindAction("PickUp", IE_Pressed, this, &UPickUp_Component::PickUp);
		InputComponent->BindAction("Throw", IE_Pressed, this, &UPickUp_Component::Release);
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("%s missing input component"), *(GetOwner()->GetName()));
	}
}

const FHitResult UPickUp_Component::GetFirstPhysicsBodyInReach()
{
	// Get player viewpoint this tick
	FVector PlayerViewPointLocation;
	FRotator PlayerViewPointRotation;

	//get player's location and rotation
	PlayerViewPointLocation = GetOwner()->GetActorLocation();
	PlayerViewPointRotation = GetOwner()->GetActorRotation() + FRotator(-15, 90, 0);

	//Get the player's location and camera rotation
	/*GetOwner()->GetActorEyesViewPoint(
		PlayerViewPointLocation,
		PlayerViewPointRotation);*/

	//Get the camera's location and rotation
	/*GetWorld()->GetFirstPlayerController()->GetPlayerViewPoint(
				 PlayerViewPointLocation,
				 PlayerViewPointRotation
			);*/



	FVector LineTraceEnd = PlayerViewPointLocation + PlayerViewPointRotation.Vector()*Reach;
	///Draw red trace in the world to visualize
	/*DrawDebugLine(
		GetWorld(),
		PlayerViewPointLocation,
		LineTraceEnd,
		FColor(255, 0, 0),
		false,
		0.f,
		0.f,
		10
	);*/

	///Setup query parameters
	FCollisionQueryParams TraceParams(FName(TEXT("")), false, GetOwner());

	///Ray-cast out to reach distance
	FHitResult Hit;
	GetWorld()->LineTraceSingleByObjectType(

		Hit,
		PlayerViewPointLocation,
		LineTraceEnd,
		FCollisionObjectQueryParams(ECollisionChannel::ECC_PhysicsBody),
		TraceParams
	);

	///See what we hit
	AActor* ActorHit = Hit.GetActor();
	if (ActorHit)
	{
		UE_LOG(LogTemp, Warning, TEXT("Line Trace Hit: %s"), *(ActorHit->GetName()));
	}
	PlayerViewPointLocation = FVector(0);
	PlayerViewPointRotation = FRotator(0);
	return Hit;
}

void UPickUp_Component::PickUp()
{
	//Try and reach any actors with physics body collision channel set
	auto HitResult=GetFirstPhysicsBodyInReach();
	auto ComponentToGrab = HitResult.GetComponent();
	auto ActorHit = HitResult.GetActor();
	//If we hit something then attach a physics handle
	//attach physics handle
	if (ActorHit)
	{
		PhysicsHandle->GrabComponent(
			ComponentToGrab,
			NAME_None,
			ComponentToGrab->GetOwner()->GetActorLocation(),
			true//allow rotation
		);
	}
}

void UPickUp_Component::Release()
{
	//TODO release physics handle
	if (PhysicsHandle->GrabbedComponent)
	{
		auto grabbedObject = PhysicsHandle->GrabbedComponent;
		PhysicsHandle->ReleaseComponent();
		grabbedObject->AddImpulse(
			GetOwner()->GetActorRightVector() * 1000,
			NAME_None,
			true
		);
	}
}

// Called every frame
void UPickUp_Component::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);


	
	//if the physics handle is attached
	if (PhysicsHandle->GrabbedComponent)
	{
		
		//move the object the we're holding
		PhysicsHandle->SetTargetLocation(GetReachLineEnd());
	}
	
}

FVector UPickUp_Component::GetReachLineEnd()
{
	// Get player viewpoint this tick
	FVector PlayerViewPointLocation;
	FRotator PlayerViewPointRotation;

	//get player's location and rotation
	PlayerViewPointLocation = GetOwner()->GetActorLocation();
	PlayerViewPointRotation = GetOwner()->GetActorRotation() + FRotator(-15, 90, 0);
	FVector HoldPoint = PlayerViewPointLocation + PlayerViewPointRotation.Vector()*Reach;
	HoldPoint.Z = GetOwner()->GetActorLocation().Z;
	PlayerViewPointLocation = FVector(0);
	PlayerViewPointRotation = FRotator(0);
	return HoldPoint;

}

