// Copyright Emirhan Kaplan


#include "Characters/CC_EnemyCharacter.h"
#include "AbilitySystemComponent.h"


// Sets default values
ACC_EnemyCharacter::ACC_EnemyCharacter()
{
	PrimaryActorTick.bCanEverTick = false;
	
	AbilitySystemComponent = CreateDefaultSubobject<UAbilitySystemComponent>("AbilitySystemComponent");
	AbilitySystemComponent->SetIsReplicated(true);
	AbilitySystemComponent->SetReplicationMode(EGameplayEffectReplicationMode::Minimal);
	
}

void ACC_EnemyCharacter::BeginPlay()
{
	Super::BeginPlay();
	
	if (!IsValid(GetAbilitySystemComponent()))return;
	 
	GetAbilitySystemComponent()->InitAbilityActorInfo(this,this);
	
	if (!HasAuthority()) {return;}
	
	GiveStartupAbilities();
}

UAbilitySystemComponent* ACC_EnemyCharacter::GetAbilitySystemComponent() const
{
	return AbilitySystemComponent;
}



