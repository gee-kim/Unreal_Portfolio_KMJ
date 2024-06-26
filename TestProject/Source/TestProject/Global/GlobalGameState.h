// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameState.h"
#include "GlobalGameState.generated.h"

/**
 * 
 */

UCLASS()
class TESTPROJECT_API UActorGroup : public UObject
{
	GENERATED_BODY()

public:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	TArray<AActor*> Actors;

};

UCLASS()
class TESTPROJECT_API AGlobalGameState : public AGameState
{
	GENERATED_BODY()
	
public:
	template<typename EnumType>
	void PushActor(EnumType _Index, AActor* _Actor)
	{
		PushActor(static_cast<uint8>(_Index), _Actor);
	}

	void PushActor(uint8 _Index, AActor* _Actor);

	template<typename EnumType>
	TArray<AActor*> GetGroup(EnumType _Index)
	{
		return GetGroup(static_cast<uint8>(_Index));
	}

	TArray<AActor*> GetGroup(uint8 _Index);

private:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	TMap<int, UActorGroup*> AllActor;
};
