// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Environment.generated.h"

UENUM(BlueprintType) enum EnvironmentType
{
	Stalagmite		UMETA(DisplayName = "Stalagmite"),
	CryoBulb		UMETA(DisplayName = "Cryo Bulb"),
	ExplosivePlants	UMETA(DisplayName = "Explosive Plants"),
	MagmaGeysers	UMETA(DisplayName = "Magma Geysers")
};

UCLASS()
class DRGBOARDGAME_API AEnvironment : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AEnvironment();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Hex Coordinate") float PositionX;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Hex Coordinate") float PositionY;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "EnvironmentType") TEnumAsByte<EnvironmentType> TypeOfEnvironment;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
