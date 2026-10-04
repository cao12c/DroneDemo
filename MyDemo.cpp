#include "DroneState.h"
#include "Product.h"
#include "keep.h"
#include "CommunicationMonitor.h"
#include <iostream>

int main()
{
    DroneState droneState;
    initSave("drone_state.csv");
    CommunicationMonitor commMonitor(3); // 设置丢帧阈值为3
    for (int i = 0; i < 20; ++i)
    {

        bool received = StateChange(droneState); // 模拟接收数据
        commMonitor.update(received);
        if (received)
        {
            saveState(droneState, "drone_state.csv");
            droneState.print();
        }
        if (commMonitor.isTimeout())
        {
            std::cout << "Warning: communication timeout\n";
        }
    }
}
