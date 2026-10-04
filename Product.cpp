#include "DroneState.h"
#include "Product.h"

void StateChange(DroneState& state)
{
    state.setVelocity(1.0, 2.0, 3.0);
    state.setAttitude(0.1, 0.2, 0.3);
    for (int i = 0; i <5; ++i)
    {
        state.update(0.1);
        state.print();
    }
}