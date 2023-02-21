#ifndef DEF_SUPER_CAPTEUR
#define DEF_SUPER_CAPTEUR

#define adresseI2CduBME280 0x76
#define pressionAuNiveauDeLaMerEnHpa 1024.90
#include <Adafruit_BME280.h>

class SuperCapteur
{
public:
  Adafruit_BME280 bme;

  SuperCapteur();

  double getTemperature();
  void printTemperature();

  double getHumidite();
  void printHumidite();

  double getPression();
  void printPression();

  double getAltitude();
  void printAltitude();
};

#endif