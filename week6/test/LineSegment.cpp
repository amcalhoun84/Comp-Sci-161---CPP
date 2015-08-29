#include "LineSegment.hpp"
#include "Point.hpp"
#include <iostream>
#include <string>
#include <cmath>

LineSegment::LineSegment(){}

LineSegment::LineSegment(Point p1, Point p2)

{
	setEnd1(p1);
	setEnd2(p2);
}

void LineSegment::setEnd1(Point p1)
{
	end1 = p1;
}


void LineSegment::setEnd2(Point p2)
{
	end2 = p2;
}

Point LineSegment::getEnd1()
{

	return end1;
}

Point LineSegment::getEnd2()
{
	return end2;
}


double LineSegment::length()
{

	/*std::cout << "X-Coords are: " << end1.getXCoord() << " " << end2.getXCoord() << std::endl;
	std::cout << "Y-Coords are: " << end1.getYCoord() << " " << end2.getYCoord() << std::endl;*/
	return end1.distanceTo(end2);
	
}

double LineSegment::slope()
{

	double slope;
	double slY = end2.getYCoord() - end1.getYCoord();
	double slX = end2.getXCoord() - end1.getXCoord();

	if (slX == 0)
		{
		std::cout << "Division by zero detected... returning zero." << std::endl;
		return 0;
	}
	else
		return slope = (slY/slX);

}

