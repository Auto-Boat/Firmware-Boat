#include "Bateau.hpp"
#include <Arduino.h>

Bateau::Bateau()
{
  // TODO
  setDestination(0, 0);
  setMode(IDLE);
  // Serial.println("Bateau intialise");
}

void Bateau::setDestination(double latitude, double longitude)
{
  destination_latitude = latitude;
  destination_longitude = longitude;
  // Serial.print("Destination en ");
  // Serial.print(destination_latitude);
  // Serial.print("  ");
  // Serial.println(destination_longitude);
}

void Bateau::setMode(int mode)
{
  mode = mode;
  // Serial.print("Bateau mis en mode ");
  // Serial.println(mode);
}
