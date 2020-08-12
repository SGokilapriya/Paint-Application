#pragma once
#include "command.h"
#include "shape.h"
class scale : public command
{
    public:
        shape* shapes;
        int z;
        scale(shape* a, int z);
        void execute();
        void unexecute(); 
};




