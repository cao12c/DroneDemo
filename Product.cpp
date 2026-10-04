#include "DroneState.h"
#include "Product.h"

void StateChange(DroneState& state)
{
    state.update(0.1);
}