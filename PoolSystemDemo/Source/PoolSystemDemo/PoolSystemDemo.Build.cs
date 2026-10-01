// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class PoolSystemDemo : ModuleRules
{
	public PoolSystemDemo(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] {
			"Core",
			"CoreUObject",
			"Engine",
			"InputCore",
			"EnhancedInput",
			"AIModule",
			"StateTreeModule",
			"GameplayStateTreeModule",
			"UMG",
			"Slate",
			"ActorPooling"
		});

		PrivateDependencyModuleNames.AddRange(new string[] { });

		PublicIncludePaths.AddRange(new string[] {
			"PoolSystemDemo",
			"PoolSystemDemo/Variant_Horror",
			"PoolSystemDemo/Variant_Horror/UI",
			"PoolSystemDemo/Variant_Shooter",
			"PoolSystemDemo/Variant_Shooter/AI",
			"PoolSystemDemo/Variant_Shooter/UI",
			"PoolSystemDemo/Variant_Shooter/Weapons"
		});

		// Uncomment if you are using Slate UI
		// PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });

		// Uncomment if you are using online features
		// PrivateDependencyModuleNames.Add("OnlineSubsystem");

		// To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
	}
}
