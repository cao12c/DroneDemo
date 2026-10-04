#include "keep.h"
#include "DroneState.h"
#include <fstream>
#include <iostream>

void saveState(const DroneState& state, const char* filename)
{
    std::ofstream file(filename,std::ios::app);
    if (file.is_open())
    {
        double x, y, z;
        double vx, vy, vz;
        double roll, pitch, yaw;
        double timestamp;
        state.getPostion(x, y, z);
        state.getVelocity(vx, vy, vz);
        state.getAttitude(roll, pitch, yaw);
        state.getTimestamp(timestamp);

        file << x << "," << y << "," << z << "," << vx << "," << vy << "," << vz << "," << roll << "," << pitch << "," << yaw << "," << timestamp << std::endl;
        file.close();
    }
    else
    {
        std::cerr << "Failed to open file: " << filename << std::endl;
    }
}