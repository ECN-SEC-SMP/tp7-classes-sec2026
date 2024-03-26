/*****************************************************************
Auteurs : DARGERE Lucas et LAVAUX Bastien
Date : 18 mars 2024
But : fichier entete de la classe carre

*****************************************************************/

#pragma once

#include "rectangle.h"
#include "forme.h"
#include "point.h"
#include <iostream>

using namespace std;

class Carre : public Rectangle
{

public:
  Carre();
  Carre(float c);
  Carre(float c, Point _centre);

};

std::ostream& operator<<(std::ostream& s, Carre const& carre);