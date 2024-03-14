// Fill out your copyright notice in the Description page of Project Settings.


#include "SentryGun.h"

// Sets default values
ASentryGun::ASentryGun()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	PositionX = PositionY = 0;
	RotationPosition = 1;
}

// Called when the game starts or when spawned
void ASentryGun::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASentryGun::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

