#include "cercle.h"
#include <iostream>

#define PI 3.14159265359

/*
Constructeurs
*/
cercle::cercle() : rayon(0) 
{
    this->setType("cercle");
}

cercle::cercle(float _rayon) : rayon(_rayon) 
{
    this->setType("cercle");
}

float cercle::perimetre()
{
    return this->rayon * 2 * PI;
}

float cercle::surface()
{
    return this->rayon * rayon * PI;
}

/*
Accesseur
*/
float cercle::getRayon() const
{
    return this->rayon;
}

/*
Opérateur
*/
ostream& operator<<(ostream& s, cercle const& c1)
{
    s << "Cercle de rayon " << c1.getRayon() << " et de centre (" << c1.getPoint().getX() << "," << c1.getPoint().getY() <<")"<< endl;
    return s;
}