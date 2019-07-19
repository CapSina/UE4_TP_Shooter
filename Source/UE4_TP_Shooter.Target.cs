// Copyright 2019 Stuart McDonald.

using UnrealBuildTool;
using System.Collections.Generic;

public class UE4_TP_ShooterTarget : TargetRules
{
	public UE4_TP_ShooterTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;
		ExtraModuleNames.Add("UE4_TP_Shooter");
	}
}
