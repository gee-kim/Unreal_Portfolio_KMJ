// Copyright Epic Games, Inc. All Rights Reserved.

#include "Unreal_Game_KMJGameMode.h"
#include "Unreal_Game_KMJCharacter.h"
#include "UObject/ConstructorHelpers.h"

AUnreal_Game_KMJGameMode::AUnreal_Game_KMJGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
