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
enum class E : uint8
{
	NONE,
	STARTING,
	HITTING,
	ENDING
};*/

USTRUCT(BlueprintType)
struct FUnitInfo : public FTableRowBase
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float HP = 100.f;
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float Speed = 280.f;
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float HPRegen = 0.f;
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		float AtkSpeed = 0.5f;
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		float AtkRange = 50.f;
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		float Damage = 10.f;
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		class USkeletalMesh* FriendlySK;
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		class USkeletalMesh* EnemySK;

};


UCLASS()
class UGI : public UGameInstance
{
	GENERATED_BODY()
	
};
