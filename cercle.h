#pragma once
#include "forme.h"
#include <iostream>

using namespace std;

class cercle : public forme
{
    public:
        // Constructeurs
        cercle();
        cercle(float _rayon);
        // Méthodes
        float perimetre();
        float surface();
        // Accesseur
        float getRayon() const;
    private:
        float rayon;
        
};

// Opérateurs
ostream& operator<<(ostream& s, cercle const& c1);