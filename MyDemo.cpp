#include "DroneState.h"
#include "Product.h"

int main()
{
    DroneState droneState;
    for (int i = 0; i < 5; ++i)
    {
        StateChange(droneState);
        droneState.print();
    }
}
