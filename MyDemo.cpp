#include "DroneState.h"
#include "Product.h"
#include "keep.h"

int main()
{
    DroneState droneState;
    initSave("drone_state.csv");
    static int frameCount = 0;
    static int Count = 0;
    for (int i = 0; i < 12; ++i)
    {
        bool answer = StateChange(droneState);
        if (answer == false)
        {
            frameCount++;
        }
        if (frameCount == 3)
        {
            std::cout << "warning" << std::endl;
        }
        saveState(droneState, "drone_state.csv");
        droneState.print();
        Count++;
    }
}
