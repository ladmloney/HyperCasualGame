// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Spawner.generated.h"

UCLASS()
class GAME_PROTOTYPE_1_API ASpawner : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ASpawner();
	int Damage;
	int StartCount;
	int CurrentCount;
	int InPlay;

	
	UPROPERTY(EditDefaultsOnly, Category="Spawnable")
	TSubclassOf<AActor> ActorToSpawn;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	
	UFUNCTION()
	void Spawn(FVector loc, FRotator rot);
	UFUNCTION()
	void SpawnBall();

};
