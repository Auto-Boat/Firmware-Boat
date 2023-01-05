#include "GPS.hpp"

GPS::GPS(int _pin) : pin(_pin)
{
}
int GPS::getPin() const
{
  return pin;
}
double *GPS::getCoordonnes() const
{
  // TODO
  double coords[2];
  coords[0] = 0;
  coords[1] = 0;
  return coords;
}