#ifndef POINT_HPP
#define POINT_HPP

class Point 
{
private:
	double xCoord, yCoord, distance;
		
public:
// Getters and Setters. 

	void setXCoord(double);
	void setYCoord(double);
	
	double getXCoord();
	double getYCoord();
	double distanceTo(const Point& p);

	Point();
	Point(double, double);

};





#endif