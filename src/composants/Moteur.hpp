#ifndef DEF_MOTEUR
#define DEF_MOTEUR

class Moteur
{
private:
  int pin;
  // double position;

public:
  Moteur(int _pin);
  int getPin() const;
  double getPosition() const;
  void setPosition(double _position);
};

#endif