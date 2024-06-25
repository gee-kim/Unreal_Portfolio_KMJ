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
	//�⺻������ EBTNodeResult::Succeeded;
	EBTNodeResult::Type Result = Super::ExecuteTask(_OwnerComp, NodeMemory);

	//�� ����� ������Ʈ �Լ��� �����϶�.
	//������Ʈ �Լ��� ����Ǳ� �������� ���������� �츮 ���� �� ��尡 ����ǰ� �ִ� ������ ���δ�.
	//�� ������ ������ ������ ���� Selector
	return EBTNodeResult::InProgress;
}

void UBTTaskNode_Idle::TickTask(UBehaviorTreeComponent& _OwnerComp, uint8 _pNodeMemory, float _DeltaSeconds)
{

}