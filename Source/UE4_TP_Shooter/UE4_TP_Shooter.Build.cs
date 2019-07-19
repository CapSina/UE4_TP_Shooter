// Copyright 2019 Stuart McDonald.

using UnrealBuildTool;

public class UE4_TP_Shooter : ModuleRules
{
	public UE4_TP_Shooter(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
