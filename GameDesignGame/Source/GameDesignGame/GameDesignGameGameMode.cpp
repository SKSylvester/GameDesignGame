// Copyright Epic Games, Inc. All Rights Reserved.

#include "GameDesignGameGameMode.h"
#include "GameDesignGameCharacter.h"
#include "UObject/ConstructorHelpers.h"

AGameDesignGameGameMode::AGameDesignGameGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
