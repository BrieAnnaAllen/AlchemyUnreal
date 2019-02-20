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
	hasObject = false;
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
	PlayerViewPointLocation = GetOwner()->GetActorLocation()+FVector(0,0,40);
	PlayerViewPointRotation = GetOwner()->GetActorRotation() /*+ FRotator(-15, 0, 0)*/;

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
	if (ActorHit && !pickedUp )
	{
		pickedUp = true;
		PhysicsHandle->GrabComponent(
			ComponentToGrab,
			NAME_None,
			ComponentToGrab->GetOwner()->GetActorLocation(),
			true//allow rotation
		);

		//UE_LOG(LogTemp, Warning, TEXT("Owner: %s"), *(GetOwner()->GetRootComponent()->GetChildComponent(1)->GetName()));

		ActorHit->SetActorEnableCollision(false);

		/*Cast<UPrimitiveComponent>(ActorHit->GetRootComponent())->SetMobility(EComponentMobility::Movable);

		ActorHit->AttachToComponent(GetOwner()->GetRootComponent()->GetChildComponent(1),
			FAttachmentTransformRules(EAttachmentRule::SnapToTarget, EAttachmentRule::SnapToTarget, EAttachmentRule::SnapToTarget, true), FName(TEXT("R_HandSocket")));*/

		//ItemToAttach->AttachToComponent(SkeletalMesh, FAttachmentTransformRules(EAttachmentRule::Location, EAttachmentRule::Rotation, EAttachmentRule::Scale, bool for welding into bodies),  
		//SocketName);
		Object = ActorHit;

		//UE_LOG(LogTemp, Warning, TEXT("Owner: %s"), (ActorHit->GetAttachParentSocketName().ToString()));

	}
}

void UPickUp_Component::Release()
{
	//TODO release physics handle
	if (PhysicsHandle->GrabbedComponent)
	{
		if (pickedUp)
		{
			Object->SetActorEnableCollision(true);
			auto grabbedObject = PhysicsHandle->GrabbedComponent;
			PhysicsHandle->ReleaseComponent();
			grabbedObject->AddImpulse(
				GetOwner()->GetActorForwardVector() * 1000,
				NAME_None,
				true
			);
			pickedUp = false;
		}
	}
}

// Called every frame
void UPickUp_Component::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	GetReachLineEnd();
	
	//if the physics handle is attached
	if (PhysicsHandle->GrabbedComponent)
	{
		
		//move the object the we're holding
		
		//up
			PhysicsHandle->SetTargetLocation((GetOwner()->ActorToWorld().GetLocation()+FVector(0,0,60))+ GetOwner()->GetActorRotation().Vector()*30 );
		
	}
	
}

FVector UPickUp_Component::GetReachLineEnd()
{
	// Get player viewpoint this tick
	FVector PlayerViewPointLocation;
	FRotator PlayerViewPointRotation;

	//get player's location and rotation
	PlayerViewPointLocation = GetOwner()->GetActorLocation() + FVector(0, 0, 40);
	PlayerViewPointRotation = GetOwner()->GetActorRotation() /*+ FRotator(-15, 0, 0)*/;
	FVector LineTraceEnd = PlayerViewPointLocation + PlayerViewPointRotation.Vector()*Reach;
	DrawDebugLine(
		GetWorld(),
		PlayerViewPointLocation,
		LineTraceEnd,
		FColor(255, 0, 0),
		false,
		0.f,
		0.f,
		2
	);
	FVector HoldPoint = PlayerViewPointLocation + PlayerViewPointRotation.Vector()*Reach;
	HoldPoint.Z = GetOwner()->GetActorLocation().Z;
	return HoldPoint;

}

