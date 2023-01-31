#include <Arduino.h>
#include "Seeed_BMP280.h"
#include <Wire.h>

BMP280 bmp280;

void setup()
{
  Serial.begin(9600);
  Serial.println("Début du programme");
  float pressure;

  // get and print temperatures
  Serial.print("Temp: ");
  Serial.print(bmp280.getTemperature());
  Serial.println("C"); // The unit for  Celsius because original arduino don't support speical symbols

  // get and print atmospheric pressure data
  Serial.print("Pressure: ");
  Serial.print(pressure = bmp280.getPressure());
  Serial.println("Pa");

  // get and print altitude data
  Serial.print("Altitude: ");
  Serial.print(bmp280.calcAltitude(pressure));
  Serial.println("m");

  Serial.println("\n"); // add a line between output of different times.
}

void loop()
{
}