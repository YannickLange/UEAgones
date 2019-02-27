#include "AgonesSettings.h"

UAgonesSettings::UAgonesSettings()
	: Super()
	, AgonesSidecarAddress("http://localhost:59358")
	, bHealthPingEnabled(false)
	, HealthPingSeconds(5.0f)
	, bDebugLogEnabled(false)
{
}

 