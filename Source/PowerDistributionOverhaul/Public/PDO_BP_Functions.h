// ILikeBanas

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "FGCircuitSubsystem.h"
#include "PDO_BP_Functions.generated.h"

/**
 * 
 */
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FCircuitChanged);
UCLASS()
class POWERDISTRIBUTIONOVERHAUL_API UPDO_BP_Functions : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintPure, Category = "PDO|PowerCircuit|Connection")
	static void GetWires(class UFGPowerConnectionComponent* PowerConnectionComponent, TArray< class AFGBuildableWire* >& OutWires);

	UFUNCTION(BlueprintPure, Category = "PDO|PowerCircuit|Connection")
	static TArray< class UFGCircuitConnectionComponent* >& GetComponents(class UFGCircuit* Circuit);
	
	UFUNCTION(BlueprintPure, Category = "PDO|CircuitSubsystem")
	static void GetCircuits(class AFGCircuitSubsystem* Subsystem, TMap< int32, class UFGCircuit* >& OutCircuits);

	UFUNCTION(BlueprintCallable, Category = "PDO")
	static void BindOnCircuitChange(AFGCircuitSubsystem* Subsystem);
	
	UPROPERTY(BlueprintAssignable, Category = "Setup")
	FCircuitChanged OnCircuitChanged;
};
