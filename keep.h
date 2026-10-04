#pragma once
#include "DroneState.h"

void initSave(const char* filename);
void saveState(const DroneState& state, const char* filename);
