// JLed ESP IDF 'hello, world' (PlatformIO edition)
// (c) Copyright 2022 by Jan Delgado. All rights reserved.
// https://github.com/jandelgado/jled

#include <jled.h>

extern "C" void app_main(void);

void app_main(void)
{
    auto led = JLed(LED_PIN).FadeOn(1500).DelayAfter(200).Forever();

    while(1) {
        led.Update();
    }
}
