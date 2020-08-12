#include "rectangle.h"
#include "shape.h"
#include<iostream>
using namespace std;
rectangle::rectangle(int len, int bre, int x, int y)
{
	length = len;
	breadth = bre;
	x_axis = x;
	y_axis = y;
}
void rectangle::move(int x, int y)
{
	x_axis += x;
	y_axis += y;
}
void rectangle::unmove(int x, int y)
{
	x_axis -= x;
	y_axis -= y;
}
void rectangle::scale(int sval)
{
	length += sval;
	breadth += sval;
}
void rectangle::unscale(int sval)
{
	length -= sval;
	breadth -= sval;
}
void rectangle::rotate()
{

	x_axis = x_axis + y_axis;
	y_axis = x_axis - y_axis;
	x_axis = x_axis - y_axis;
}
void rectangle::unrotate()
{
	x_axis = x_axis + y_axis;
	y_axis = x_axis - y_axis;
	x_axis = x_axis - y_axis;
}
void rectangle::display()
{
	cout << " length=" << length << ", breadth=" << breadth << ", X-axis" << x_axis << ", Y-axis" << y_axis << endl;
}

