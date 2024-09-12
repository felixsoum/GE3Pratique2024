// Fill out your copyright notice in the Description page of Project Settings.


#include "Door.h"

#include "Cours02/Cours02Character.h"

// Sets default values
ADoor::ADoor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ADoor::BeginPlay()
{
	Super::BeginPlay();

	OnActorHit.AddDynamic(this, &ADoor::OnHit);
}

// Called every frame
void ADoor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ADoor::OnHit(AActor* SelfActor, AActor* OtherActor, FVector NormalImpulse, const FHitResult& Hit)
{
	// La porte ouvre (destroy) seulement si le joueur a le minimum de coins
	auto Player = Cast<ACours02Character>(OtherActor);
	if (Player != nullptr && Player->CoinCounter >= MinimumCoinToOpen)
	{
		Destroy();
	}
}


