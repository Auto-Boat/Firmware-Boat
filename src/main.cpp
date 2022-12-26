#include <Arduino.h>
#include "composants/Moteur.hpp"
#include "composants/Thermometre.hpp"

using namespace std;

void setup()
{
  Moteur moteur1(13);
  Serial.println(moteur1.getPin());
}

void loop()
{
}