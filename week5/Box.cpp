/*****************************************************************
** Name: Andrew Michael Calhoun (calhouna)
** Email: calhouna@onid.oregonstate.edu
** Assignment 5; Date: 04/29/2015
** Description: The 'main' file for Box.cpp, which we are using to
** learn about classes and private and public functions, data and methods.
** This will allow us to improve the versatility and maintenance of our code.
******************************************************************/ 

#include "Box.hpp"
#include <iostream>
using namespace std;

Box::Box(double len, double hgt, double wid) // Constructor call.
{
	length = len;	// Values match those of the setters,
	height = hgt;	// allowing the constructor to run.
	width = wid;
}

/* The next three methods are setters, they verify the
 * dimension and then return a value if it is valid
 * or not. 
 */


bool Box::setLength(double len)
{
	bool validData = true;  // Data validation

	if (len >= 0)			// copy len to length
		length = len; 
	else 
		validData = false; 
	return validData;
}

bool Box::setWidth(double wid)
{
	bool validData = true;  // Data validation

	if (wid >= 0)			// copy len to length
		width = wid; 
	else 
		validData = false; 
	return validData;

}
bool Box::setHeight(double hgt)
{
	bool validData = true;  // Data validation

	if (hgt >= 0)			// copy len to length
		height = hgt; 
	else 
		validData = false; 
	return validData;
}

/* The Getter Methods determine the Surface Area 
 * and Volume of the Box and in theory output it based on
 * the user input.
 */

double Box::getSurfaceArea() // determines the surface area.
{
	double sides1, sides2, sides3;

	sides1 = (length * width) * 2;
	sides2 = (height * width) * 2;
	sides3 = (length * height) * 2;

	return sides1 + sides2 + sides3;
}

double Box::getVolume()  // determines volume by multiplying the sides.
{
	return width * height * length;
}
