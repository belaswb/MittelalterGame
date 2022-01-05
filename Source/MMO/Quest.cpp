// CodeSpartan
#include "Quest.h"
#include "MMO.h"

UQuest::UQuest(const FObjectInitializer& ObjectInitializer)
: Super(ObjectInitializer)
{
	Name = FText::FromString(GetName()); //make the human-readable name the same as the asset name
}

void UQuest::PostRename(UObject* OldOuter, const FName OldName)
{
	Name = FText::FromString(GetName()); //make the human-readable name the same as the asset name
}


