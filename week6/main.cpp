#include "Point.hpp"
#include "LineSegment.hpp"
#include <iostream>
#include <cmath> 

// using namespace std;

int main()
{
	double x1, x2, y1, y2; 

	Point p1;
	Point p2;


	std::cout << "Enter your first x coord." << std::endl;
	std::cin >> x1;
	std::cout << "Enter your first y coord." << std::endl;
	std::cin >> y1;
	std::cout << "Enter your second x coord." << std::endl;
	std::cin >> x2;
	std::cout << "Enter your second y coord." << std::endl;
	std::cin >> y2;


	p1.setXCoord(x1);
	p1.setYCoord(y1);
	p2.setXCoord(x2);
	p2.setYCoord(y2);

	std::cout << "The x value of point 1 is: " << p1.getXCoord() << std::endl;
    std::cout << "The y value of point 1 is: " << p1.getYCoord() << std::endl;
    std::cout << "The x value of point 2 is: " << p2.getXCoord() << std::endl;
	std::cout << "The y value of point 2 is: " << p2.getYCoord() << std::endl;

	LineSegment LS(p1, p2);

	// double distance = p1.distanceTo(p2);
	std::cout << "Distance = " << p1.distanceTo(p2) << std::endl;
	std::cout << "Length = " << LS.length() << std::endl;
	std::cout << "Slope = " << LS.slope() << std::endl;

	return 0;
}
