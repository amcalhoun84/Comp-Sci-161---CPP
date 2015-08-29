#include "Point.hpp"
#include <cmath>
#include <iostream>
using namespace std; 

int main()
{
	double x1, x2, y1, y2;
	Point p1(x1, y1);
	Point p2(y1, y2);

	cout << "enter point 1 coordinates: \n";
	cin >> x1 >> y1;
	cout << "enter point 2 coordinates: \n";
	cin >> x2 >> y2;

	// In your tests, you didn't use your get or set functions! This probably explains why you didn't pass
// data to the necessary members!

	p1.setXCoord(x1);
	p1.setYCoord(y1);
	p2.setXCoord(x2);
	p2.setYCoord(y2);

	cout <<"("<<x1 << ", "<< y1 <<")  "<<"("<< x2 << ", " << y2<<")\n";


	cout << p1.distanceTo(p2) <<endl;
		return 0;
}

Point::Point() {
	
}

Point::Point(double x, double y)
{
	setXCoord(x);
	setYCoord(y);
}

void Point::setXCoord(double x) // const
{
	xCoord = x;
}

void Point::setYCoord(double y) // const
{
	yCoord = y;
}

//calculate the distance between two points
double Point::distanceTo(const Point& otherPoint)
{
	double x1, 
		   y1, 
		   x2, 
		   y2;

	x1 = xCoord;
	x2 = otherPoint.xCoord;
	y1 = yCoord;
	y2 = otherPoint.yCoord;

	distance = sqrt(pow(x2-x1,2.0)+pow(y2-y1,2.0));
	cout << distance <<endl;
	return distance;
}

//return value of x coordinate
double Point::getXCoord() // const
{
	return xCoord;
}
//return value of y coordinate
double Point::getYCoord() // const
{
	return yCoord;
}
