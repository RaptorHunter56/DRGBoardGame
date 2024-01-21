// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Cave.generated.h"

UENUM(BlueprintType) enum CaveType
{
	SingleHex				UMETA(DisplayName = "Single Hex - Empty"),
	SingleHexZ1				UMETA(DisplayName = "Single Hex - Zone 1"),
	SingleHexZ2				UMETA(DisplayName = "Single Hex - Zone 2"),
	DoubleHex				UMETA(DisplayName = "Double Hex - Hole"),
	TripleHex				UMETA(DisplayName = "Triple Hex - Hole"),
	QuadrupleHexDroppod		UMETA(DisplayName = "Quadruple Hex - Droppod"),
	QuadrupleHexPit			UMETA(DisplayName = "Quadruple Hex - Pit"),
	QuintupleeHexPit		UMETA(DisplayName = "Quintuple Hex - Pit"),
	BaseCave1				UMETA(DisplayName = "Base Cave Hex - 1"),
	BaseCave2				UMETA(DisplayName = "Base Cave Hex - 2"),
	BaseCave3				UMETA(DisplayName = "Base Cave Hex - 3"),
	BaseCave4				UMETA(DisplayName = "Base Cave Hex - 4"),
	HiddenCaves1			UMETA(DisplayName = "Hidden Caves - 1"),
	HiddenCaves2			UMETA(DisplayName = "Hidden Caves - 2")
};

UCLASS()
class DRGBOARDGAME_API ACave : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACave();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Hex Coordinate", Meta = (ExposeOnSpawn = true)) float PositionX;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Hex Coordinate", Meta = (ExposeOnSpawn = true)) float PositionY;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Hex Coordinate", Meta = (ExposeOnSpawn = true)) int32 RotationPosition;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Hex Coordinate", Meta = (ExposeOnSpawn = true)) int32 StackPosition;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Hex Coordinate", Meta = (ExposeOnSpawn = true)) bool Top;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CaveType", Meta = (ExposeOnSpawn = true)) TEnumAsByte<CaveType> TypeOfCave;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
