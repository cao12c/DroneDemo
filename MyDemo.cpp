#include "DroneState.h"
#include "Product.h"
#include "keep.h"

int main()
{
    DroneState droneState;
    initSave("drone_state.csv");
    for (int i = 0; i < 5; ++i)
    {
        StateChange(droneState);
        saveState(droneState, "drone_state.csv");
        droneState.print();
    }
}
