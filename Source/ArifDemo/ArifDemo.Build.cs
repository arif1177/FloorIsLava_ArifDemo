// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class ArifDemo : ModuleRules
{
	public ArifDemo(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
