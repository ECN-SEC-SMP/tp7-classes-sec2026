/*****************************************************************
Auteurs : DARGERE Lucas et LAVAUX Bastien
Date : 18 mars 2024
But : classe forme

*****************************************************************/
#pragma once

#include "point.h"
#include <iostream>

using namespace std;

class Forme {

private:
  Point centre;

public:
  Forme();
  Forme(Point centre);

  //void translate(int tx, int ty);
  ostream& affiche(ostream &s) const;
    
  virtual float surface  ()=0;
  virtual float perimetre()=0;

  Point   getPoint  () const;
  string  getType   () const;

  void  setType   (std::string const& type);
  
  void operator+=(Point const &point);

protected:
  string type;

};

ostream &operator<<(ostream &, Forme const &forme);