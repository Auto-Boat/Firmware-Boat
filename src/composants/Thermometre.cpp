#include "Thermometre.hpp"
#include <Arduino.h>

using namespace std;

Thermometre::Thermometre(int _pin) : pin(_pin)
{
}

int Thermometre::getPin() const
{
  return pin;
}

double Thermometre::getTemperature() const
{
  // TODO
  return 0;
}

double Thermometre::getHumidite() const
{
  // TODO
  return 0;
}

double Thermometre::getPression() const
{
  // TODO
  return 0;
}