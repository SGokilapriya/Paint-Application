#pragma once
#include "command.h"
#include "shape.h"
class rotatecmd : public command
{
    public:
        shape* shapes;
        int l, b;
        rotatecmd(shape* a);
        void execute();
        void unexecute();
    };


