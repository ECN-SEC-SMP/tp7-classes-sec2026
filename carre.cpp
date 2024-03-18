#include "carre.h"
#include <iostream>

/*
Construteurs
*/

carre::carre() : rectangle () {}

carre::carre(float c) : rectangle(c,c) {}

ostream& operator<<(ostream& s, carre const& c1)
{
    s << "Carre de côté " << c1.getLongueur() << " et de centre (" << c1.getPoint().getX() << "," << c1.getPoint().getY() <<")"<< endl;
    return s;
}

