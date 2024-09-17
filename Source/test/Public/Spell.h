// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Spell.generated.h"

UCLASS()
class TEST_API ASpell : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASpell();

	UFUNCTION(BlueprintCallable)
		void UpdateDirection(FVector Direction);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere)
		class UProjectileMovementComponent* pmc;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

protected: 
};
