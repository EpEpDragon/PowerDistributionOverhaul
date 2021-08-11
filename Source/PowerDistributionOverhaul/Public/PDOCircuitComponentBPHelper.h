// ILikeBanas

#pragma once

#include "CoreMinimal.h"
#include "FGPowerConnectionComponent.h"
#include "PDOCircuitComponentBPHelper.generated.h"

/**
 * 
 */
UCLASS()
class POWERDISTRIBUTIONOVERHAUL_API UPDOCircuitComponentBPHelper : public UFGPowerConnectionComponent
{
	GENERATED_BODY()
public:
	// UFUNCTION(BlueprintPure, Category = "PDO")
	// void BPGetWires(TArray< class AFGBuildableWire* >& out_wires);

	UFUNCTION(BlueprintPure, Category = "PDO|PowerCircuit|Connection")
	void GetWires(class UFGPowerConnectionComponent* PowerConnectionComponent, TArray< class AFGBuildableWire* >& OutWires);
	
};
