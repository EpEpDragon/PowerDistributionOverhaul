// ILikeBanas

#pragma once

#include "CoreMinimal.h"
#include "Subsystem/ModSubsystem.h"
#include "PDOGridManageSubsystem.generated.h"

/**
 * 
 */
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnCircuitChange);

UCLASS()
class POWERDISTRIBUTIONOVERHAUL_API APDOGridManageSubsystem : public AModSubsystem
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintPure, Category = "PDO")
	static FString SayHello();

	UPROPERTY(BlueprintAssignable, Category = "PDO")
	FOnCircuitChange PDOOnCircuitChange;

	UFUNCTION(BlueprintCallable, Category = "PDO")
	void Bind();
	
private:
	APDOGridManageSubsystem();
	UFUNCTION()
	void CircuitChanged() const;
};
