// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MyEnum.generated.h"

UENUM(BlueprintType)
enum class TPSPlayerAnim : uint8
{
	Idle,
	Run,
	Attack,
};

/**
 * 
 */
UCLASS()
class TESTPROJECT_API UMyEnum : public UObject
{
	GENERATED_BODY()
	
};
