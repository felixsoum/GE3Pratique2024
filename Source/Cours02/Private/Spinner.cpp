// Fill out your copyright notice in the Description page of Project Settings.


#include "Spinner.h"

// Sets default values
ASpinner::ASpinner()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ASpinner::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASpinner::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
	AddActorLocalRotation(FRotator(0, DeltaTime * 20.0, 0));
}

