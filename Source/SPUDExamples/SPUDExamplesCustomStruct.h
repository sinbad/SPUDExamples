#pragma once

#include "CoreMinimal.h"

#include "SPUDExamplesCustomStruct.generated.h"
/// A custom struct just to show these can be stored too (although NOT in arrays right now, builtin structs can be)
USTRUCT(BlueprintType)
struct FSpudExampleCustomStruct
{
	GENERATED_BODY()
	
	UPROPERTY(EditAnywhere, SaveGame)
	int IntNestedField;
	
	UPROPERTY(EditAnywhere, SaveGame)
	FString StringNestedField;
	
};
