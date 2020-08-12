#pragma once
#include "shape.h"
class circle : public shape
{
    int radius, x_axis, y_axis;
public:
   circle(int r, int x, int y);
    void display() override;
    void move(int x, int y);
    void unmove(int x, int y);
    void scale(int sval);
    void unscale(int sval);
    void rotate();
    void unrotate();
};




