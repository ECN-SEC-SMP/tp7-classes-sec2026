//g++ -o main point.cpp forme.cpp main.cpp rectangle.cpp carre.cpp cercle.cpp listeFormes.cpp

#include <iostream>
#include "rectangle.h"
#include "cercle.h"
#include "carre.h"
#include "listeFormes.h"

using namespace std;

int main ()
{   
    listeFormes liste;
    rectangle* r1 = new rectangle(5,9, "rectangle");
    cercle* c1 = new cercle(6);
    carre* car1 = new carre(10);
    liste.ajout(r1);
    cout << liste << endl << "-------------------" << endl;
    liste.ajout(c1);
    cout << liste << endl << "-------------------" << endl;
    liste.ajout(car1);
    cout << liste << endl << "-------------------" << endl;
    liste.~listeFormes();
}