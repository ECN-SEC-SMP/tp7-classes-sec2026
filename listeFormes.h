#pragma once
#include "carre.h"
#include "cercle.h"
#include "rectangle.h"
#include "forme.h"
#include <iostream>
#include <vector>

using namespace std;

class listeFormes
{
    public:
        // Constructeur  
        listeFormes();
        // Destructeur
        ~listeFormes();
        // Méthodes publiques
        void ajout(forme* forme);
        float surface();
        // Accesseur
        vector<forme*> getListe() const;
    private:
        vector<forme*> tableau;
};

ostream& operator<<(ostream& s, listeFormes const& lf1);