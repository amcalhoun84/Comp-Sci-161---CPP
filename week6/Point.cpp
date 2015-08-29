/*****************************************************************
** Name: Andrew Michael Calhoun (calhouna)
** Email: calhouna@onid.oregonstate.edu
** Assignment 5; Date: 05/9/2015
** Description: The file for Point.cpp, which we are using to 
** expand our knowledge aabout classes and private and public functions, data and methods.
** It's also an exercise in using pass by reference and pass by value to build a larger
** program.
******************************************************************/ 

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

	double distance=sqrt(pow(x2-x1,2.0)+pow(y2-y1,2.0));
	return distance;

}

double Point::getXCoord()
{
	return xCoord;
}

double Point::getYCoord()
{
	return yCoord;
}


