// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "JetFighterPawn.generated.h"

UCLASS()
class JETFIGHTERPROJECT_API AJetFighterPawn : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AJetFighterPawn();

	UFUNCTION(BlueprintCallable)
	void UpdatePosition(float DeltaTime);
	UFUNCTION(BlueprintCallable)
	void UpdateYaw(float DeltaTime);
	UFUNCTION(BlueprintCallable)
	void UpdatePitch(float DeltaTime);	
	UFUNCTION(BlueprintCallable)
	void UpdateRoll(float DeltaTime);

	void UpdateThrusters();

	void IsEnemyOnScreen();
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;


private:

//----------------------CONSTANTS--------------------------
	//Jet Fighter Model
	UStaticMeshComponent RudderR;
	UStaticMeshComponent RudderL;
	
	UStaticMeshComponent FlapsL;
	UStaticMeshComponent FlapsR;
	
	UStaticMeshComponent ElevatorL;
	UStaticMeshComponent ElevatorR;
	
	UStaticMeshComponent AileronL;
	UStaticMeshComponent AileronR;
	
	UStaticMeshComponent Body;
	
	UStaticMeshComponent Glass;
	//------------------

	//Control Surfaces
	float MaxFlapPitch = 10;
	float MaxElevatorPitch = 25;
	float MaxRudderYaw = 45;
	float MaxAileronPitch = 45;
	//----------------
	
	float MaxThrust = 24000;
	float MinThrustToNotFall = 1000;
	float ThrustMultiply = 2500;
	float Gravity = 981;
	float Drag = 0.25;
	
	float MaxHealth = 100;
//---------------------------------------------------------

//----------------------DYNAMICS---------------------------
	//Rotation----------
	float TargetYaw;
	float TargetPitch;
	float TargetRoll;
	
	float CurrentYaw;
	float CurrentPitch;
	float CurrentRoll;
	//------------------

	float ThrustSpeed;
	float CurrentSpeed;
	float AppliedGravity;

	float Health;
//---------------------------------------------------------

	
};