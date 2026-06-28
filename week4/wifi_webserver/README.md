# Wi-Fi Temperature Monitor (ESP32)

## Objective

Create a web server on an ESP32 that displays DHT11 sensor readings and allows LED control from a web page.

## Components

- ESP32
- DHT11 Sensor
- LED

## Features

- Displays Temperature and Humidity
- Auto refresh every 10 seconds
- Shows device uptime
- Toggle onboard LED using a web button

## Wi-Fi Setup

Replace the following values in the code:

```cpp
const char* ssid = "YOUR_WIFI_NAME";
const char* password = "YOUR_WIFI_PASSWORD";
```

## Output

After connecting to Wi-Fi, open the IP address shown in the Serial Monitor in a web browser.

Example:

http://192.168.1.25
