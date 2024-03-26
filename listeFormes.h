/*****************************************************************
Auteurs : DARGERE Lucas et LAVAUX Bastien
Date : 24 mars 2024
But : fichier entete de la classe ListeFormes

*****************************************************************/
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

private:
  vector<Forme*> tableau;

public:
 
  listeFormes();

  void ajout(Forme* forme);
  float surface();
  //float perimetre();

  vector<Forme*> getListe() const;

  ~listeFormes();

};

ostream& operator<<(ostream& s, listeFormes const& listeforme);