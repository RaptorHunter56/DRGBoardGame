// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PickUp.generated.h"

UENUM(BlueprintType) enum PickUpType
{
	LootBug			UMETA(DisplayName = "Loot Bug"),
	RedSugar		UMETA(DisplayName = "Red Sugar"),
	BarleyBulb		UMETA(DisplayName = "Barley Bulb"),
	ApocaBloom		UMETA(DisplayName = "Apoca Bloom"),
	AlienEgg		UMETA(DisplayName = "Alien Egg"),
	AlienFossil		UMETA(DisplayName = "Alien Fossil")
};

UCLASS()
class DRGBOARDGAME_API APickUp : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APickUp();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Hex Coordinate", Meta = (ExposeOnSpawn = true)) float PositionX;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Hex Coordinate", Meta = (ExposeOnSpawn = true)) float PositionY;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Hex Coordinate", Meta = (ExposeOnSpawn = true)) bool Top;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PickUpType", Meta = (ExposeOnSpawn = true)) TEnumAsByte<PickUpType> TypeOfPickUp;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
