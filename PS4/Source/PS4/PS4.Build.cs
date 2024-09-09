// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class PS4 : ModuleRules
{
	public PS4(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
