

/*****************************************************************
Auteurs : DARGERE Lucas et LAVAUX Bastien
Date : 18 mars 2024
But : classe forme

*****************************************************************/
#include "forme.h"
#include "point.h"
#include <iostream>
using namespace std;

Forme::Forme() {
  this->centre = Point(); 
}
Forme::Forme(Point p) { this->centre = p; }

Point Forme::getPoint() const
{
    return this->centre;
}

string Forme::getType() const 
{
    return this->type;
}

void Forme::setType(std::string const& type) 
{
    this->type = type;
}

ostream &operator<<(ostream &s, Forme const &forme) {
  s << "------ forme -------" << endl;
  s << "centre : \nX :\t" << forme.getPoint().getX() << "\nY :\t" << forme.getPoint().getY() << endl;
  return s;
}

void Forme::operator+=(Point const &point) { this->centre += point; }
