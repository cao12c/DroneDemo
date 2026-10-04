#include "DroneState.h"
#include "Product.h"
#include "keep.h"
#include <iostream>

int main()
{
    DroneState droneState;
    initSave("drone_state.csv");
    int noDataCount = 0;
    for (int i = 0; i < 20; ++i)
    {
        bool received = StateChange(droneState);
        if (received)
        {
            noDataCount = 0;
            saveState(droneState, "drone_state.csv");
            droneState.print();
        }
        
        else
        {
            noDataCount++;
        }
        if (noDataCount >= 3)
        {
            std::cout << "Warning: communication timeout\n";
        }
    }
}
