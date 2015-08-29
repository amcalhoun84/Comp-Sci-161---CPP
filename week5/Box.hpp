/*****************************************************************
** Name: Andrew Michael Calhoun (calhouna)
** Email: calhouna@onid.oregonstate.edu
** Assignment 5; Date: 04/29/2015
** Description: The header file for Box.cpp, which we are using to
** learn about classes and private and public functions, data and methods.
** This will allow us to improve the versatility and maintenance of our code.
******************************************************************/ 


// Box.hpp header file, specifying Box class. First statements are the header guard.

#ifndef BOX_HPP
#define BOX_HPP

class Box 
{

private:	// Data variables used to determine dimensions of our box.
	double length, height, width; 

public: // Methods and constructors.

	// Setters
	bool setHeight(double);	// Determine if height has valid value
	bool setWidth(double);  // "" for width.
	bool setLength(double); // "" for length.
	
	// Getters
	double getVolume();			// Calculate the Volume
	double getSurfaceArea();	// Calculate the Surface Area.
	Box(double, double, double); // Constructor Prototype
};

#endif