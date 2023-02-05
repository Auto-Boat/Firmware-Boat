#include <Arduino.h>
#include "Gouvernail.hpp"

//
Gouvernail::Gouvernail()
{
  // TODO
  positionner(0);
  Serial.println("Le gouvernail a ete initialise");
}

void Gouvernail::positionner(double angle)
{
  // TODO
  // Utiliser les fonctions arduino pour changer l'angle du servomoteur
  Serial.print("Gouvernail positionne a un angle de ");
  Serial.print(angle);
  Serial.println(" degres");
}
