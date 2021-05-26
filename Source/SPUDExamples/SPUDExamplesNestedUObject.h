#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SPUDExamplesNestedUObject.generated.h"

/**
 * This is a test of a nested UObject to prove it can be saved. Doesn't need to be an ISpudObject because
 * it will be discovered inside another object that's already tracked.
 */
UCLASS(Blueprintable)
class SPUDEXAMPLES_API USPUDExamplesNestedUObject : public UObject
{
	GENERATED_BODY()

protected:
	UPROPERTY(SaveGame, BlueprintReadWrite)
	int TestSubObjectProperty;
};
