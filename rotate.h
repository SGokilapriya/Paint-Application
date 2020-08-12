#pragma once
#include "command.h"
#include "shape.h"
class rotate : public command
{
public:
    shape* shapes;
    int l, b;
    rotate(shape* a);
    void execute();
    void unexecute();
};
