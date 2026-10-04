#include "keep.h"
#include <fstream>
#include <iostream>

void saveState(const DroneState& state, const char* filename)
{
    std::ofstream file(filename);
    if (file.is_open())
    {
        // 这里我不知道怎么保存到csv，而且我也不知道怎么访问私有成员，请你帮助我
        file.close();
    }
    else
    {
        std::cerr << "Failed to open file: " << filename << std::endl;
    }
}