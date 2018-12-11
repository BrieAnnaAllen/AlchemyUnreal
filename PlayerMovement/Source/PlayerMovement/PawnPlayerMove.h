// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Engine/DataTable.h"
#include "Dialog.h"
#include "DialogUIW.h"
#include "Readable.h"
#include "PawnPlayerMove.generated.h"

UCLASS()
class PLAYERMOVEMENT_API APawnPlayerMove : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	APawnPlayerMove();

	UFUNCTION(BlueprintCallable, Category = "Character|Input")
		void StartInventory();

	UFUNCTION(BlueprintCallable, Category = "Character|Input")
		void EndInventory();


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

	//Generate playerLines
	void GeneratePlayerLines(UDataTable& PlayerLines);

	//contains subtitles that wil lpass into UI
	UFUNCTION(BlueprintCallable, Category = DialogSystem)
		void Talk(TArray<FFSubtitle>& Subtitles);

	//Enables or disables talk ability
	void SetTalkRangeStatus(bool Status) { bIsInTalkRange = Status };

	//sets the object Tris is interacting with
	void SetAssociatedActor(AReadable* Actor) {AssociatedObject = Actor };

	//Get UI reference
	UDialogUIW* GetUI() { return UI; }
private:
	//Tris is talking
	bool bIsTalking;
	//Tris is in range of dialog object
	bool bIsInTalkRange;

	//initiates / terminates conversation
	void ToggleTalking();

	//Object Tirs is talking about
	AActor AssociatedOjbect;

	FDialog* RetrieveDialog(UDataTable* TableToSearch, FName RowName);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	virtual void HandleInput();

	void NextLine();

	UFUNCTION(BlueprintImplementableEvent, Category = DialogSystem)
		void ToggleUI();

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
		UDialogUIW* UI;

	// Remove this override for Implementation
	virtual void AddControllerPitchInput(float Val) override;

	// Remove this override for Implementation
	virtual void AddControllerYawInput(float Val) override;

	virtual void OnInteract_Implementation(AActor* Interactor)
		PURE_VIRTUAL(IInteraction_Interface::OnInteract_Implementation, );

	UPROPERTY()
		class AGenericHUD* HudReference;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Character")
		float InteractionDistance;

	UFUNCTION()
		void Interact();

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	
};
