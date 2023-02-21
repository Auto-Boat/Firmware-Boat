#include <Arduino.h>
// #include "capteurs/SuperCapteur.hpp"
#include "navigation/Gouvernail.hpp"
#include "navigation/Aileron.hpp"
#include "navigation/Bateau.hpp"
// #include "capteurs/PH_Metre.hpp"

#define delaiRafraichissementAffichage 1500

// SuperCapteur superCapteur;
Gouvernail gouvernail;
Bateau bateau;
Aileron aileron;
// PH_Metre pH_metre;

void setup()
{
  Serial.begin(9600);

  while (!Serial)
    ;
  Serial.println("Debut du programme");
  Serial.println("===========================");
  Serial.println();

  gouvernail.positionner(20);

  aileron.mettreEnPosition(aileron.GAUCHE);

  bateau.setDestination(1, 5);
  bateau.setMode(bateau.VOYAGE);
}

void loop()
{
  // superCapteur.printTemperature();
  // superCapteur.printHumidite();
  // superCapteur.printPression();
  // superCapteur.printAltitude();

  // pH_metre.printPH();

  delay(delaiRafraichissementAffichage);
  Serial.println("test");
}