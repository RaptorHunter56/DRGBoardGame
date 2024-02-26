// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Bug.generated.h"

UENUM(BlueprintType) enum BugType
{
	BroodNexus			UMETA(DisplayName = "Brood Nexus"),
	Dreadnought			UMETA(DisplayName = "Dreadnought"),
	Exploder			UMETA(DisplayName = "Exploder"),
	Rammer				UMETA(DisplayName = "Rammer"),
	Stingtail			UMETA(DisplayName = "Stingtail"),
	Goobomber			UMETA(DisplayName = "Goobomber"),
	Grunt				UMETA(DisplayName = "Grunt"),
	Mactera				UMETA(DisplayName = "Mactera"),
	Menace				UMETA(DisplayName = "Menace"),
	NaedocyteBreeder	UMETA(DisplayName = "Naedocyte Breeder"),
	NaedocyteHatchlings	UMETA(DisplayName = "Naedocyte Hatchlings"),
	Opressor			UMETA(DisplayName = "Opressor"),
	Praetorian			UMETA(DisplayName = "Praetorian"),
	Shellback			UMETA(DisplayName = "Shellback"),
	Slasher				UMETA(DisplayName = "Slasher"),
	Spitballer			UMETA(DisplayName = "Spitballer"),
	Warden				UMETA(DisplayName = "Warden"),
	Webspitter			UMETA(DisplayName = "Webspitter")
};

UCLASS()
class DRGBOARDGAME_API ABug : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABug();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Hex Coordinate", Meta =(ExposeOnSpawn = true)) float PositionX;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Hex Coordinate", Meta =(ExposeOnSpawn = true)) float PositionY;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Hex Coordinate", Meta =(ExposeOnSpawn = true)) int32 RotationPosition;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BugType", Meta = (ExposeOnSpawn = true)) TEnumAsByte<BugType> TypeOfBug;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BugType", Meta = (ExposeOnSpawn = true)) int BugHp;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
