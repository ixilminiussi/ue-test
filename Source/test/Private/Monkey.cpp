// Fill out your copyright notice in the Description page of Project Settings.


#include "Monkey.h"

// Sets default values
AMonkey::AMonkey()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void AMonkey::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMonkey::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AMonkey::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

ASpell* AMonkey::ThrowSpell()
{
	FActorSpawnParameters spawnParams;
	spawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

	return GetWorld()->SpawnActor<ASpell>(actorBPToSpawn, GetActorTransform(), spawnParams);
}
