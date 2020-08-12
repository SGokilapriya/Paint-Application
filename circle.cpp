#include "circle.h"
#include "shape.h"
#include<iostream>

using namespace std;

circle::circle(int r, int x, int y)
{
	radius = r;
	x_axis = x;
	y_axis = y;
}
void circle::move(int x, int y)
{
	x_axis += x;
	y_axis += y;
}
void circle::unmove(int x, int y)
{
	x_axis -= x;
	y_axis -= y;
}
void circle::scale(int sval)
{
	radius = radius + sval;
}
void circle::unscale(int sval)
{
	radius = radius - sval;
}
void circle::rotate()
{

	x_axis = x_axis + y_axis;
	y_axis = x_axis - y_axis;
	x_axis = x_axis - y_axis;
}
void circle::unrotate()
{
	x_axis = x_axis + y_axis;
	y_axis = x_axis - y_axis;
	x_axis = x_axis - y_axis;
}
void circle::display() {
	cout << " Radius=" << radius << ", X-axis" << x_axis << ", Y-axis" << y_axis << endl;
}
