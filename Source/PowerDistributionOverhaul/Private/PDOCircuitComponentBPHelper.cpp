// ILikeBanas


#include "PDOCircuitComponentBPHelper.h"

// void UPDOCircuitComponentBPHelper::BPGetWires(TArray< class AFGBuildableWire* >& out_wires) {
// 	GetWires( out_wires);
// }

void UPDOCircuitComponentBPHelper::GetWires(class UFGPowerConnectionComponent* PowerConnectionComponent, TArray< class AFGBuildableWire* >& OutWires)
{
	PowerConnectionComponent->GetWires(OutWires);
}