#include <iostream>
#include "point.h"
#include "forme.h"
#include "rectangle.h"
#include "cercle.h"
#include "carre.h"

using namespace std;

int main ()
{   
    rectangle r1(5,9);
    cout << r1;
    cout << "Perimetre : " << r1.perimetre() << endl;
    cout << "Surface : " << r1.surface() << endl;
    cercle c1(10);
    cout << c1;
    cout << "Perimetre : " << c1.perimetre() << endl;
    cout << "Surface : " << c1.surface() << endl;
    carre car1(6);
    cout << car1;
    cout << "Perimetre : " << car1.perimetre() << endl;
    cout << "Surface : " << car1.surface() << endl;
    return 0;
}