#pragma once
class Point
{
public:
	Point();
	Point(int x_, int y_);

	void setCoord(int x_, int y_);
	void setX(int x_);
	void setY(int y_);

	int* getCoord();
	int getX();
	int getY();

	~Point();
	
private:
	int x;
	int y;
};

