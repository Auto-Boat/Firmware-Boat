#include "Boussole.hpp"
#include <Arduino.h>

Boussole::Boussole()
{
  // TODO
}

double Boussole::getAngleBateau_Nord()
{
  // TODO
  return 0.0;
}

void Boussole::printAngleBateau_Nord()
{
  Serial.print("Angle entre le bateau et le Nord : ");
  Serial.print(getAngleBateau_Nord());
  Serial.println("°");
}
