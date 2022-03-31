#ifndef _POINT
#define _POINT

using namespace std;

class Point{
private:
	double _x, _y, _scaleX, _scaleY;
public:
	Point(double x, double y);

public:
	double getX() const;
	double getY() const;
	void setX(double x);
	void setY(double y);
	void setScaleX(double scaleX);
	void setScaleY(double scaleY);
};

#endif