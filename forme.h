#pragma once

#include "point.h"
#include <iostream>

using namespace std;

class forme
{
    public:
        // Constructeur
        forme();
        // Méthodes publiques
        virtual float perimetre()=0;
        virtual float surface()=0;
        // Opérateur
        void operator+=(point const& p1);
        // Accesseur
        point getPoint() const;
        string getType() const; 
        // Mutateur
        void setType(string const& type); 
    protected:
        string type; 
    private:
        point centre;
};

std::ostream& operator<<(std::ostream& s, forme const& f1);