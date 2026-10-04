#include "DroneState.h"
#include "Product.h"
#include <time.h>
#include <ctime>

bool StateChange(DroneState& state)
{
    int i = 0;
    for (i = 0; i < 10; ++i)
    {
        if (i < 6)
        {
            state.setPosition(1.0, 2.0, 3.0);
            state.setVelocity(0.1, 0.2, 0.3);
            state.setAttitude(0.01, 0.02, 0.03);
            state.update(0.1);          
            timestamp.sleep(1); 
            return true;
        }
        else
        {
            return false;
        }

    }
    
}