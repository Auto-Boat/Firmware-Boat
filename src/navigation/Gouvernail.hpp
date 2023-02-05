#ifndef DEF_GOUVERNAIL
#define DEF_GOUVERNAIL

class Gouvernail
{

public:
  int pin = 0;

  Gouvernail(); // constructeur

  // positionne le gouvernail selon un angle
  void positionner(double angle);
};

#endif