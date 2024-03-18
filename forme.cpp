#include "forme.h"
#include <iostream>

using namespace std;

forme::forme() : centre() {}

/*
Opérateurs
*/

void forme::operator+=(point const& p1)
{
    this->centre += p1;
}

ostream& operator<<(ostream& s, forme const& f1)
{
    s << "--- point ---" << endl << "x : " << f1.getPoint().getX()<< endl << "y : " << f1.getPoint().getY() << endl << endl;
    return s;
}

/*
Accesseur
*/

point forme::getPoint() const
{
    return this->centre;
}
