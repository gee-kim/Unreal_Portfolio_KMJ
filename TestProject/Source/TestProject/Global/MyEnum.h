// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MyEnum.generated.h"

UENUM(BlueprintType)
enum class ETPSPlayerAnim : uint8
{
	Idle UMETA(DisplayName = "���ֱ�"),
	Run UMETA(DisplayName = "�޸���"),
	Attack UMETA(DisplayName = "����"),
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
	Idle UMETA(DisplayName = "���ֱ�"),
	Patrol UMETA(DisplayName = "�����̱�"),
	MovetoPlayer UMETA(DisplayName = "�÷��̾� �ѱ�"),
	MovetoLocation UMETA(DisplayName = "���ڸ��� ���ư���"),
	Attack UMETA(DisplayName = "����"),
};

/**
 * 
 */

UCLASS()
class TESTPROJECT_API UMyEnum : public UObject
{
	GENERATED_BODY()
	
};
