#pragma once

#include "Line.h"

class Figure: public Line
{
public:
	Figure(Painter* p, int numPoint_, Point* points_);
	Figure();

	void draw();

protected:
	Point* points;
	int numPoint;
	Painter* painter;

private:
	

};

