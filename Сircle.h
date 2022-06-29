#pragma once

#include "Figure.h"

class Ñircle: public Figure
{
public:
	Ñircle(Painter* pianter_, Point* centerPoint, int R);

	void draw();
};

