// Fill out your copyright notice in the Description page of Project Settings.


#include "RotatingPlataform.h"

// Sets default values
ARotatingPlataform::ARotatingPlataform()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ARotatingPlataform::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ARotatingPlataform::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	RotatePlataform(DeltaTime);

}

void ARotatingPlataform::RotatePlataform(float DeltaTime)
{
	AddActorLocalRotation(plataformRotationSpeed * DeltaTime);
}

