#ifndef LINESEGMENT_HPP
#define LINESEGMENT_HPP

#include "Point.hpp"

class LineSegment
{
private:
	Point end1;
	Point end2;

public:

//	LineSegment();
	LineSegment(Point p1, Point p2);

	void setEnd1(Point);
	void setEnd2(Point);
	Point getEnd1();
	Point getEnd2();
	double length();
	double slope();
	
	
};

#endif