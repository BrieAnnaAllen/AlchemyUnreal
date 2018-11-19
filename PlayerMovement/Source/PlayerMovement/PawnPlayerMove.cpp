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

	//
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
	if(InputComponent->GetAxisKeyValue(EKeys::W) > 0)
	{

		SetActorLocation((GetActorLocation() + GetControlRotation().Quaternion() * FVector(1, 0, 0) * CharacterMoveSpeed * GetWorld()->GetDeltaSeconds()));

	}
	if (InputComponent->GetAxisKeyValue(EKeys::S) > 0)
	{

		SetActorLocation((GetActorLocation() + GetControlRotation().Quaternion() * FVector(-1, 0, 0) * CharacterMoveSpeed * GetWorld()->GetDeltaSeconds()));

	}
	if (InputComponent->GetAxisKeyValue(EKeys::A) > 0)
	{

		SetActorLocation((GetActorLocation() + GetControlRotation().Quaternion() * FVector(0, -1, 0) * CharacterMoveSpeed * GetWorld()->GetDeltaSeconds()));

	}
	if (InputComponent->GetAxisKeyValue(EKeys::D) > 0)
	{

		SetActorLocation((GetActorLocation() + GetControlRotation().Quaternion() * FVector(0, 1, 0) * CharacterMoveSpeed * GetWorld()->GetDeltaSeconds()));

	}

	//AddControllerYawInput(InputComponent->GetAxisKeyValue(EKeys::MouseX));
	AddControllerPitchInput(InputComponent->GetAxisKeyValue(EKeys::MouseY));
}

// Called to bind functionality to input
void APawnPlayerMove::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	// Create Bindings
	InputComponent = PlayerInputComponent;
	InputComponent->BindAxisKey(EKeys::W);
	InputComponent->BindAxisKey(EKeys::S);
	InputComponent->BindAxisKey(EKeys::A);
	InputComponent->BindAxisKey(EKeys::D);
	InputComponent->BindAxisKey(EKeys::MouseX, this, &APawnPlayerMove::AddControllerYawInput);
	InputComponent->BindAxisKey(EKeys::MouseY);

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


void APawnPlayerMove::MoveThumbstickLeftX(float AxisValue)
{



}

void APawnPlayerMove::AddControllerYawInput(float Val)
{

	Super::AddControllerYawInput(IsCameraYawInverted ? Val * -1 : Val);

}

void APawnPlayerMove::AddControllerPitchInput(float Val)
{

	Super::AddControllerPitchInput(IsCameraPitchInverted ? Val * -1 : Val);

}

