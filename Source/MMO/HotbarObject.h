// CodeSpartan

#pragma once

#include "Engine/DataAsset.h"
#include "HotbarObject.generated.h"

class UTexture2D;

UCLASS(Blueprintable, BlueprintType)
class MMO_API UHotbarObject : public UDataAsset
{
	GENERATED_BODY()
	
	public:
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = General)
	FText Name;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = General)
	UTexture2D* Icon;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = General)
	FText Description;
};
