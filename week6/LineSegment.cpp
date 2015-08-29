/*****************************************************************
** Name: Andrew Michael Calhoun (calhouna)
** Email: calhouna@onid.oregonstate.edu
** Assignment 5; Date: 05/9/2015
** Description: The file for LineSegment.cpp, which we are using to 
** expand our knowledge aabout classes and private and public functions, data and methods.
** It's also an exercise in using pass by reference and pass by value to build a larger
** program.
******************************************************************/ 

#include "LineSegment.hpp"
#include "Point.hpp"
#include <iostream>

LineSegment::LineSegment(){} // default constructor

LineSegment::LineSegment(Point p1, Point p2) // constructor

{
	setEnd1(p1);
	setEnd2(p2);
}

//setters
void LineSegment::setEnd1(Point p1)
{
	end1 = p1;
}


void LineSegment::setEnd2(Point p2)
{
	end2 = p2;
}

//getters
Point LineSegment::getEnd1()
{

	return end1;
}

Point LineSegment::getEnd2()
{
	return end2;
}


// Determine the length of the line segment, based on the distance between the 
// points.

double LineSegment::length()
{

	return end1.distanceTo(end2);
	
}

double LineSegment::slope()
{

	double slope;

	return slope = (end2.getYCoord() - end1.getYCoord()) / (end2.getXCoord() - end1.getXCoord());

}

