#include "Ligne_CSV.hpp"

void Ligne_CSV::ajouter(double donnee)
{
  ligne.concat(';');
  ligne.concat(donnee);
}

void Ligne_CSV::reinitialiser()
{
  ligne = "";
}

Ligne_CSV::Ligne_CSV()
{
  reinitialiser();
}

void Ligne_CSV::envoyer()
{
  Serial.println(ligne);
  reinitialiser();
}
