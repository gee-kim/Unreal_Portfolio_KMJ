// Fill out your copyright notice in the Description page of Project Settings.

#include "TPS/Play/AI/BTTaskNode_Idle.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "AIController.h"

UBTTaskNode_Idle::UBTTaskNode_Idle()
{
	bNotifyTick = false;
	//bNotifyTaskFinished
}

EBTNodeResult::Type UBTTaskNode_Idle::ExecuteTask(UBehaviorTreeComponent& _OwnerComp, uint8* NodeMemory)
{
	//기본적으로 EBTNodeResult::Succeeded;
	EBTNodeResult::Type Result = Super::ExecuteTask(_OwnerComp, NodeMemory);

	//이 노드의 업데이트 함수를 실행하라.
	//업데이트 함수가 종료되기 전까지는 지속적으로 우리 눈에 이 노드가 실행되고 있는 것으로 보인다.
	//이 노드들을 연결한 위쪽이 지금 Selector
	return EBTNodeResult::InProgress;
}

void UBTTaskNode_Idle::TickTask(UBehaviorTreeComponent& _OwnerComp, uint8 _pNodeMemory, float _DeltaSeconds)
{

}