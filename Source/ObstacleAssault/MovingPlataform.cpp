// Fill out your copyright notice in the Description page of Project Settings.


#include "MovingPlataform.h"

// Sets default values
AMovingPlataform::AMovingPlataform()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMovingPlataform::BeginPlay()
{
	Super::BeginPlay();

	startLocation = GetActorLocation();
	
}

// Called every frame
void AMovingPlataform::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
	if (FVector::Dist(currentLocation, startLocation) > 100) {
		plataformVelocity = -plataformVelocity;
	}

	currentLocation = GetActorLocation() + plataformVelocity * DeltaTime;

	SetActorLocation(currentLocation);

}

