// CodeSpartan

using UnrealBuildTool;
using System.Collections.Generic;

[SupportedPlatforms(UnrealPlatformClass.Server)]
public class MMOServerTarget : TargetRules
{ 
	public MMOServerTarget(TargetInfo Target) : base(Target)
    {        
        Type = TargetType.Server;
        DefaultBuildSettings = BuildSettingsVersion.V2;
        ExtraModuleNames.Add("MMO");
        bUseLoggingInShipping = true;
    }
}