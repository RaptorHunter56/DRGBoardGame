// Fill out your copyright notice in the Description page of Project Settings.


#include "Bug.h"

// Sets default values
ABug::ABug()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	PositionX = PositionY = 0;
	RotationPosition = 1;

	TypeOfBug = BugType::Grunt;
}

// Called when the game starts or when spawned
void ABug::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABug::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

