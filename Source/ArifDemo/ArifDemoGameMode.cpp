// Copyright Epic Games, Inc. All Rights Reserved.

#include "ArifDemoGameMode.h"
#include "ArifDemoCharacter.h"
#include "UObject/ConstructorHelpers.h"

AArifDemoGameMode::AArifDemoGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
