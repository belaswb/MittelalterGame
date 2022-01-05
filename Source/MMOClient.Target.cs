// CodeSpartan

using UnrealBuildTool;
using System.Collections.Generic;

[SupportedPlatforms(UnrealPlatformClass.Desktop)]
public class MMOClientTarget : TargetRules
{ 
	public MMOClientTarget(TargetInfo Target) : base(Target)
    {        
        Type = TargetType.Client;
        DefaultBuildSettings = BuildSettingsVersion.V2;
        ExtraModuleNames.Add("MMO");
        bUseLoggingInShipping = true;
    }
}