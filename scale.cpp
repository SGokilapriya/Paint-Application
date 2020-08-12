#include "scale.h"
#include"shape.h"
scale::scale(shape* a, int z)
{
	this->shapes = a;
	this->z = z;

}
void scale::execute()
{
	shapes->scale(z);
}
void scale::unexecute()
{
	shapes->unscale(z);
}
