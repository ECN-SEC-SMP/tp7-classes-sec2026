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
float point::getX() {return this->x;}
float point::getY() {return this->y;}

/*
mutateurs
*/
void point::setX(float val) {this->x = val;}
void point::setY(float val) {this->y = val;}

/*
Méthode de débug
*/
void point::aff()
{
    cout << "------ point -------" << endl;
    cout << this->x << endl;
    cout << this->y << endl;
}

