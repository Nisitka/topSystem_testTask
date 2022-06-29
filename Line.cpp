#include "Line.h"

Line::Line(Painter* p, Point* a_, Point* b_)
{
	op = &p->op;
	hWnd = &p->hWnd;
	hDC = &p->hDC;

	a = a_;
	b = b_;
}

Line::Line()
{

}

void Line::setPoint_a(Point* a_)
{
	a = a_;
}

void Line::setPoint_b(Point* b_)
{
	b = b_;
}

Point* Line::getPoint_a()
{
	return a;
}

Point* Line::getPoint_b()
{
	return b;
}

void Line::draw()
{
	MoveToEx(*hDC, a->getX(), a->getY(), op);
	LineTo(*hDC, b->getX(), b->getY());
}