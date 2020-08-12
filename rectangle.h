#pragma once
#include "shape.h"
class rectangle : public shape
{
    int length, breadth, x_axis, y_axis;
    public:
        rectangle(int l, int b, int c_x, int c_y);
        void display();
        void move(int x, int y);
        void unmove(int x, int y);
        void scale(int sval);
        void unscale(int sval);
        void rotate();
        void unrotate();
};

