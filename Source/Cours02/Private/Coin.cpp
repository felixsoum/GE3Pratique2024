// Fill out your copyright notice in the Description page of Project Settings.


#include "Coin.h"

#include "Cours02/Cours02Character.h"

// Sets default values
ACoin::ACoin()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ACoin::BeginPlay()
{
	Super::BeginPlay();
	
}

void ACoin::NotifyActorBeginOverlap(AActor* OtherActor)
{
	Super::NotifyActorBeginOverlap(OtherActor);

	auto Player = Cast<ACours02Character>(OtherActor);
	if (Player != nullptr)
	{
		Player->CoinCounter++;
		FString message = FString::Printf(TEXT("Coin: %d"), Player->CoinCounter);
		GEngine->AddOnScreenDebugMessage(-1, 2, FColor::Red, message);
	}
	Destroy();
}

// Called every frame
void ACoin::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

