// Copyright Epic Games, Inc. All Rights Reserved.

#include "TheGauntletGameMode.h"
#include "TheGauntletCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATheGauntletGameMode::ATheGauntletGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
