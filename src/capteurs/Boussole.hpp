#ifndef DEF_BOUSSOLE
#define DEF_BOUSSOLE

class Boussole
{
public:
  Boussole();
  // Renvoie l'angle entre la direction du bateau et le Nord (dans le sens direct trigonométrique, de -180° à +180°)
  double getAngleBateau_Nord();
  void printAngleBateau_Nord();
};

#endif