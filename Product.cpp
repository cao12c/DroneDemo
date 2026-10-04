#include "DroneState.h"
#include "Product.h"
#include <time.h>
#include <ctime>

bool StateChange(DroneState& state)
{
    static int frameCount = 0;
    frameCount++;

    if (frameCount >= 6 && frameCount <= 10)
    {
        return false;
    }
    state.setAttitude(0.1, 0.2, 0.3);
    state.setPosition(1.0, 2.0, 3.0);
    state.setVelocity(0.5, 0.5, 0.5);
    state.update(0.1);
    return true;
}