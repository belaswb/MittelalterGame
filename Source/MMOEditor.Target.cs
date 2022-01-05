// CodeSpartan

using UnrealBuildTool;
using System.Collections.Generic;

public class MMOEditorTarget : TargetRules
{
	public MMOEditorTarget(TargetInfo Target) : base(Target)
	{        
        Type = TargetType.Editor;
        DefaultBuildSettings = BuildSettingsVersion.V2;
        ExtraModuleNames.AddRange( new string[] { "MMO" } );
	}
}
