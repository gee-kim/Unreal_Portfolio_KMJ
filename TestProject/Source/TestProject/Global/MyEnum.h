// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MyEnum.generated.h"

UENUM(BlueprintType)
enum class ETPSPlayerAnim : uint8
{
	Idle UMETA(DisplayName = "서있기"),
	Run UMETA(DisplayName = "달리기"),
	Attack UMETA(DisplayName = "공격"),
};

UENUM(BlueprintType)
enum class ETPSObjectType : uint8
{
	Player,
	Monster,
	Max,
};

UENUM(BlueprintType)
enum class ETPSCharacterSlot : uint8
{
	LWeapon,
	RWeapon,
	SlotMax,
};

UENUM(BlueprintType)
enum class ETPSMonsterState : uint8
{
	Idle UMETA(DisplayName = "서있기"),
	Patrol UMETA(DisplayName = "서성이기"),
	MovetoPlayer UMETA(DisplayName = "플레이어 쫓기"),
	MovetoLocation UMETA(DisplayName = "제자리로 돌아가기"),
	Attack UMETA(DisplayName = "공격"),
};

/**
 * 
 */

UCLASS()
class TESTPROJECT_API UMyEnum : public UObject
{
	GENERATED_BODY()
	
};
