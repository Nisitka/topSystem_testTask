#pragma once

#include <windows.h>
#include <iostream>

struct Painter
{
	POINT op;
	HWND hWnd; 
	HDC hDC;
};