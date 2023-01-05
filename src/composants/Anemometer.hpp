#ifndef DEF_ANEMOMETER
#define DEF_ANEMOMETER

class Anemometer
{
private:
  int pin;

public:
  Anemometer(int _pin);
  double getVitesseVent() const;
};

#endif