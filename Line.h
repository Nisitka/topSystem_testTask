#pragma once

#include <windows.h>
#include <iostream>

#include "Point.h"
#include "Painter.h"

class Line
{
public:
	Line(Painter* p, Point* a_, Point* b_);
	Line(Painter* p);
	Line();

	void setPoint_a(Point* a_);
	void setPoint_b(Point* b_);

	Point* getPoint_a();
	Point* getPoint_b();

	virtual void draw();

protected:
	POINT* op;
	HWND* hWnd;
	HDC* hDC;

private:
	//����� ��������� � ���������� �����, ������� ���� �������� ����� �� ���, �� ����� ����� ���������  
	Point* a;
	Point* b;

	
	
};

