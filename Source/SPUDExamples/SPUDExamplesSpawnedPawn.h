// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ISpudObject.h"
#include "SpudHelpers.h"
#include "SPUDExamplesSpawnedPawn.generated.h"

/**
 * Pawn to test always respawn
 */
UCLASS(Blueprintable, BlueprintType)
class SPUDEXAMPLES_API ASPUDExamplesSpawnedPawn : public ASpudPawnBase
{
	GENERATED_BODY()

public:
	virtual ESpudRespawnMode GetSpudRespawnMode_Implementation() const override { return ESpudRespawnMode::AlwaysRespawn; }
};
