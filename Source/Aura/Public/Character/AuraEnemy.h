// Copyright Druid Mechanics

#pragma once

#include "CoreMinimal.h"
#include "Character/AuraCharacter.h"
#include "Interaction/EnemyInterface.h"
#include "AuraEnemy.generated.h"

/**
 * 
 */
UCLASS()
class AURA_API AAuraEnemy : public AAuraCharacterBase, public  IEnemyInterface
{
	GENERATED_BODY()
public:
	virtual void HighlightActor();
	virtual void UnHighlightActor();
	
	AAuraEnemy();

	virtual void BeginPlay() override;
	
};
