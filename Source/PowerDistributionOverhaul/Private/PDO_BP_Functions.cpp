// ILikeBanas


#include "PDO_BP_Functions.h"

#include "AkAcousticPortal.h"
#include "FGPowerConnectionComponent.h"

static TBaseStaticDelegateInstance<void()>::FFuncPtr DeleInstEventCircuitChanged;

void UPDO_BP_Functions::GetWires(class UFGPowerConnectionComponent* PowerConnectionComponent, TArray< class AFGBuildableWire* >& OutWires)
{
	PowerConnectionComponent->GetWires(OutWires);
}

void UPDO_BP_Functions::GetCircuits(class AFGCircuitSubsystem* Subsystem, TMap< int32, class UFGCircuit* >& OutCircuits)
{
	OutCircuits = Subsystem->mCircuits;
}


TArray< class UFGCircuitConnectionComponent* >& UPDO_BP_Functions::GetComponents(class UFGCircuit* Circuit)
{
	return Circuit->GetComponents();
}

static void BroadcastCircuitChanged()
{
	
}

void UPDO_BP_Functions::BindOnCircuitChange(AFGCircuitSubsystem* Subsystem)
{
	DeleInstEventCircuitChanged = &BroadcastCircuitChanged;
	Subsystem->OnCircuitsChangedEvent.AddStatic(&BroadcastCircuitChanged);
}

	
