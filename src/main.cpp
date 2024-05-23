#include <Arduino.h>

const int speakerPin = 5; // Change this to the PWM-capable pin you've connected the speaker to
const unsigned int frequency = 20000; // 20 kHz

void setup()
{
    pinMode(speakerPin, OUTPUT);
    Serial.begin(115200);

}

void loop()
{
    analogWrite(speakerPin, 255); // Adjust this value to increase or decrease volume (0-255)
    tone(speakerPin, frequency);
    Serial.print("tone on");
    delay(20000);
}