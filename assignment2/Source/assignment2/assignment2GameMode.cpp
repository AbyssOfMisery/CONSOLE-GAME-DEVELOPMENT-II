// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "assignment2GameMode.h"
#include "assignment2Character.h"
#include "UObject/ConstructorHelpers.h"

Aassignment2GameMode::Aassignment2GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
