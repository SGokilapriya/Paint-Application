#pragma once
#include "shape.h"
#include "command.h"
class movecmd : public command
{
    int x, y;
    public:
        shape* shapes;
        movecmd(shape* sh, int x, int y);
        void execute();
        void unexecute();

    };




