#include <iostream>
#include "Point.h"
using namespace std;

void print(int x) { cout << x << endl; }
void print(float x) { cout << x << endl; }
void print(bool x) { cout << x << endl; }

/*void operator + (ost::Point& p1, ost::Point& p2)
{
	p1.x += p2.x;
	p1.y += p2.y;
}*/

/*ostream& operator << (ostream& ostream, ost::Point& p1)
{
	return ostream << p1.x << " : " << p1.y;
}*/

int main() {
	print(5);
	print(1.2f);
	print(true);

	ost::Point point1(10, 14);
	ost::Point point2(5, 8);

	//point1.Add(point2);
	ost::Point point3 = (point1 + point2) * point2 ;

	//point1.Write(cout);
	//point2.Write(cout);

	cout << point1 << endl << point2 << endl << point3 << endl;


	return 0;
}