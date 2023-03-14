#include "SuperCapteur.hpp"

SuperCapteur::SuperCapteur()
{
  Serial.println("Initialisation super capteur");

  if (!bme.begin(adresseI2CduBME280))
  {
    Serial.println(F("--> ECHEC…"));
  }
  else
  {
    Serial.println(F("--> REUSSI !"));
  }
  Serial.println();
  bme.begin(adresseI2CduBME280);
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
