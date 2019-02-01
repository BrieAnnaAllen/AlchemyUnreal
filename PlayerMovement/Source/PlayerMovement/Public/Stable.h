// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Chemical.h"
#include "Engine/TriggerVolume.h"
#include "Runtime/Engine/Classes/Components/BoxComponent.h"
#include "Stable.generated.h"

UCLASS()
class PLAYERMOVEMENT_API AStable : public AActor, public IChemical
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AStable();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Chemical Reaction")
		void Reaction(const EElementType OtherEleEnum);

	virtual void Reaction_Implementation(const EElementType OtherEleEnum) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Enum)
		EReactionType ReactionTypeEnum;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Enum)
		EElementType ElementTypeEnum;

	UPROPERTY(VisibleAnywhere, Category = "BoxComp")
		class UBoxComponent* BoxComp;

};
