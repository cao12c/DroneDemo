#include "DroneState.h"

int main()
{
    DroneState drone;
    for (i = 0; i < 10; i++)
    {
        drone.setPosition(0.0, 0.0, 0.0);
        drone.setAttitude(0.1 * i, 0.2 * i, 0.3 * i);
        drone.setVelocity(1.0, 0.5, 0.2);
        
    }
}