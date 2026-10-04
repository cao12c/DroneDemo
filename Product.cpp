#include "DroneState.h"
#include "Product.h"

void StateChange(DroneState& state)
{
    state.setPosition(10.0, 20.0, 30.0);
    state.setVelocity(1.0, 2.0, 3.0);
    state.setAttitude(0.1, 0.2, 0.3);
}