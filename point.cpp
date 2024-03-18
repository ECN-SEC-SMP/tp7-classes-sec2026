#include "point.h"
#include <iostream>

using namespace std;

point::point()
{
    this->x = 0; // initialisation à l'origine
    this->y = 0;
}

point::point(float _x, float _y)
{
    this->x = _x;
    this->y = _y;
}

void point::translater(float _x, float _y)
{
    this->x += _x; // déplacement en absisse
    this->y += _y; // déplacement en ordonnée
}

void point::aff()
{
    cout << "------ point -------" << endl;
    cout << this->x << endl;
    cout << this->y << endl;
}

