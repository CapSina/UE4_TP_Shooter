// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "UE4_TP_ShooterGameMode.h"
#include "UE4_TP_ShooterCharacter.h"
#include "UObject/ConstructorHelpers.h"

AUE4_TP_ShooterGameMode::AUE4_TP_ShooterGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
