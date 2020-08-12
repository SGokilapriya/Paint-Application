#include "rotatecmd.h"
#include "shape.h"
rotatecmd::rotatecmd(shape* a)
{
	this->shapes = a;


}
void rotatecmd::execute()
{
	shapes->rotate();
}
void rotatecmd::unexecute()
{
	shapes->unrotate();
}
