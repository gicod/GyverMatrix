CRGB leds[NUM_LEDS];

// #include "custom.h"
#include "timerMinim.h"
#include "effects.h"

constexpr auto D_EFFECT_SPEED = 80;     // скорость эффектов по умолчанию (мс)
timerMinim effectTimer(D_EFFECT_SPEED);

void customRoutine() {
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

void gyverMatrix_loop() {
  customRoutine();
}
