/*****************************************************************
Auteurs : DARGERE Lucas et LAVAUX Bastien
Date : 18 mars 2024
But : fichier source de la classe carre

*****************************************************************/
#include "forme.h"
#include "point.h"
#include "rectangle.h"
#include "carre.h"
#include <iostream>

using namespace std;

Carre::Carre() : Rectangle (1, 1, Point(),"carré") {}

Carre::Carre(float c) : Rectangle(c, c, Point(),"carré") {}

Carre::Carre(float c, Point _centre) : Rectangle(c, c, _centre,"carré") {}


ostream& operator<<(ostream& s, Carre const& carre)
{
  s << "------ Carre ------- \n";
  s << "Carre de côté : " << carre.getLongueur() << "\nEt de centre (" << carre.getPoint().getX() << "," << carre.getPoint().getY() <<")"<< endl;
  return s;
}