#include <Arduino.h>
#include "Moteur.hpp"

using namespace std;

void setup()
{
  Moteur moteur1(13);
  Serial.println(moteur1.getPin());
}

void loop()
{
}