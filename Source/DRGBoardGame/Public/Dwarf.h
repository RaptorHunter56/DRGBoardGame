// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Dwarf.generated.h"

UENUM(BlueprintType) enum DwarfType
{
	Driller		UMETA(DisplayName = "Driller"),
	Engineer	UMETA(DisplayName = "Engineer"),
	Gunner		UMETA(DisplayName = "Gunner"),
	Scout		UMETA(DisplayName = "Scout")
};

UCLASS()
class DRGBOARDGAME_API ADwarf : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ADwarf();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Hex Coordinate", Meta = (ExposeOnSpawn = true)) float PositionX;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Hex Coordinate", Meta = (ExposeOnSpawn = true)) float PositionY;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Hex Coordinate", Meta = (ExposeOnSpawn = true)) int32 RotationPosition;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "DwarfType", Meta = (ExposeOnSpawn = true)) TEnumAsByte<DwarfType> TypeOfDwarf;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
