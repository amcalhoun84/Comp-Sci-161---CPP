/*****************************************************************
** Name: Andrew Michael Calhoun (calhouna)
** Email: calhouna@onid.oregonstate.edu
** Assignment 5; Date: 05/9/2015
** Description: The heaader file for LineSegment.cpp. Contains the
** line segment functions for length, slope, and passes the approprate
** variables.
******************************************************************/ 

#ifndef LINESEGMENT_HPP
#define LINESEGMENT_HPP

#include "Point.hpp"

class LineSegment
{
private:
	Point end1; // Objects to pasas the endpoint variables.
	Point end2;

public:

	LineSegment(); // default constructor
	LineSegment(Point p1, Point p2); // constructor


//setters
	void setEnd1(Point);
	void setEnd2(Point);
	
//getters
	Point getEnd1();
	Point getEnd2();
	double length(); // function to determine the length, based on distance
	double slope(); // function to determine the slope, based on the slope formula
	
	
};

#endif