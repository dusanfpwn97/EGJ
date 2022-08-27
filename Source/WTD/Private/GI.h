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


/*
UENUM(BlueprintType)
enum class EUnitState : uint8
{
	NONE,
	MOVING,
	COMBAT
};*/

USTRUCT(BlueprintType)
struct FUnitInfo : public FTableRowBase
{
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool IsFriendly = false;
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


UCLASS()
class UGI : public UGameInstance
{
	GENERATED_BODY()
	
};
