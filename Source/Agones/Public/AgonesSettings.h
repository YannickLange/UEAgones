#pragma once

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"
#include "UObject/Object.h"
#include "AgonesSettings.generated.h"

/**
 * Implements the settings for Agones.
 */
UCLASS(config = Game)
class AGONES_API UAgonesSettings : public UObject
{
	GENERATED_BODY()

public:

	/** Default constructor */
	UAgonesSettings();

	UPROPERTY(EditAnywhere, config, Category = "Agones", meta = (DisplayName = "Agones Sidecar IP Address"))
	FString AgonesSidecarAddress;

	UPROPERTY(EditAnywhere, config, Category = "Agones", meta = (DisplayName = "Health Ping Enabled"))
	bool bHealthPingEnabled;

	UPROPERTY(EditAnywhere, config, Category = "Agones", meta = (DisplayName = "Health Ping Seconds"))
	float HealthPingSeconds;

	UPROPERTY(EditAnywhere, config, Category = "Agones", meta = (DisplayName = "Debug Logging Enabled"))
	bool bDebugLogEnabled;
};
