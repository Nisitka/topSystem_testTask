#include "Square.h"

Square::Square(Painter* painter_, Point* leftUpPoint, int longEdge)//две диогональных точек
{ 
	numPoint = 4;

    points = new Point[numPoint];
    points = leftUpPoint;
    points[1] = *new Point(leftUpPoint->getX(), leftUpPoint->getY() + longEdge);
    points[2] = *new Point(leftUpPoint->getX() + longEdge, leftUpPoint->getY() + longEdge);
    points[3] = *new Point(leftUpPoint->getX() + longEdge, leftUpPoint->getY());

    painter = painter_;
}

void Square::draw()
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


