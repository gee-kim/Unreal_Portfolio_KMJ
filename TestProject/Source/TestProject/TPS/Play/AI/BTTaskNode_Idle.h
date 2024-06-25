// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BTTaskNode_Idle.generated.h"

/**
 * 
 */
UCLASS()
class TESTPROJECT_API UBTTaskNode_Idle : public UBTTaskNode
{
	GENERATED_BODY()
	
public:
	UBTTaskNode_Idle();

	EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& _OwnerComp, uint8* NodeMemory);

	void TickTask(UBehaviorTreeComponent& _OwnerComp, uint8 _pNodeMemory, float _DeltaSeconds);
};
