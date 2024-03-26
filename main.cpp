/*****************************************************************
Auteurs : DARGERE Lucas et LAVAUX Bastien
Date : 24 mars 2024
But : fichier test du TP7 sur les classes

*****************************************************************/
#include "carre.h"
#include "cercle.h"
#include "forme.h"
#include "listeFormes.h"
#include "point.h"
#include "rectangle.h"
#include <iostream>

int main() {

  //-------- TEST POINT --------
  // Point A;
  // Point B(5, 1);
  // cout << A;
  // A += B;
  // cout << A;
  // A.translater(2, 2);
  // cout << A;
  // A.setPoint(12, 13);
  // cout << A;

  //-------- TEST Cerlcle --------
  // Cercle A;
  // cout << A;
  // Point B(5, 1);
  // Cercle C(5);
  // Cercle D(5, B);
  // A += B;
  // cout << A;
  // cout << C;
  // cout << D;
  // cout << "Perimetre de D: " << D.perimetre() << endl;
  // cout << "Surface de D  : "   << D.surface() << endl;

  //-------- TEST Rectangle --------
  // Rectangle A;
  // Rectangle B(5, 1);
  // Point P(2,4);
  // Rectangle C(5, 1,P);
  // cout << A;
  // cout << B;
  // cout << C;
  // cout << "Perimetre de C: " << C.perimetre() << endl;
  // cout << "Surface de C  : "   << C.surface() << endl;
  // A += P;
  // cout << A;

  //-------- TEST Carre -----------
  // Carre A;
  // Carre B(5);
  // Point P(2, 4);
  // Carre C(5, P);
  // cout << A;
  // cout << B;
  // cout << C;
  // cout << "Perimetre de C : " << C.perimetre() << endl;
  // cout << "Surface de C : " << C.surface() << endl;
  // A += P;
  // cout << A;

  //-------- TEST Liste Formes -----------
  Cercle *A = new Cercle(5, Point(2, 3));
  Rectangle *B = new Rectangle(4, 3, Point(-1, -2));
  Carre *C = new Carre(2, Point(5, 1));
  listeFormes listeF;
  cout << "------liste vide : " << listeF << endl;
  listeF.ajout(A);
  cout << "------liste avec un cercle : " << listeF << endl;
  listeF.ajout(B);
  cout << "------liste avec un cercle et un rectangle : " << listeF << endl;
  listeF.ajout(C);
  cout << "------liste avec un cercle, un rectangle et un carre : " << listeF;
  listeF.~listeFormes();
}
