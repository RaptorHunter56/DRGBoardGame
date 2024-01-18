// Fill out your copyright notice in the Description page of Project Settings.


#include "Cave.h"

// Sets default values
ACave::ACave()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	PositionX = PositionY = 0;
	StackPosition = RotationPosition = 1;
}

// Called when the game starts or when spawned
void ACave::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACave::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

