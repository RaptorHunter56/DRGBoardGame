// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Dice.generated.h"

UENUM(BlueprintType) enum class DiceType
{
	ArmourPierce	UMETA(DisplayName = "Armour Pierce"),
	Bullet			UMETA(DisplayName = "Bullet"),
	Enemy			UMETA(DisplayName = "Enemy"),
	Explosion		UMETA(DisplayName = "Explosion"),
	Flame			UMETA(DisplayName = "Flame"),
	Mineral			UMETA(DisplayName = "Mineral"),
	Pickaxe			UMETA(DisplayName = "Pickaxe")
};

UENUM(BlueprintType) enum class DiceDamageType
{
	None				UMETA(DisplayName = "None"),
	ArmourPierce		UMETA(DisplayName = "Armour Pierce"),
	ArmourPierceDouble	UMETA(DisplayName = "Armour Pierce Double"),
	Bullet				UMETA(DisplayName = "Bullet"),
	Enemy				UMETA(DisplayName = "Enemy"),
	Exclamation			UMETA(DisplayName = "Exclamation Mark"),
	Explosion			UMETA(DisplayName = "Explosion"),
	ExplosionDouble		UMETA(DisplayName = "Explosion Double"),
	Move				UMETA(DisplayName = "Move"),
	Flame				UMETA(DisplayName = "Flame"),
	FlameDouble			UMETA(DisplayName = "Flame Double"),
	Gold				UMETA(DisplayName = "Gold"),
	Nitra				UMETA(DisplayName = "Nitra"),
	Pickaxe				UMETA(DisplayName = "Pickaxe"),
	PickaxeDouble		UMETA(DisplayName = "Pickaxe Double"),

	Stunned				UMETA(DisplayName = "Stunned"),
	Webbed				UMETA(DisplayName = "Webbed"),
	Frozen				UMETA(DisplayName = "Frozen"),
	KnockedOver			UMETA(DisplayName = "Knocked Over"),

	OneDamage			UMETA(DisplayName = "One Damage"),
	RemoveWall			UMETA(DisplayName = "Remove Wall")
};


UCLASS()
class DRGBOARDGAME_API ADice : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ADice();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Dice", Meta = (ExposeOnSpawn = true)) TEnumAsByte<DiceType> TypeOfDice;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
