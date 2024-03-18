#pragma once
#include <iostream>

using namespace std;

class point {
    public:
        // constructeurs
        point();
        point(float _x, float _y);
        point(const point& pt);
        // translation
        void translater(float _x, float _y);
        // accesseurs
        float getX() const;
        float getY() const;
        // mutateurs
        void setX(float val);
        void setY(float val);
        //opérateur
        void operator+=(point const& p1);

    private:
        float x;
        float y;
};

ostream& operator<<(ostream& s, point const& p1);