// Fill out your copyright notice in the Description page of Project Settings.
#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MovingPlatform.generated.h"
UCLASS()
class OBSTACLEASSAULT_API AMovingPlatform : public AActor
{
	GENERATED_BODY()
public:	
	// Sets default values for this actor's properties
	AMovingPlatform();
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
private:
	UPROPERTY(EditAnywhere, Category="Moving Platform") //I will recommend to add blueprintonly class here as well
	FVector PlatformVelocity = FVector(0,0,500);
	UPROPERTY(EditAnywhere, Category="Moving Platform")
	float MovedDistance = 500;
	UPROPERTY(EditAnywhere, Category="Rotation")
	FRotator RotationVelocity;
	FVector StartLocation;
	void MovePlatform(float DeltaTime);
	void RotatePlatform(float DeltaTime);
	bool ShouldPlatformReturn() const;
	float GetDistanceMoved() const; 
};
# moving platform.h is synced with moving platform.cpp
