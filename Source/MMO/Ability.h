// CodeSpartan
#pragma once
#include "HotbarObject.h"
#include "Ability.generated.h"

UENUM(BlueprintType)
enum class AbilityType : uint8
{
	Damage     UMETA(DisplayName = "Damage"),
	Heal    UMETA(DisplayName = "Heal"),
	BuffHealth     UMETA(DisplayName = "BuffHealth"),
	
};

UCLASS(Blueprintable, BlueprintType)
class MMO_API UAbility : public UHotbarObject
{
	GENERATED_BODY()
	
	public: 
		
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Ability)
	AbilityType Type;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Ability)
	int32 Value;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Ability)
	int32 Cost;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Ability)
	float Cooldown;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Ability)
	UAnimMontage* AnimationMontage;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Ability)
	USoundBase* UseSound;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Ability)
	UParticleSystem* CasterParticleFx;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Ability)
	UParticleSystem* TargetParticleFx;
};
