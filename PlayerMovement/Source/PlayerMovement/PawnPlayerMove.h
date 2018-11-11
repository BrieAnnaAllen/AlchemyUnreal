// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "PawnPlayerMove.generated.h"

UCLASS()
class PLAYERMOVEMENT_API APawnPlayerMove : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	APawnPlayerMove();
	//Capsule Collider
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Components")
		class UCapsuleComponent* Capsule;
	// Static Mesh for something?
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Components")
		class UStaticMeshComponent* StaticMesh;
	// Skeletal Mesh for Character Models
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Components")
		class USkeletalMeshComponent* SkeletalMesh;
	// Camera for Player
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Components")
		class UCameraComponent* Camera;
	// Camera Boom to keep the camera at a certain distance
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Components")
		class USpringArmComponent* SpringArm;
	// Character move speed
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Character")
		float CharacterMoveSpeed;
	// Invert yaw axis of camera?
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Character")
		bool IsCameraYawInverted = false;
	// Invert pitch axis of camera?
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Character")
		bool IsCameraPitchInverted = false;
	// Distance of Camera to Camera Boom center
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Character")
		float CameraDistance = 400.0f;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Character")
		float CameraHeightOffset = 100.0f;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	virtual void HandleInput();

	// Remove this override for Implementation
	virtual void AddControllerPitchInput(float Val) override;

	// Remove this override for Implementation
	virtual void AddControllerYawInput(float Val) override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	void MoveThumbstickLeftX(float AxisValue);
	
};
