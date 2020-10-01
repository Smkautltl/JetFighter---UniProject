// Fill out your copyright notice in the Description page of Project Settings.


#include "JetFighterPawn.h"

// Sets default values
AJetFighterPawn::AJetFighterPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AJetFighterPawn::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AJetFighterPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	deltaTime = DeltaTime;
}

// Called to bind functionality to input
void AJetFighterPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void AJetFighterPawn::UpdatePosition()
{

	if(ThrustSpeed < CurrentSpeed)
	{
		CurrentSpeed = FMath::FInterpTo(CurrentSpeed, ThrustSpeed, deltaTime, Drag);
	}
	else
	{
		CurrentSpeed = ThrustSpeed;
	}

	FVector NewPosition = GetActorForwardVector() * (CurrentSpeed * deltaTime);

	AppliedGravity = FMath::GetMappedRangeValueClamped({0.f,MinThrustToNotFall}, {Gravity, 0.f}, CurrentSpeed);

	AddActorWorldOffset({NewPosition.X, NewPosition.Y, NewPosition.Z - (AppliedGravity * deltaTime)}, true);
}