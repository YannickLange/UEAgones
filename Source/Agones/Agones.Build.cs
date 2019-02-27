using UnrealBuildTool;

public class Agones : ModuleRules
{
	public Agones(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;
		
		PublicIncludePaths.AddRange(
			new string[] {
			});

		PublicDependencyModuleNames.AddRange(
			new string[]
			{
				"Core",
			});
		
		PrivateDependencyModuleNames.AddRange(
			new string[]
			{
				"CoreUObject",
				"Engine",
				"Http",
			});
	}
}
