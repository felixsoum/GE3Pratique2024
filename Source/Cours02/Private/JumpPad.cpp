// Fill out your copyright notice in the Description page of Project Settings.


#include "JumpPad.h"

#include "Cours02/Cours02Character.h"
#include "GameFramework/CharacterMovementComponent.h"

// Sets default values
AJumpPad::AJumpPad()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AJumpPad::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AJumpPad::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AJumpPad::NotifyHit(class UPrimitiveComponent* MyComp, AActor* Other, class UPrimitiveComponent* OtherComp,
	bool bSelfMoved, FVector HitLocation, FVector HitNormal, FVector NormalImpulse, const FHitResult& Hit)
{
	Super::NotifyHit(MyComp, Other, OtherComp, bSelfMoved, HitLocation, HitNormal, NormalImpulse, Hit);

	auto Character = Cast<ACharacter>(Other);
	if (Character != nullptr)
	{
		Character->GetCharacterMovement()->AddImpulse(FVector(0, 0, 1000.0), true);
	}
}

