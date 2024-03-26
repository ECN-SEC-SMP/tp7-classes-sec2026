/*****************************************************************
Auteurs : DARGERE Lucas et LAVAUX Bastien
Date : 18 mars 2024
But : fichier entete de la classe cercle

*****************************************************************/
#pragma once

#include "point.h"
#include "forme.h"
#include <iostream>

using namespace std;

class Cercle : public Forme
{
private:

  const float PI = 3.14159265358979323846;
  float rayon;

public:

  Cercle();
  Cercle(float _rayon);
  Cercle(float _rayon, Point _centre);


  float perimetre();
  float surface();

  float getRayon() const;
};

ostream& operator<<(ostream& s, Cercle const& cercle);