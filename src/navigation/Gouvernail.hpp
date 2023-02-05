#ifndef DEF_GOUVERNAIL
#define DEF_GOUVERNAIL

#define ANGLE_MAX_GOUVERNAIL

class Gouvernail
{

public:
  // double angle; // de +ANGLE_MAX_GOUVERNAIL à -ANGLE_MAX_GOUVERNAIL

  Gouvernail(); // constructeur

  // positionne le gouvernail selon un angle
  void positionner(double angle);
  double getAngle();
  void printAngle();
};

#endif