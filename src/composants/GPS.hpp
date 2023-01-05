#ifndef DEF_GPS
#define DEF_GPS

class GPS
{
private:
  int pin;

public:
  GPS(int _pin);
  int getPin() const;
  // renvoie un tableau avec la latitude et la longitude
  double *getCoordonnes() const;
};

#endif