#pragma once
#include "DroneState.h"

void initSave(std::string filename);
void saveState(const DroneState& state, const char* filename);
