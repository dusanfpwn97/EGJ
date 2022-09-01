// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "Engine/DataTable.h"
//#include "Engine/SkeletalMesh.h"
#include "GI.generated.h"

/**
 * 
 */



UENUM(BlueprintType)
enum class EUpgradeType : uint8
{
	NONE,
	DAMAGE,
	ATTACK_SPEED,
	HP,
	HP_REGEN,
	RANGE,
	MULTISHOT
};

USTRUCT(BlueprintType)
struct FUnitInfo
{
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool IsFriendly = false;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool IsUndead = false;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float HP = 100.f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float Speed = 280.f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float HPRegen = 0.f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float AtkSpeed = 0.5f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float AtkRange = 120.f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float Damage = 10.f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int32 BaseGoldCost = 10;

};



USTRUCT(BlueprintType)
struct FIndividualUpgrade
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FString ShortName;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		EUpgradeType UpgradeType;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float Value;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TArray<int32> AvailableLevels;

};

USTRUCT(BlueprintType)
struct FUpgradesByLevel
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FIndividualUpgrade> Upgrades;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Cost;
};


USTRUCT(BlueprintType)
struct FUpgrade
{
	GENERATED_BODY()

		UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FString Name;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FString Description;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TArray<FUpgradesByLevel> UpgradesByLevel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		class UTexture2D* SmallIcon;

};


UCLASS()
class UGI : public UGameInstance
{
	GENERATED_BODY()
	
};
