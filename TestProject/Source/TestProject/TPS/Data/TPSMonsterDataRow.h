// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataTable.h"
#include "TPSMonsterDataRow.generated.h"

/**
 * 
 */
USTRUCT(BlueprintType)
struct TESTPROJECT_API FTPSMonsterDataRow : public FTableRowBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float SightRange = 0.0f;

	
};

UCLASS()
class UTPSMonsterData : public UObject
{
	GENERATED_BODY()

public:
	const FTPSMonsterDataRow* Data;

};
