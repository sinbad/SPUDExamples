#include "SPUDExamplesGameInstance.h"

#include "SpudSubsystem.h"


void USPUDExamplesGameInstance::Init()
{
	Super::Init();

	// Tell the SPUD system to include this object in persistence
	// Because it's a global object and not in the scene, it won't be discovered by implementing ISpudObject
	// So we tell the system about this object explicitly. You can do this with any UObject.
	// We use a hardcoded name for simplicity since this is a singleton. That way we don't have to rely on
	// a generated FName, or add our own SpueGuid property, to otherwise identify it.
	GetSpudSubsystem(GetWorld())->AddPersistentGlobalObjectWithName(this, "ExampleGameInstance");	
	
}
