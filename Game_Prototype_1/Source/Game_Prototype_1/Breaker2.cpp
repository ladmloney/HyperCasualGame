// Fill out your copyright notice in the Description page of Project Settings.


#include "Breaker2.h"
#include "Components/BoxComponent.h"

// Sets default values
ABreaker2::ABreaker2()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	CollisionVolume = CreateDefaultSubobject<UBoxComponent>(TEXT("CollisionVolume"));
	RootComponent = CollisionVolume;
	BoxBounds = FVector(5,15,5);
	CollisionVolume->SetBoxExtent(BoxBounds);
	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	Mesh -> SetupAttachment(GetRootComponent());

}

// Called when the game starts or when spawned
void ABreaker2::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABreaker2::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	CollisionVolume->OnComponentBeginOverlap.AddDynamic(this, &ABreaker2::OnOverlapBegin);

}
inline void ABreaker2::OnOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	
}

