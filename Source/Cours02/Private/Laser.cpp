// Fill out your copyright notice in the Description page of Project Settings.


#include "Laser.h"

// Sets default values
ALaser::ALaser()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
    StaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));
	SetRootComponent(StaticMesh);
	//StaticMesh->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepRelativeTransform);
}

// Called when the game starts or when spawned
void ALaser::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ALaser::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

