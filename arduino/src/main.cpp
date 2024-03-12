#include <Arduino.h>

void setup()
{
    Serial.begin(115200);
}

void loop()
{
    if (Serial.available())
    {                                               // Check whether data is available
        String data = Serial.readStringUntil('\n'); // Read data up to the line break
        Serial.println("Echo: " + data);            // Send back the received data
    }
}
