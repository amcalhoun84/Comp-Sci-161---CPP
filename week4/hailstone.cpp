/*****************************************************************
** Name: Andrew Michael Calhoun (calhouna)
** Email: calhouna@onid.oregonstate.edu
** Assignment 4; Date: 04/22/2015
** Description: We are creating a hailstone program to test reference
** addressing and passing of variable between two functions. I am
** going to attempt to do this without the use of global variables, 
** and pass the necessary arguments and parameters to the various functions.
******************************************************************/ 

#include <iostream>
using namespace std;

int hailstone(int integer)	// Initialize the function, set up parameter.
{
	int steps = 0;  	// Initialize the number of steps it'll take to get to 1			
	if (integer == 1)   
	{
		return steps;   // If the number of steps is 0, just return 0.	
	}
	// If the Integer is anything BUT 1, then let's find out how many steps
	// on the hailstone it takes to get to 1. 
	else 
	{
		do
		{
			steps++;				// Start counting steps each time the loop
									// iterates.
			if ((integer % 2) != 0)	// Check if the integer is odd.
					integer = (integer*3) + 1;
			else					// The integer is even.
				integer = integer / 2;					
		}
		while (integer != 1);
	}
	return steps;	// Finished with the loop and return steps.
}