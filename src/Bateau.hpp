#ifndef DEF_BATEAU
#define DEF_BATEAU

#include "util/Coordonnees.hpp"

class Bateau
{
private:
  Coordonnees *coordonnes;

public:
  Bateau();
  double getLatitude() const;
  double getLongitude() const;
};

#endif