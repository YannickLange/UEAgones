#pragma once

#include "CoreMinimal.h"
#include "ModuleManager.h"
#include "Engine/World.h"

class FAgonesModule : public IModuleInterface
{
public:

	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;

private:
	void OnWorldInitialized(UWorld* World, UWorld::InitializationValues IVS);

	/** Communicates with the Agones sidecar. */
	TSharedPtr<class FAgonesHook> HookPtr;
};