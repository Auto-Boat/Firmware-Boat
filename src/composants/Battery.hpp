#ifndef DEF_BATTERY
#define DEF_BATTERY

class Battery
{
private:
  int pin;

public:
  Battery(int _pin);
  double getPourcentsRestant() const;
};

#endif