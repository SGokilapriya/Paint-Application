#pragma once
#include "shape.h"
class square : public shape
{
    int len, x_axis, y_axis;
    public:
        square(int, int, int);
        void display() override;
        void move(int x, int y);
        void unmove(int x, int y);
        void scale(int sval);
        void unscale(int sval);
        void rotate();
        void unrotate();
    };




