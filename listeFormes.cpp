#include "listeFormes.h"

listeFormes::listeFormes() : tableau() {}

listeFormes::~listeFormes()
{
    for (forme* f : tableau)
    {
        delete f;
    }
    tableau.clear();
}

void listeFormes::ajout(forme* forme)
{
    tableau.push_back(forme);
}

float listeFormes::surface() 
{
    float surface = 0;
    vector<forme*>::iterator it;
    for(it = tableau.begin(); it != tableau.end(); it++)
    {
        surface += (*it)->surface();
    }
    return surface;
}

/*
Accesseurs
*/
vector<forme*> listeFormes::getListe() const
{
    return this->tableau;
}

/*
Opérateurs
*/
ostream& operator<<(ostream& s, listeFormes const& lf1)
{
    vector<forme*>::iterator it;
    if(lf1.getListe().empty())
    {
        s << "liste vide" << endl;
    }
    else
    {
        for(it = lf1.getListe().begin(); it!=lf1.getListe().end(); it++)
        {
            s << "(" << (*it)->getType() << ", centre: " << (*it)->getPoint() << ", surface: " << (*it)->surface() << ", perimetre: " << (*it)->perimetre() << ")" << endl;
        }
    }
    return s;
}
