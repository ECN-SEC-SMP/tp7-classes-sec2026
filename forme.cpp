#include "forme.h"

forme::forme() : centre() {}

/*
Accesseurs
*/
point forme::getPoint() const
{
    return this->centre;
}

string forme::getType() const 
{
    return this->type;
}

/*
Mutateur
*/
void forme::setType(std::string const& type) 
{
    this->type = type;
}

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



