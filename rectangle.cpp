#include "rectangle.h"
#include <iostream>

rectangle::rectangle() : longueur(1), hauteur(1) {}

rectangle::rectangle(float l, float h) : longueur(l), hauteur(h) {}

float rectangle::perimetre(){
    return (2*(longueur+hauteur));
}

float rectangle::surface(){
    return (longueur*hauteur);
}

float rectangle::getLongueur() const{
    return this->longueur;
}

float rectangle::getHauteur() const{
    return this->hauteur;
}

ostream& operator<<(ostream& s, rectangle const& r1)
{
    s << "Rectangle de longeur " << r1.getLongueur()<< " , de hauteur " << r1.getHauteur() << " et de centre (" << r1.getPoint().getX() << "," << r1.getPoint().getY() <<")"<< endl;
    return s;
}