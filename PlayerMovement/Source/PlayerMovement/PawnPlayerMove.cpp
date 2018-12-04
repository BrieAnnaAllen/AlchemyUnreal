 // Fill out your copyright notice in the Description page of Project Settings.

#include "PawnPlayerMove.h"


#include "Engine.h"
#include "Components/SceneComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/Actor.h"
#include "GameFramework/SpringArmComponent.h"
#include "UI/GenericHUD.h"
#include "UI/Interaction_Interface.h"
#include "Kismet/KismetMathLibrary.h"

// Sets default values
APawnPlayerMove::APawnPlayerMove()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	// 
	AutoPossessPlayer = EAutoReceiveInput::Player0;

	// Create components
	Capsule = CreateDefaultSubobject<UCapsuleComponent>("Capsule");
	StaticMesh = CreateDefaultSubobject<UStaticMeshComponent>("Static Mesh");
	SkeletalMesh = CreateDefaultSubobject<USkeletalMeshComponent>("Skeletal Mesh");
	Camera = CreateDefaultSubobject<UCameraComponent>("Camera");
	SpringArm = CreateDefaultSubobject<USpringArmComponent>("SpringArm");
	
	// Make sure main collider is Root
	RootComponent = Cast<USceneComponent>(Capsule);
	SpringArm->SetupAttachment(RootComponent);
	SpringArm->TargetArmLength = CameraDistance;
	SpringArm->SetRelativeLocation(FVector(0, 0, CameraHeightOffset));
	SpringArm->bUsePawnControlRotation = true;
	SpringArm->bInheritYaw = true;
	SpringArm->bInheritPitch = true;

	// Attach Camera to Camera Boom
	Camera->SetupAttachment(SpringArm, USpringArmComponent::SocketName);
	StaticMesh->SetupAttachment(RootComponent);
	SkeletalMesh->SetupAttachment(RootComponent);

	HudReference = nullptr;
	InteractionDistance = 250;

}

// Called when the game starts or when spawned
void APawnPlayerMove::BeginPlay()
{
	Super::BeginPlay();
	// Make sure to Simulate Physics
	Capsule->SetSimulatePhysics(true);

	// Make sure Gravity is enabled
	Capsule->SetEnableGravity(true);

	// Automatically set Collision Preset to Pawn
	Capsule->SetCollisionProfileName("Pawn");

	//Sets location of spring arm
	SpringArm->SetRelativeLocation(FVector(0, 0, CameraHeightOffset));
}

// Called every frame
void APawnPlayerMove::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	HandleInput();

	GEngine->AddOnScreenDebugMessage(-1, 1.0f, FColor::Red, FString::Printf(TEXT("%s"), *GetControlRotation().Euler().ToString()));

}

void APawnPlayerMove::HandleInput()
{
	FVector FActorMovement; // reperesents the current location of the character
	//FRotator FCharacterRotation; //
	FVector FDirection = GetActorForwardVector(); // sets the FDirectionb variable to the foward vector of the actor

	//Controlls 
	if((InputComponent->GetAxisKeyValue(EKeys::W) > 0) || (InputComponent->GetAxisKeyValue(EKeys::Gamepad_LeftStick_Up) > 0))
	{

		FActorMovement = GetActorLocation() + GetControlRotation().Quaternion() * FVector(1, 0, 0) * CharacterMoveSpeed * GetWorld()->GetDeltaSeconds();
		SetActorLocation(FActorMovement);

	}
	if ((InputComponent->GetAxisKeyValue(EKeys::S) > 0) || (InputComponent->GetAxisKeyValue(EKeys::Gamepad_LeftStick_Down) > 0))
	{

		FActorMovement = GetActorLocation() + GetControlRotation().Quaternion() * FVector(-1, 0, 0) * CharacterMoveSpeed * GetWorld()->GetDeltaSeconds();
		SetActorLocation(FActorMovement);

	}
	if ((InputComponent->GetAxisKeyValue(EKeys::A) > 0) || (InputComponent->GetAxisKeyValue(EKeys::Gamepad_LeftStick_Left) > 0))
	{

		FActorMovement = GetActorLocation() + GetControlRotation().Quaternion() * FVector(0, -1, 0) * CharacterMoveSpeed * GetWorld()->GetDeltaSeconds();
		SetActorLocation(FActorMovement);

	}
	if ((InputComponent->GetAxisKeyValue(EKeys::D) > 0) || (InputComponent->GetAxisKeyValue(EKeys::Gamepad_LeftStick_Right) > 0))
	{
		FActorMovement = GetActorLocation() + GetControlRotation().Quaternion() * FVector(0, 1, 0) * CharacterMoveSpeed * GetWorld()->GetDeltaSeconds();
		SetActorLocation(FActorMovement);

	}
	
	SetActorRotation(FRotator(GetActorRotation().Pitch, UKismetMathLibrary::FindLookAtRotation(GetActorLocation(), FDirection).Yaw, GetActorRotation().Roll));
	AddControllerYawInput(InputComponent->GetAxisKeyValue((EKeys::Gamepad_RightStick_Right)) * -1);
	AddControllerPitchInput(InputComponent->GetAxisKeyValue((EKeys::Gamepad_RightStick_Down)) * -1);
}

// Called to bind functionality to input
void APawnPlayerMove::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	// Create Bindings for each key
	InputComponent = PlayerInputComponent;
	InputComponent->BindAxisKey(EKeys::W);
	InputComponent->BindAxisKey(EKeys::S);
	InputComponent->BindAxisKey(EKeys::A);
	InputComponent->BindAxisKey(EKeys::D);
	InputComponent->BindAxisKey(EKeys::MouseX, this, &APawnPlayerMove::AddControllerYawInput); // Automatically binds this movement with the AddControllerYawInput class
	InputComponent->BindAxisKey(EKeys::MouseY, this, &APawnPlayerMove::AddControllerPitchInput); // Automatically binds this movement with the AddControllerPitch Input class
	InputComponent->BindAxisKey(EKeys::Gamepad_LeftThumbstick);
	InputComponent->BindAxisKey(EKeys::Gamepad_RightStick_Left, this, &APawnPlayerMove::AddControllerYawInput); // Automatically binds this movement with the AddControllerYawInput class
	InputComponent->BindAxisKey(EKeys::Gamepad_RightStick_Right);
	InputComponent->BindAxisKey(EKeys::Gamepad_RightStick_Up, this, &APawnPlayerMove::AddControllerPitchInput); // Automatically binds this movement with the AddControllerPitch Input class
	InputComponent->BindAxisKey(EKeys::Gamepad_RightStick_Down);
	InputComponent->BindAxisKey(EKeys::Gamepad_LeftStick_Up);
	InputComponent->BindAxisKey(EKeys::Gamepad_LeftStick_Down);
	InputComponent->BindAxisKey(EKeys::Gamepad_LeftStick_Left);
	InputComponent->BindAxisKey(EKeys::Gamepad_LeftStick_Right);

	InputComponent->BindAction("Inventory", IE_Pressed, this, &APawnPlayerMove::StartInventory);
}

void APawnPlayerMove::StartInventory()
{
	if (APlayerController* PC = Cast<APlayerController>(GetController()))
	{
		//check if hud is not valid
		if (!HudReference)
		{
			HudReference = Cast<AGenericHUD>(PC->GetHUD());
		}

		//checks if hud is valid
		if (HudReference)
		{
			HudReference->ShowSpecificMenu(HudReference->GetPauseMenuClas(), false, true);
		}

		//Pause the game
		PC->SetPause(true);
	}
}

void APawnPlayerMove::EndInventory()
{
	if (APlayerController* PC = Cast<APlayerController>(GetController()))
	{

		//Unpause the game
		PC->SetPause(false);

		//check if hud is not valid
		if (!HudReference)
		{
			HudReference = Cast<AGenericHUD>(PC->GetHUD());
		}

		//checks if hud is valid
		if (HudReference)
		{
			HudReference->ShowSpecificMenu(HudReference->GetGameplayHUDClass(), true, false);
		}

	}
}


// Grabs the Yaw Input class that is already built into Unreal
void APawnPlayerMove::AddControllerYawInput(float Val)
{

	Super::AddControllerYawInput(IsCameraYawInverted ? Val * -1 : Val);

}
 // Grabs the Pitch input class that is already built into Unreal
void APawnPlayerMove::AddControllerPitchInput(float Val)
{

	Super::AddControllerPitchInput(IsCameraPitchInverted ? Val * -1 : Val);

}

void APawnPlayerMove::Interact()
{
	//Prepare our invisible ray's values
	FHitResult Hit;
	const FVector StartTrace = Camera->GetComponentLocation();
	const FVector EndTrace = StartTrace + (Camera->GetForwardVector()*InteractionDistance);

	//Collision to ignore
	FCollisionQueryParams QueryParams;
	QueryParams.AddIgnoredActor(GetOwner());
	QueryParams.AddIgnoredActor(this);

	//Fire an invisible ray
	GetWorld()->LineTraceSingleByChannel(Hit, StartTrace, EndTrace, ECollisionChannel::ECC_Visibility, QueryParams);

	//Check if we hit anything
	if (Hit.bBlockingHit)
	{
		AActor* HitActor = Hit.GetActor();
		//check if it has the interface implemented
		if (HitActor->GetClass()->ImplementsInterface(UInteraction_Interface::StaticClass()))
		{
			//cast for c++ interface
			if (IInteraction_Interface* Interface = Cast<IInteraction_Interface>(HitActor))
			{
				//call C++ layer
				Interface->Execute_OnInteract(HitActor, this);
			}
			else
			{
				//Call BP Layer
				IInteraction_Interface::Execute_OnInteract(HitActor, this);
			}
		}
	}
}

