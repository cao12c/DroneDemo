#include "DroneState.h"
#include "Product.h"

void StateChange()
{
    DroneState drone;
    drone.setPosition(0.0, 0.0, 0.0);
    for (int i = 0; i < 3; i++)
    {
        drone.setAttitude(0.1 * i, 0.2 * i, 0.3 * i);
        drone.setVelocity(1.0, 0.5, 0.2);
        drone.update(0.3);
        drone.print();
    }
}