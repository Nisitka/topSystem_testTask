#include <iostream>
#include <windows.h>

#include "Painter.h"
#include "Figure.h"
#include "Square.h"
#include "Сircle.h"

int main() 
{
    
    Painter mainPainter;
    mainPainter.hWnd = GetConsoleWindow();
    mainPainter.hDC = GetDC(mainPainter.hWnd);
    SelectObject(mainPainter.hDC, GetStockObject(WHITE_PEN));

    //рисование линии
    Line l = Line(&mainPainter, new Point(0, 0), new Point(100, 200));
    l.getPoint_a()->setX(300);
    l.draw();
    
    int numFigures = 3;
    Figure* figures = new Figure[numFigures];
    //произвольная фигуры (треугольник)
    int n = 3;
    Point* points = new Point[n];
    for (int i = 0; i < n; i++)
    {
        points[i] = Point(rand() % 400, rand() % 400);
    }
    figures[0] = Figure(&mainPainter, n, points);

    //квадрат
    figures[1] = Square(&mainPainter, new Point(300, 300), 70);

    //круг
    figures[2] = Сircle(&mainPainter, new Point(500, 300), 70);

    //рисуем все фигуры поочереди
    for (int i = 0; i < numFigures; i++)
    {
        figures[i].draw();
    }

    ReleaseDC(mainPainter.hWnd, mainPainter.hDC);
    std::cin.get();

    return 0;
}