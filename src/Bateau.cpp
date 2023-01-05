#include "Bateau.hpp"

Bateau::Bateau(double _latitude, double _longitude) : latitude(_latitude), longitude(_longitude)
{
}
double Bateau::getLatitude() const
{
  return latitude;
}
double Bateau::getLongitude() const
{
  return longitude;
}
// Met à jour la latitude et la longitude du bateau si cela n'a pas été fait depuis un certain temps
void Bateau::updateCoordonnees(GPS GPS)
{
  // TODO
}
