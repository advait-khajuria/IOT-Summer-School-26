# ESP32 BLE Sensor Dashboard

## Objective

Broadcast DHT11 temperature and humidity readings over Bluetooth Low Energy (BLE) every 3 seconds.

## Components

- ESP32
- DHT11 Temperature & Humidity Sensor

## Features

- BLE advertising
- Sends temperature and humidity every 3 seconds
- Includes timestamp using millis()
- Compatible with nRF Connect or LightBlue mobile apps

## BLE UUIDs

Service UUID:
12345678-1234-1234-1234-1234567890AB

Characteristic UUID:
ABCD1234-5678-90AB-CDEF-1234567890AB

## BLE Scanner Apps

- nRF Connect
- LightBlue
