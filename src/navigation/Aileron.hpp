#ifndef DEF_AILERON
#define DEF_AILERON

class Aileron
{
public:
  const int GAUCHE = 0;
  const int NEUTRE = 1;
  const int DROITE = 2;

  const double angleExtreme = 30; // DROITE ou GAUCHE = + ou - angle extreme

  Aileron();

  // positionne l'aileron selon un certain angle
  void _positionner(double angle);

  // positionne l'aileron selon un position précise (GAUCHE, NEUTRE ou DROITE)
  void mettreEnPosition(int position);
};

#endif