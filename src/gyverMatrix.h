#pragma once
#include "common.h"
#include "..\lib\FastLED-3.2.9\FastLED.h"
#include "..\lib\GyverMatrixOS\GyverMatrixOS.h"

void matrix_init()
{
    gyverMatrix_init();
}

void matrix_routine()
{
    gyverMatrix_loop();
}