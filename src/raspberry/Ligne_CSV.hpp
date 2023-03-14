#ifndef DEF_CSV
#define DEF_CSV

#include <Arduino.h>

class Ligne_CSV
{
public:
  String ligne;
  Ligne_CSV();
  void reinitialiser();
  void ajouter(double donnee);
  void envoyer();
};

#endif