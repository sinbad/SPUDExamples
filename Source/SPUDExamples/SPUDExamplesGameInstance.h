#pragma once

#include "CoreMinimal.h"

#include "Engine/GameInstance.h"
#include "SPUDExamplesGameInstance.generated.h"

UCLASS()
class SPUDEXAMPLES_API USPUDExamplesGameInstance : public UGameInstance
{
	GENERATED_BODY()
	
protected:
	/// Example of using the C++ SaveGame flag to make a property persistent
	/// Note that we DON'T need to implement ISpudObject in this case because this object
	/// is not an Actor that needs to be discovered in the world.
	/// As a Global Object, we'll sub it to persistence manually
	UPROPERTY(BlueprintReadWrite, SaveGame)
	int Score;


public:
	virtual void Init() override;
};
