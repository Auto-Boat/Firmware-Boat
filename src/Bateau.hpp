#ifndef DEF_BATEAU
#define DEF_BATEAU

#include "composants/GPS.hpp"
class Bateau
{
private:
  double latitude;
  double longitude;

public:
  Bateau(double _latitude, double _longitude);
  double getLatitude() const;
  double getLongitude() const;
  void updateCoordonnees(GPS GPS);
};

#endif