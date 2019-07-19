// Copyright 2019 Stuart McDonald.

using UnrealBuildTool;
using System.Collections.Generic;

public class UE4_TP_ShooterEditorTarget : TargetRules
{
	public UE4_TP_ShooterEditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;
		ExtraModuleNames.Add("UE4_TP_Shooter");
	}
}
