// Fill out your copyright notice in the Description page of Project Settings.


#include "Global/Animation/GlobalAnimInstance.h"



void UGlobalAnimInstance::ChangeAnimation(uint8 Key)
{
	//ã�� �ִϸ��̼��� ���ٸ� �α� ����ֱ�
	if (false == AnimMontages.Contains(Key))
	{
		//fatal log ����ֱ�
	}
}

void UGlobalAnimInstance::PushAnimation(uint8 Key, class UAnimMontage* _Montage)
{

}
