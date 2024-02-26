// Copyright Victor Veldstra 2024

#pragma once

#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "ALSGameSettings.generated.h"

/**
 * Game-specific settings related to the Advanced Locomotion System
 */
UCLASS(Config = Game, DefaultConfig)
class ADVANCEDLOCOMOTIONSYSTEMRUNTIME_API UALSGameSettings : public UDeveloperSettings
{
	GENERATED_BODY()

public:

	// Data table containing footstep hit information
	UPROPERTY(Config, EditDefaultsOnly, BlueprintReadOnly, Category = "AdvancedLocomotionSystem", Meta = (RequiredAssetDataTags = "RowStructure=/Script/AdvancedLocomotionSystemRuntime.ALSHitFX"))
	TSoftObjectPtr<UDataTable> HitDataTable;

};
