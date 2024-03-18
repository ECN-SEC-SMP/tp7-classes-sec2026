#include <iostream>
#include "point.h"

using namespace std;

int main ()
{   
    point p1;
    point p2(2,6);
    cout << p1;
    p1 += p2;
    cout << p1;
    return 0;
}