#include "movecmd.h"
#include "shape.h"

movecmd::movecmd(shape* sh, int x, int y)
{
	this->shapes = sh;
	this->x = x;
	this->y = y;

}
void movecmd::execute()
{
	shapes->move(x, y);
}
void movecmd::unexecute()
{
	shapes->unmove(x, y);
}

