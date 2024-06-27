// Fill out your copyright notice in the Description page of Project Settings.


#include "Global/Animation/GlobalAnimInstance.h"



void UGlobalAnimInstance::ChangeAnimation(uint8 Key)
{
	//찾는 애니메이션이 없다면 로그 띄어주기
	if (false == AnimMontages.Contains(Key))
	{
		//fatal log 띄어주기
	}
}

void UGlobalAnimInstance::PushAnimation(uint8 Key, class UAnimMontage* _Montage)
{

}
