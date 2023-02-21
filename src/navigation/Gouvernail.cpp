#include <Arduino.h>
#include "Gouvernail.hpp"

//
Gouvernail::Gouvernail()
{
  // TODO
  positionner(0);
  // Serial.println("Le gouvernail a ete initialise");
}

void Gouvernail::positionner(double angle)
{
  // TODO
  // Utiliser les fonctions arduino pour changer l'angle du servomoteur
  // Serial.print("Gouvernail positionne a un angle de ");
  // Serial.print(angle);
  // Serial.println(" degres");
}

double Gouvernail::getAngle()
{
  return 0.0;
}

void Gouvernail::printAngle()
{
  // Serial.print("Angle du gouvernail par rapport à la pointe arrière du bateau : ");
  // Serial.print(getAngle());
  // Serial.println("°");
}
