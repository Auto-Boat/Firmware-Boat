#ifndef DEF_THERMOMETRE
#define DEF_THERMOMETRE

class Thermometre
{
private:
  int pin;

public:
  Thermometre(int _pin);
  int getPin() const;
  double getTemperature() const;
  double getHumidite() const;
  double getPression() const;
};

#endif