/*****************************************************************
Auteurs : DARGERE Lucas et LAVAUX Bastien
Date : 18 mars 2024
But : fichier entete de la classe rectangle

*****************************************************************/
#pragma once

#include "point.h"
#include "forme.h"
#include <iostream>

using namespace std;

class Rectangle : public Forme
{
private:

  float longueur;
  float hauteur;

public:

  Rectangle();
  Rectangle(float l, float h);
  Rectangle(float l, float h, Point _centre);
  Rectangle(float l, float h, Point _centre ,string type);

  float perimetre();
  float surface();

  float getLongueur() const;
  float getHauteur() const;

};

std::ostream& operator<<(std::ostream& s, Rectangle const& rectangle);