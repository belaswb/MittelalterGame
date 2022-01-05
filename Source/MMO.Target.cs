// CodeSpartan

using UnrealBuildTool;
using System.Collections.Generic;

public class MMOTarget : TargetRules
{
	public MMOTarget(TargetInfo Target) : base(Target)
	{        
        Type = TargetType.Game;
        DefaultBuildSettings = BuildSettingsVersion.V2;
        ExtraModuleNames.AddRange( new string[] { "MMO" } );
	}
}
