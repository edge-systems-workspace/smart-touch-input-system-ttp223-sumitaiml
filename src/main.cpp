#include <Arduino.h>
/**
 * @file main.cpp
 * @brief Embedded Touch Detection System using TTP223
 * @author Sumit Kumar Singh
 * @date 2026-02-22
 *
 * @details
 * Reads digital touch input from TTP223 sensor
 * and displays structured output via Serial Monitor.
 */

// Touch sensor pin
constexpr uint8_t TOUCH_PIN = 2;

// Current touch state (HIGH = touched, LOW = not touched)
int touchState = LOW;

void setup() {
    Serial.begin(9600);
    pinMode(TOUCH_PIN, INPUT);
    Serial.println("Touch Detection System initialized.");
}

void loop() {
    touchState = digitalRead(TOUCH_PIN);

    if (touchState == HIGH) {
        Serial.println("Touch Detected");
    } else {
        Serial.println("No Touch");
    }

    delay(250);
}
