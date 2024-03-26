/*****************************************************************
Auteurs : DARGERE Lucas et LAVAUX Bastien
Date : 18 mars 2024
But : fichier source de la classe cercle 

*****************************************************************/
#include "forme.h"
#include "point.h"
#include "cercle.h"
#include <iostream>
using namespace std;

Cercle::Cercle() {
  rayon = 0;
  this->setType("cercle"); 
}

Cercle::Cercle(float _rayon) {
    rayon = _rayon;
    this->setType("cercle");
}

Cercle::Cercle(float _rayon, Point _centre) : Forme(_centre){
    rayon = _rayon;
    this->setType("cercle");
}

float Cercle::perimetre()
{
    return (this->rayon * 2 * PI);
}

float Cercle::surface()
{
    return (this->rayon * rayon * PI);
}

float Cercle::getRayon() const
{
    return this->rayon;
}

ostream& operator<<(ostream& s, Cercle const& cercle)
{
  s << "------ forme ------- \nCercle de rayon : " << cercle.getRayon() << "\nEt de centre (" << cercle.getPoint().getX() << "," << cercle.getPoint().getY() <<")\n";
  return s;
}