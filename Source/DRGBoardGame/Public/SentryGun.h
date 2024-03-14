// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SentryGun.generated.h"

UCLASS()
class DRGBOARDGAME_API ASentryGun : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASentryGun();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Hex Coordinate", Meta = (ExposeOnSpawn = true)) float PositionX;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Hex Coordinate", Meta = (ExposeOnSpawn = true)) float PositionY;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Hex Coordinate", Meta = (ExposeOnSpawn = true)) int32 RotationPosition;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
