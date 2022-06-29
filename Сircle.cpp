#include "Сircle.h"
#include <cmath>
#define M_PI 

Сircle::Сircle(Painter* painter_, Point* centerPoint, int R)//две диогональных точек
{
    numPoint = R*50; //чем больше радиус, тем больше точек для атрисовки 

    points = new Point[numPoint];
    double pi = 3.14159265358979323846;
    for (int i = 0; i < numPoint; i++)
    {
        double fAngle = (double)(pi *((double)(360 * i) / numPoint))/ 180;
        points[i] = *new Point(
            centerPoint->getX() + cos(fAngle) * R,
            centerPoint->getY() + sin(fAngle) * R
                               );
    }

    painter = painter_;
}

void Сircle::draw()
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