#include "Bateau.hpp"
#include "util/Coordonnees.hpp"

Bateau::Bateau()
{
  coordonnes = new Coordonnees(0, 0);
}
double Bateau::getLatitude() const
{
  return coordonnes->getLatitude();
}
double Bateau::getLongitude() const
{
  return coordonnes->getLongitude();
}