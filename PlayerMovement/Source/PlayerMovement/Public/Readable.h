// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Engine/DataTable.h"
#include "Components/BoxComponent.h"
#include "FSubtitle.h"
#include "Readable.generated.h"

UCLASS()
class PLAYERMOVEMENT_API AReadable : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AReadable();

	//Returns the player Lines Data Table
	UDataTable* GetPlayerLines() { return PlayerLines; }

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Components)
		class UStaticMeshComponent* StaticMesh;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Components")
		class UCapsuleComponent* Capsule;

private:
	UFUNCTION()
		void OnBoxOverlap(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherIndex, bool bFromSweep, const FHitResult& SweepResult);

	UFUNCTION()
		void OnBoxEndOverlap(UPrimitiveComponent* HitComp, AActor*OtherActor, UPrimitiveComponent* OtherComp, int32 OtherIndex);

	UFUNCTION()
		void Talk(TArray<FFSubtitle> Subs);
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	//area in which interaction can be initiated
	UPROPERTY(VisibleAnywhere)
		UBoxComponent* BoxComp;

	//allow player liens data table to be set in the editor
	UPROPERTY(EditAnywhere, Category = DialogSystem)
		UDataTable* PlayerLines;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	
	
};
