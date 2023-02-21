#ifndef DEF_BATEAU
#define DEF_BATEAU

class Bateau
{
public:
  double latitude = 0;
  double longitude = 0;

  double destination_latitude = 0; // destination finale
  double destination_longitude = 0;

  const int IDLE = 0;   // l'aileron et le gouvernail restent en position neutre
  const int VOYAGE = 1; // se positionne pour aller vers sa destination
  int mode = IDLE;      // IDLE ou VOYAGE

  const int LIBRE = 0;  // Est libre de changer de direction si nécessaire
  const int OCCUPE = 1; // En train de faire une manoeuvre, donc ne pas donner d'ordre contradictoire
  int etat = LIBRE;     // LIBRE ou OCCUPE (en manoeuvre)

  Bateau();

  void setDestination(double latitude, double longitude);

  void setMode(int mode);
};

#endif