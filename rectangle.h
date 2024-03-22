#pragma once
#include "forme.h"
#include <iostream>

class rectangle : public forme
{
    public:
        //Constructeurs
        rectangle();
        rectangle(float l, float h);
        rectangle(float l, float h, string type);
        //Méthodes publiques
        float perimetre();
        float surface();
        //Accesseurs
        float getLongueur() const;
        float getHauteur() const;
    protected:
        float longueur;
        float hauteur;
};

std::ostream& operator<<(std::ostream& s, rectangle const& r1);