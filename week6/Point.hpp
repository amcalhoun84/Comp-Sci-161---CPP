/*****************************************************************
** Name: Andrew Michael Calhoun (calhouna)
** Email: calhouna@onid.oregonstate.edu
** Assignment 5; Date: 05/9/2015
** Description: The file for LineSegment.hpp, which we are using as a header for Point.cpp. 
** expand our knowledge aabout classes and private and public functions, data and methods.
** It's also an exercise in using pass by reference and pass by value to build a larger
** program.
******************************************************************/ 


#ifndef POINT_HPP
#define POINT_HPP

class Point 
{
private:
	double xCoord, yCoord; // xCoord and yCoord to pass between the functions.
		
public:
// Getters and Setters. 

	//setter prototypes
	void setXCoord(double);
	void setYCoord(double);
	
	//getter prototypes
	double getXCoord();
	double getYCoord();

	//Distance Function Prototype
	double distanceTo(const Point& p); // Pass by a reference

	Point(); // Default Constructor
	Point(double, double); // Constructor

};





#endif