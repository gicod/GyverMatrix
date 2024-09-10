#include "gyverMatrix.h"

void setup()
{
  common_routine_init();

  matrix_init();

  *console << CIRCUIT_NAME << F(": init done") << endl;
}

void loop()
{
  matrix_routine();
}
