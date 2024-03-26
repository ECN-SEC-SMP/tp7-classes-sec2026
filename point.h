/*****************************************************************
Auteurs : DARGERE Lucas et LAVAUX Bastien
Date : 18 mars 2024
But : classe point

*****************************************************************/
#pragma once
#include <iostream>
using namespace std;

class Point {

private:
  float X, Y;

public:
  Point();
  Point(float x, float y);
  Point(Point const &point);

  void translater(Point p);
  void translater(float tx, float ty);

  void setPoint(float x, float y);

  float getX() const;
  float getY() const;

  ostream& affiche(ostream &s) const;

  void operator+=(Point const &point);
};

ostream &operator<<(ostream &, Point const &p1);
