# Q29. Sensor Calibration

## What is Sensor Calibration?

Sensor calibration is the process of comparing a sensor's readings with known reference values and adjusting them to improve accuracy. Calibration helps reduce measurement errors and ensures that the sensor provides reliable and consistent data.

## Why is Calibration Important in IoT?

- Improves measurement accuracy.
- Reduces sensor errors.
- Ensures reliable data for automation and monitoring.
- Increases the performance and lifetime of IoT systems.
- Helps maintain consistency between different sensors.

## Two-Point Calibration Method

A soil moisture sensor can be calibrated using two known reference points:

1. **Dry Point (0% Moisture):**
   - Place the sensor in completely dry soil (or air).
   - Record the analog value.
   - This value represents 0% moisture.

2. **Wet Point (100% Moisture):**
   - Place the sensor in fully saturated soil (or water).
   - Record the analog value.
   - This value represents 100% moisture.

The sensor readings between these two points are converted into a moisture percentage using the `map()` function.

## Example Arduino Code

```cpp
const int soilPin = A0;

const int dryValue = 850;   // Reading in dry soil
const int wetValue = 350;   // Reading in wet soil

void setup() {
  Serial.begin(9600);
}

void loop() {

  int sensorValue = analogRead(soilPin);

  int moisture = map(sensorValue, dryValue, wetValue, 0, 100);

  moisture = constrain(moisture, 0, 100);

  Serial.print("Soil Moisture: ");
  Serial.print(moisture);
  Serial.println("%");

  delay(1000);
}
```

## Conclusion

The two-point calibration method improves the accuracy of soil moisture measurements by using known dry and wet reference values. This technique is widely used in smart irrigation, precision agriculture, and other IoT-based environmental monitoring systems.
