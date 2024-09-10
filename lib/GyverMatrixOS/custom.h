#include "timerMinim.h"
#include "effects.h"

// boolean loadingFlag = true;
constexpr auto D_EFFECT_SPEED = 80;     // скорость эффектов по умолчанию (мс)
timerMinim effectTimer(D_EFFECT_SPEED);

void customModes() {
  matrixRoutine();
}

// ********************* ОСНОВНОЙ ЦИКЛ РЕЖИМОВ *******************

void customRoutine() {
  if (effectTimer.isReady()) {
    customModes();                // режимы крутятся, пиксели мутятся
    FastLED.show();
  }
}