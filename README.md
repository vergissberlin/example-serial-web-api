# Experiment - Web Serial API

> **Important note**
> This is a experiment to play around with the Web Serial API. It is not intended to be used in production.

The Web Serial API enables websites to conduct serial communication with devices via a USB port. To use the Web Serial API with an ESP32 microcontroller, you must perform a few steps on the ESP32 page and in the web browser. 

Here is a brief guide to setting it up:

## Step 1: Preparing the ESP32

Firstly, you need to programme your ESP32 so that it can send and receive data via its serial interface. To do this, use a development environment such as the Arduino IDE or ESP-IDF.

1. install the Arduino IDE or the corresponding development tool for the ESP32.
2. install the necessary board manager packages for the ESP32.
3. write a programme (sketch) that enables serial communication, for example:
    

```cpp
    void setup() {
        Serial.begin(115200); // Beginne serielle Kommunikation mit 115200 Baud
    }

    void loop() {
    if (Serial.available()) { // Prüfe, ob Daten verfügbar sind
        String data = Serial.readStringUntil('\n'); // Lese Daten bis zum Zeilenumbruch
        Serial.println("Echo: " + data); // Sende die empfangenen Daten zurück
        }
    }
    ```

4. upload the sketch to your ESP32.

### Step 2: Using the Web Serial API in the browser

Create a web page that uses the Web Serial API to communicate with the ESP32.

### Notes on use

* To gain access to serial devices, the user must explicitly allow is usually done via a dialogue in the browser.
* The website must be delivered via HTTPS, unless it is hosted on `localhost`.
* Not all browsers support the Web Serial API; Chrome and Edge currently offer support.

## Getting started

1. Clone the repository
2. Start a live server with the index.html file
3. Open the serial port in the browser
4. Enjoy!

## License

[MIT](LICENSE)

## Author

[André Lademann](https://github.com/vergissberlin)
