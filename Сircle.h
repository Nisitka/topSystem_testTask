#pragma once

#include "Figure.h"

class �ircle: public Figure
{
public:
	�ircle(Painter* pianter_, Point* centerPoint, int R);

	void draw();
};

