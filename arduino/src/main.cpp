#include <Arduino.h>

void setup()
{
    Serial.begin(115200); // Start serial communication with 115200 baud
    // Wait for the serial monitor to open
    while (!Serial)
        ;
    Serial.println("Setup done"); // Print a message to the serial console
}

void loop()
{
    if (Serial.available())
    {                                               // Check whether data is available
        String data = Serial.readStringUntil('\n'); // Read data up to the line break
        Serial.println("Echo: " + data);            // Send back the received data
    }
}
