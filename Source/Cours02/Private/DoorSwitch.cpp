// Fill out your copyright notice in the Description page of Project Settings.


#include "DoorSwitch.h"

// Sets default values
ADoorSwitch::ADoorSwitch()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ADoorSwitch::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ADoorSwitch::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ADoorSwitch::NotifyHit(class UPrimitiveComponent* MyComp, AActor* Other, class UPrimitiveComponent* OtherComp,
	bool bSelfMoved, FVector HitLocation, FVector HitNormal, FVector NormalImpulse, const FHitResult& Hit)
{
	Super::NotifyHit(MyComp, Other, OtherComp, bSelfMoved, HitLocation, HitNormal, NormalImpulse, Hit);

	if (DoorToOpen->IsValidLowLevel())
	{
		DoorToOpen->Destroy();
	}
}

