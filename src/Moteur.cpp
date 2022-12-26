#include "Moteur.hpp"
#include <Arduino.h>

using namespace std;

Moteur::Moteur(int _pin) : pin(_pin)
{
}

int Moteur::getPin() const
{
  return pin;
}

double Moteur::getPosition() const
{
  return position;
}

void Moteur::setPosition(double _position)
{
  position = _position;
}