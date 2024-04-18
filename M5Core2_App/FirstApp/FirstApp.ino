
#include <M5Core2.h>

bool led_state = 0;

void setup() {
    M5.begin();
    pinMode(2, OUTPUT);
}

void loop() {
    delay(1000);
    digitalWrite(2, 1);
    delay(1000);
    digitalWrite(2, 0);
}


