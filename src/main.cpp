#include <Arduino.h>

const int speakerPin = 1; // Change this to the PWM-capable pin you've connected the speaker to
const int pirPin = A1; // Define the pin connected to the PIR sensor
const unsigned int frequency = 20000; // 20 kHz

void setup()
{
    pinMode(speakerPin, OUTPUT);
    pinMode(pirPin, INPUT);
}

void loop()
{
    int pirState = digitalRead(pirPin); // Read the state of the PIR sensor

    if (pirState == HIGH) // If motion is detected
    {
        tone(speakerPin, frequency); // Generate 20 kHz tone on the specified pin
        delay(10000); // Keep the tone on for 10 seconds
        noTone(speakerPin); // Turn off the tone
    }
    
    delay(500); // Small delay to avoid multiple triggers
}
    
