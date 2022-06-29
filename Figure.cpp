#include "Figure.h"

Figure::Figure(Painter* p, int numPoint_, Point* points_)
{
	numPoint = numPoint_;
	points = points_;

    painter = p;

    op = &painter->op;
    hWnd = &painter->hWnd;
    hDC = &painter->hDC;
}

Figure::Figure()
{
    
}

void Figure::draw()
{
    if (numPoint > 2)
    {       
        for (int i = 0; i < numPoint - 1; i++)
        {
            Line* l = new Line(painter, points + i, points + i + 1);
            l->draw();
        }
        //соединяем с первой точкой 
        Line* l = new Line(painter, points + numPoint - 1, points);
        l->draw();
    }
    else
    {
        std::cout << "Слишком мало точек для рисования фигуры!";
    }
}
