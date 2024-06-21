// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
//향상된 입력 관련 헤더 추가
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "EnhancedActionKeyMapping.h"
#include "SideScrollPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class TESTPROJECT_API ASideScrollPlayerController : public APlayerController
{
	GENERATED_BODY()
	
public:
	void SetupInputComponent() override;

	UPROPERTY(EditAnywhere, Category = "Input")
	UInputMappingContext* InputMapping;
};
