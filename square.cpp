#include "square.h"
#include "shape.h"
#include<iostream>

using namespace std;

square::square(int l, int x, int y)
{
	len = l;
	x_axis = x;
	y_axis = y;
}
void square::move(int x, int y)
{
	x_axis += x;
	y_axis += y;
}
void square::unmove(int x, int y)
{
	x_axis -= x;
	y_axis -= y;
}
void square::scale(int sval)
{
	len = len + sval;
}
void square::unscale(int sval)
{
	len = len - sval;
}
void square::rotate()
{

	x_axis = x_axis + y_axis;
	y_axis = x_axis - y_axis;
	x_axis = x_axis - y_axis;
}
void square::unrotate()
{
	x_axis = x_axis + y_axis;
	y_axis = x_axis - y_axis;
	x_axis = x_axis - y_axis;
}
void square::display() {
	cout << " length=" << len << ", X-axis" << x_axis << ", Y-axis" << y_axis << endl;
}
