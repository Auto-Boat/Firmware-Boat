#ifndef DEF_PHMETER
#define DEF_PHMETER

class pHmeter
{
private:
  int pin;

public:
  pHmeter(int _pin);
  double getpH() const;
};

#endif