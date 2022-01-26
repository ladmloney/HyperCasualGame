// Fill out your copyright notice in the Description page of Project Settings.


#include "Spawner.h"
#include "GameFramework/CharacterMovementComponent.h"

// Sets default values
ASpawner::ASpawner()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ASpawner::BeginPlay()
{
	Super::BeginPlay();
	Damage = 1;
	StartCount = 1;
	CurrentCount = 1;
	InPlay = 0;
	
}

// Called every frame
void ASpawner::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ASpawner::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	
	PlayerInputComponent -> BindAction("SpawnBall",IE_Pressed,this, &ASpawner::SpawnBall);

}

void ASpawner::SpawnBall()
{
	Spawn(this->GetActorLocation(), this->GetControlRotation());
}

void ASpawner::Spawn(FVector loc, FRotator rot)
{
	UE_LOG(LogTemp, Warning, TEXT("AMyPawn::Spawn"));
	FActorSpawnParameters SpawnParams;
	AActor* SpawnedActorRef = GetWorld()->SpawnActor<AActor>(ActorToSpawn,loc,rot,SpawnParams);
	InPlay = InPlay++;
}

