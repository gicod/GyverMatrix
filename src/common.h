#pragma once
#include <ds_console.h>
#include "config.h"

Console *console;

void common_routine_init() {
    console = new Console(CIRCUIT_NAME);
    Serial.begin(115200);
}