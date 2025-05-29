#include "Point.h"

void ost::Point::Write(ostream& ostream) {
	ostream << x << " : " << y << endl;
}

void ost::Point::Add(Point& point)
{
	x += point.x;
	y += point.y;
}
ost::Point ost::Point::operator + (ost::Point& p2) {
	Point sumPoint;
	sumPoint.x = x + p2.x;
	sumPoint.y = y + p2.y;
	return sumPoint;
}

ost::Point ost::Point::operator * (Point& p2)
{
	return Point(x*p2.x, y * p2.y);
}

ost::Point ost::Point::operator-(float y)
{
	return Point(x-y, this->y-y);
}

ostream& ost::operator<<(ostream& ostream, ost::Point& point)
{
	return ostream << point.x << " : " << point.y;
}
