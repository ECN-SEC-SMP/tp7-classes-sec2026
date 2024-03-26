
/*****************************************************************
Auteurs : DARGERE Lucas et LAVAUX Bastien
Date : 18 mars 2024
But : classe point

*****************************************************************/
#include "point.h"
#include <iostream>

using namespace std;

Point::Point() {
  X = 0;
  Y = 0;
} // Default contructor set point at (0,0)
Point::Point(float x, float y) {
  this->X = x;
  this->Y = y;
} // Constructor set point at (x,y)
Point::Point(const Point &pointRecopier) {
  this->X = pointRecopier.getX();
  this->Y = pointRecopier.getY();
} // consctructor copy following the change of the pointRecopier

void Point::translater(
    float tx,
    float ty) { // tranlsate the point by additionning (tx,ty) with the (X,Y)
  this->X += tx;
  this->Y += ty;
}
void Point::translater(
    Point point) { // tanslation d'un point 1 au coordonée point 2
  X += point.getX();
  Y += point.getY();
}

void Point::setPoint(float x, float y) {
  this->X = x;
  this->Y = y;
}

ostream &Point::affiche(ostream &s) const {
  s << "------ point -------" << endl;
  s << "x :" << X << "\ny :" << Y << endl;

  return s;
}

float Point::getX() const { return this->X; }
float Point::getY() const { return this->Y; }

ostream &operator<<(ostream &s, Point const &point) {
  point.affiche(s);
  return s;
}

void Point::operator+=(Point const &p1) {
  X += p1.getX();
  Y += p1.getY();
}