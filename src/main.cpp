#include <Arduino.h>
#include <Wire.h>
#include <SPI.h>
#include "capteurs/SuperCapteur.hpp"
#include "navigation/Gouvernail.hpp"
#include "navigation/Aileron.hpp"
#include "navigation/Bateau.hpp"
#include "capteurs/PH_Metre.hpp"
#include "raspberry/Ligne_CSV.hpp"

#define delaiRafraichissementAffichage 1500

SuperCapteur *superCapteur;
Gouvernail gouvernail;
Bateau bateau;
Aileron aileron;
PH_Metre pH_metre;
Ligne_CSV ligne_csv;

void setup()
{
  Serial.begin(9600);

  while (!Serial)
    ;
  Serial.println("Debut du programme");
  Serial.println("===========================");
  Serial.println();

  superCapteur = new (SuperCapteur);

  gouvernail.positionner(20);

  aileron.mettreEnPosition(aileron.GAUCHE);

  bateau.setDestination(1, 5);
  bateau.setMode(bateau.VOYAGE);
}

void loop()
{
  // superCapteur->printTemperature();
  // superCapteur->printHumidite();
  // superCapteur->printPression();
  // superCapteur->printAltitude();
  // pH_metre.printPH();

  // ligne_csv.ajouter(superCapteur->getTemperature());
  // ligne_csv.ajouter(superCapteur->getHumidite());
  // ligne_csv.ajouter(superCapteur->getPression());
  // ligne_csv.ajouter(superCapteur->getAltitude());
  // ligne_csv.ajouter(pH_metre.getPH());
  // ligne_csv.envoyer();

    delay(delaiRafraichissementAffichage);
  Serial.println();
}