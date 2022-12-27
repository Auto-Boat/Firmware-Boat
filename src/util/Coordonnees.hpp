#ifndef DEF_COORDONNEES
#define DEF_COORDONNEES

class Coordonnees
{
private:
  double latitude;
  double longitude;

public:
  Coordonnees(double _latitude, double _longitude);
  double getLatitude() const;
  double getLongitude() const;
};

#endif