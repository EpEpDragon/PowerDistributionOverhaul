// ILikeBanas


#include "PDOGridManageSubsystem.h"
#include "FGCircuitSubsystem.h"

APDOGridManageSubsystem::APDOGridManageSubsystem()
{
	// AFGCircuitSubsystem::Get(GetWorld())->OnCircuitsChangedEvent.AddUObject(this, &APDOGridManageSubsystem::CircuitChanged);
}

FString APDOGridManageSubsystem::SayHello()
{
	return "Hello";
}

void APDOGridManageSubsystem::Bind()
{
	AFGCircuitSubsystem::Get(GetWorld())->OnCircuitsChangedEvent.AddUObject(this, &APDOGridManageSubsystem::CircuitChanged);
}

void APDOGridManageSubsystem::CircuitChanged() const
{
	PDOOnCircuitChange.Broadcast();
}
