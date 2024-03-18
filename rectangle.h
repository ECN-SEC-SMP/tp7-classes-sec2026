#pragma once
#include "forme.h"
#include <iostream>

class rectangle : public forme
{
    public:
        rectangle();
        rectangle(float l, float h);
        float perimetre();
        float surface();
        //accesseur
        float getLongueur() const;
        float getHauteur() const;
    protected:
        float longueur;
        float hauteur;
};

std::ostream& operator<<(std::ostream& s, rectangle const& r1);