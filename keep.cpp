#include "keep.h"
#include "DroneState.h"
#include <fstream>
#include <iostream>

void initSave(const char* filename)
{
    std::ofstream file(filename);
    if (file.is_open())
    {
        file << "timestamp,x,y,z,vx,vy,vz,roll,pitch,yaw" << std::endl;
        file.close();
    }
    else
    {
        std::cerr << "Failed to open file: " << filename << std::endl;
    }
}
void saveState(const DroneState& state, const char* filename)
{
    std::ofstream file(filename, std::ios::app);
    if (file.is_open())
    {
        double x, y, z;
        double vx, vy, vz;
        double roll, pitch, yaw;
        double timestamp;
        state.getPosition(x, y, z);
        state.getVelocity(vx, vy, vz);
        state.getAttitude(roll, pitch, yaw);
        state.getTimestamp(timestamp);

        file << timestamp << "," << x << "," << y << "," << z << "," << vx << "," << vy << "," << vz << "," << roll << "," << pitch << "," << yaw << std::endl;
        file.close();
    }
    else
    {
        std::cerr << "Failed to open file: " << filename << std::endl;
    }
}

