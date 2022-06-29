#include "Point.h"

Point::Point()
{

}

Point::Point(int x_, int y_)
{
	x = x_;
	y = y_;
}

void Point::setCoord(int x_, int y_)
{
	x = x_;
	y = y_;
}

void Point::setX(int x_)
{
	x = x_;
}

void Point::setY(int y_)
{
	y = y_;
}

int* Point::getCoord()
{
	int* coord = new int[2];
	coord[0] = x;
	coord[1] = y;

	return coord;
}

int Point::getX()
{
	return x;
}

int Point::getY()
{
	return y;
}

Point::~Point()
{
	
}