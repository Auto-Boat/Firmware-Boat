#include "Aileron.hpp"
#include <Arduino.h>

Aileron::Aileron()
{
  // TODO
  mettreEnPosition(NEUTRE);
  Serial.println("Aileron initialise");
}

void Aileron::_positionner(double angle)
{
  // TODO
  Serial.print("Aileron position avec un angle de ");
  Serial.print(angle);
  Serial.println(" degres");
}

void Aileron::mettreEnPosition(int position)
{
  if (position == DROITE)
  {
    _positionner(angleExtreme);
  }
  else if (position == NEUTRE)
  {
    _positionner(0);
  }
  else if (position == GAUCHE)
  {
    _positionner(-angleExtreme);
  }
}
