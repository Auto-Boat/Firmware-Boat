#include <Arduino.h>
#include "capteurs/SuperCapteur.hpp"

#define delaiRafraichissementAffichage 1500

SuperCapteur superCapteur;

void setup()
{
  Serial.begin(9600);

  while (!Serial)
    ;
  Serial.println("Début du programme");
  Serial.println("===========================");
  Serial.println();
}

void loop()
{
  superCapteur.printTemperature();
  superCapteur.printHumidite();
  superCapteur.printPression();
  superCapteur.printAltitude();

  delay(delaiRafraichissementAffichage);
  Serial.println();
}