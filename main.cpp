#include <iostream>
#include "point.h"

using namespace std;

int main ()
{   
    cout << "------ test instantiation ------" << endl;
    point p1;
    point p2(12,15);
    p1.aff();
    p2.aff();
    cout << "------ test translation ------" << endl;
    p1.translater(2,3);
    p1.aff();
    cout << "------ test accesseurs / mutateurs ------" << endl;
    cout << "valeur de l'absisse p1 : " << p1.getX() << endl;
    p1.setX(12);
    p1.aff();
    return 0;
}