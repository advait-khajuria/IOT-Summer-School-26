# MQTT Sensor Publisher

## Objective

Publish DHT11 temperature and humidity data to a public MQTT broker every 5 seconds using ESP32.

## Components

- ESP32
- DHT11
- Wi-Fi Network

## MQTT Broker

broker.hivemq.com

## Topics

Temperature

iitjammu/summer26/advait/temperature

Humidity

iitjammu/summer26/advait/humidity

LED Control

iitjammu/summer26/advait/led_control

## JSON Format

```json
{
  "value": 28.5,
  "unit": "C",
  "ts": 123456789
}
```

## Features

- Publishes temperature every 5 seconds
- Publishes humidity every 5 seconds
- Receives ON/OFF commands to control onboard LED
- Compatible with MQTT Explorer and MQTT.fx
