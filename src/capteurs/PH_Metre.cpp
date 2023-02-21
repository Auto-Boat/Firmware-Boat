#include <Arduino.h>
#include "PH_Metre.hpp"

PH_Metre::PH_Metre()
{
  pinMode(pH_Value, INPUT);
}

double PH_Metre::getPH()
{
  pH_Value = analogRead(A7);
  Voltage = pH_Value * (5.0 / 1023.0);
  return (Voltage + 1.3) * (12.0 / 5);
}

void PH_Metre::printPH()
{
  Serial.print("pH : ");
  Serial.println(getPH());
}
