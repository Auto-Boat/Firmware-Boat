#ifndef DEF_CAPTEUR_DIRECTION_VENT
#define DEF_CAPTEUR_DIRECTION_VENT

class CapteurDirectionVent
{
public:
  CapteurDirectionVent();

  // Renvoie l'angle du vent par rapport au bateau entre -180°C et +180°C
  double getDirectionVent();
};

#endif