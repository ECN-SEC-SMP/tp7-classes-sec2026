#pragma once

class point {
    public:
        point();
        point(float _x, float _y);
        point(const point& pt);
        void translater(float _x, float _y);
        void aff();
        float getX();
        float getY();
        void setX(float val);
        void setY(float val);

    private:
        float x;
        float y;
};