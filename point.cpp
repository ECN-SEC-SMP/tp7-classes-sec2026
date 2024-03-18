#include "point.h"
#include <iostream>

using namespace std;

/*
Constructeur par défaut
*/ 
point::point() : x(0), y(0) {}

/*
Constructeur avec 2 paramètres
*/
point::point(float _x, float _y) : x(_x), y(_y) {}

/*
Constructeur de recopie
*/
point::point(const point& pt) : x(pt.x), y(pt.y) {}

/*
Déplace un point en absisse et en ordonnée
*/
void point::translater(float _x, float _y)
{
    this->x += _x; // déplacement en absisse
    this->y += _y; // déplacement en ordonnée
}

/*
accesseurs
*/
float point::getX() const {return this->x;}
float point::getY() const {return this->y;}

/*
mutateurs
*/
void point::setX(float val) {this->x = val;}
void point::setY(float val) {this->y = val;}

/*
Opérateurs
*/

ostream& operator<<(ostream& s, point const& p1)
{
    s << "--- point ---" << endl << "x : " << p1.getX()<< endl << "y : " << p1.getY() << endl << endl;
    return s;
}

void point::operator+=(point const& p1)
{
    x += p1.x;
    y += p1.y;
}

