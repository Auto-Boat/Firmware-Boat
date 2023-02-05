#ifndef DEF_PHMETRE
#define DEF_PHMETRE

class PH_Metre
{
public:
  int pH_Value;
  float Voltage;
  PH_Metre();
  double getPH();
  void printPH();
};

#endif