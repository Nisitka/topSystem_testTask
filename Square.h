#pragma once
#include "Figure.h"

class Square: public Figure    
{
public:
	Square(Painter* pianter_, Point* leftUp, int longEdge);

	void draw();
};

