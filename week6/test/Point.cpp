// Point.cpp : Defines the entry point for the console application.
//

#include "Point.hpp"
#include <iostream>
#include <cmath>

Point::Point() {
	
	setXCoord(0.0);
	setYCoord(0.0); 

}

Point::Point(double x, double y) 
{ 
	setXCoord(x); 
	setYCoord(y);

}
	
void Point::setXCoord(double x)
{
		xCoord = x;
	
}
void Point::setYCoord(double y)
{
		yCoord = y;
}


double Point::distanceTo(const Point& p2)
{

	double x1, y1, x2, y2;
	x1 = xCoord;
	x2 = p2.xCoord;
	y1 = yCoord;
	y2 = p2.yCoord;

	// std::cout << x1 << " " << x2 << " " << y1 << " " << y2 << std::endl;

	distance=sqrt(pow(x2-x1,2.0)+pow(y2-y1,2.0));
	return distance;
	// return sqrt(pow(xCoord,2.0)+pow(yCoord,2.0));
//	std::cout << distance << std::endl;
	
}

double Point::getXCoord()
{
	return xCoord;
}

double Point::getYCoord()
{
	return yCoord;
}


