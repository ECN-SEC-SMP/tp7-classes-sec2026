#pragma once

#include "point.h"
#include <iostream>

class forme
{
    public:
        forme();
        virtual float perimetre()=0;
        virtual float surface()=0;
        //opérateur
        void operator+=(point const& p1);
        //accesseur
        point getPoint() const;
    private:
        point centre;
};

std::ostream& operator<<(std::ostream& s, forme const& f1);