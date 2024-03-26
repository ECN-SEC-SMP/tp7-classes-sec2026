/*****************************************************************
Auteurs : DARGERE Lucas et LAVAUX Bastien
Date : 18 mars 2024
But : fichier source de la classe ListeFormes

*****************************************************************/

#include "forme.h"
#include "point.h"
#include "listeFormes.h"
#include <iostream>

using namespace std;

listeFormes::listeFormes() : tableau() {}

listeFormes::~listeFormes()
{
    for (Forme* forme : tableau)
    {
        delete forme;
    }
    tableau.clear();
}

void listeFormes::ajout(Forme* forme)
{
    tableau.push_back(forme);
}

float listeFormes::surface() 
{
    float aire = 0;
    vector<Forme*>::iterator i;
  
    for(i = tableau.begin(); i != tableau.end(); i++)
    {
        aire += (*i)->surface();
    }
  
    return aire;
}

vector<Forme*> listeFormes::getListe() const
{
    return this->tableau;
}


ostream& operator<<(ostream& s, listeFormes const& listeforme)
{
    vector<Forme*>::iterator i;
    if(listeforme.getListe().empty())
    {
        s << "liste vide" << endl;
    }
    else
    {
        for(i = listeforme.getListe().begin(); i!=listeforme.getListe().end(); i++)
        {
            s << "(" << (*i)->getType() << ", centre: " << (*i)->getPoint() << ", surface: " << (*i)->surface() << ", perimetre: " << (*i)->perimetre() << ")" << endl;
        }
    }
    return s;
}