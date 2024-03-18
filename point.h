#pragma once

class point {
    public:
        point();
        point(float _x, float _y);
        void translater(float _x, float _y);
        void aff();

    private:
        float x;
        float y;
};