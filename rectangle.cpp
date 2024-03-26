/*****************************************************************
Auteurs : DARGERE Lucas et LAVAUX Bastien
Date : 18 mars 2024
But : fichier source de la classe rectangle

*****************************************************************/
#include "rectangle.h"
#include <iostream>

Rectangle::Rectangle() : longueur(1), hauteur(1)
{
    this->setType("rectangle");
}

Rectangle::Rectangle(float l, float h) : longueur(l), hauteur(h) 
{
    this->setType("rectangle");
}

Rectangle::Rectangle(float l, float h, Point _centre) : Forme(_centre), longueur(l), hauteur(h)
{
    this->setType("rectangle");
}

Rectangle::Rectangle(float l, float h, Point _centre,string type) : Forme(_centre), longueur(l), hauteur(h)
{
    this->setType(type);
}

float Rectangle::perimetre(){
    return (2*(longueur+hauteur));
}

float Rectangle::surface(){
    return (longueur*hauteur);
}


float Rectangle::getLongueur() const{
    return this->longueur;
}

float Rectangle::getHauteur() const{
    return this->hauteur;
}


ostream& operator<<(ostream& s, Rectangle const& rectangle)
{
  s << "------ forme ------- \n";
  s << "Rectangle de longeur : " << rectangle.getLongueur()<< " , de hauteur : " << rectangle.getHauteur() << "\nEt de centre (" << rectangle.getPoint().getX() << "," << rectangle.getPoint().getY() <<")\n";
    return s;
}