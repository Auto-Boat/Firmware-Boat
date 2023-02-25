#include "SuperCapteur.hpp"

SuperCapteur::SuperCapteur()
{
  Serial.print(F("Initialisation du BME280, à l'adresse [0x"));
  Serial.print(adresseI2CduBME280, HEX);
  Serial.println(F("]"));

  if (!bme.begin(adresseI2CduBME280))
  {
    Serial.println(F("--> ÉCHEC…"));
  }
  else
  {
    Serial.println(F("--> RÉUSSIE !"));
  }
  Serial.println();
}

double SuperCapteur::getTemperature()
{
  return bme.readTemperature();
}

void SuperCapteur::printTemperature()
{
  Serial.print(F("Température = "));
  Serial.print(getTemperature());
  Serial.println(F(" °C"));
}

double SuperCapteur::getHumidite()
{
  return bme.readHumidity();
}

void SuperCapteur::printHumidite()
{
  Serial.print(F("Humidité = "));
  Serial.print(getHumidite());
  Serial.println(F(" %"));
}

double SuperCapteur::getPression()
{
  return bme.readPressure();
}

void SuperCapteur::printPression()
{
  Serial.print(F("Pression atmosphérique = "));
  Serial.print(getPression() / 100.0F);
  Serial.println(F(" hPa"));
}

double SuperCapteur::getAltitude()
{
  return bme.readAltitude(pressionAuNiveauDeLaMerEnHpa);
}

void SuperCapteur::printAltitude()
{
  Serial.print(F("Altitude estimée = "));
  Serial.print(getAltitude());
  Serial.println(F(" m"));
}
