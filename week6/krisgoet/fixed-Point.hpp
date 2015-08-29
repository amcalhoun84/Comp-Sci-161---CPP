#ifndef POINT_HPP
#define POINT_HPP
class Point
{
private:
	double xCoord, yCoord, distance; // As a general rule, you should never start your variables with capitals.
	// Always due Camel Notation, yCoord, xCoord, etc...
	
public: 

	// The only function that needs a const is the distanceTo. 
	void setXCoord(double); // const;
	void setYCoord(double); // const;

	double getXCoord(); // const;
	double getYCoord(); // const;
	
	double distanceTo(const Point&);
	// double distanceTo(const Point &otherPoint);
	Point(); //default constructor 
	Point(double, double); //contructor 2 parameter
};
#endif
