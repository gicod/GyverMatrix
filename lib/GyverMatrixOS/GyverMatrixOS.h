CRGB leds[NUM_LEDS];

#include "timerMinim.h"
#include "effects.h"

timerMinim effectTimer(D_EFFECT_SPEED);

void gyverMatrixEffect_routine() {
  if (effectTimer.isReady()) {
    matrixRoutine();
    FastLED.show();
  }
}

void gyverMatrix_init() {
  FastLED.addLeds<WS2812, LED_PIN, COLOR_ORDER>(leds, NUM_LEDS).setCorrection( TypicalLEDStrip );
  FastLED.setBrightness(BRIGHTNESS);
  FastLED.clear();
  FastLED.show();
  randomSeed(analogRead(0) + analogRead(1));
}