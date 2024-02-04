// Fill out your copyright notice in the Description page of Project Settings.


#include "Dwarf.h"

// Sets default values
ADwarf::ADwarf()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	PositionX = PositionY = 0;
	RotationPosition = 1;

	TypeOfDwarf = DwarfType::Driller;

}

// Called when the game starts or when spawned
void ADwarf::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ADwarf::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

