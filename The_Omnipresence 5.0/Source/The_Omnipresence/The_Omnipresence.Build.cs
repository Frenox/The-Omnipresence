// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class The_Omnipresence : ModuleRules
{
	public The_Omnipresence(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
