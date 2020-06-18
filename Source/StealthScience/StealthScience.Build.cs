// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class StealthScience : ModuleRules
{
	public StealthScience(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay", "HTNPlanner" });

		//PublicDependencyModuleNames.AddRange( new string[] { "HTNPlanner", } );
		//PrivateDependencyModuleNames.AddRange( new string[] { "CoreUObject", "Engine", "AIModule" } );

		//PublicDependencyModuleNames.AddRange(new string[] { "HTNPlanner" });
		//PrivateDependencyModuleNames.AddRange(new string[] { "HTNPlanner" });
	}
}
