#pragma once
#include "rectangle.h"
#include <iostream>

using namespace std;

class carre : public rectangle
{
    public:
        carre();
        carre(float c);
};

std::ostream& operator<<(std::ostream& s, carre const& c);