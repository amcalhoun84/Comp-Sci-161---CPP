/*****************************************************************
** Name: Andrew Michael Calhoun (calhouna)
** Email: calhouna@onid.oregonstate.edu
** Assignment 9; Date: 05/28/2015
** Description: Validation.cpp, testing to see if the input is
** a valid float or int based on the user input.
******************************************************************/ 

#include <string>
using namespace std;

bool stringIsInt(string);
bool stringIsFloat(string);

/*
**	
**	stringIsInt - will test to see if the string input 
**  is an integer. If not, will return value as false, 
**	failing the string. Otherwise, will return as true.
*/


bool stringIsInt(string intString)
{
	bool valid = true;	// We will assume that all inputs are integers until the test fails.
	int i = 0;	// Index initialization.
	int size = intString.size(); // To check length of string.

	if(size <= 1)	// If no input or an input of 1 character is entered.
	{
		if(intString[0] == '-' || intString[0] == '.' || intString[0] == '+' || intString[0] == ' ')
		{
			return false;	// If the input contains any of the above, then it automatically fails.
		}

	}
	else // For anything longer than one character.
	{
		do
		{
			if(intString[0] == '.' || intString[0] == '-' || intString[0] == ' ' || intString[0] == '+')
			{
				i++;	
				
				if(isdigit(intString[i]) == 1 && isdigit(intString[i+2]) == 1 && intString[i+1] == ' ')	// Check if there are two spaces in a row.
				{
				valid = false;
				i++;
				break;	// If it fails, end the loop.
				}

				else if(intString[i] == '.') // Check if there is a period/decimal holder, and break the loop if there is.
				{
					i++;
					valid = false;
					break;  // If it fails, end the loop.
				}
				else
				{				
				}
			}
			else
			{
				i++;
				valid = false;
				break;
			}
		}
		while(intString[i] != '\0');	// Keep iterating the loop as long as we don't hit the null terminator.
	}
	return valid;	// Return the results. 

}

/*
**	
**	stringIsFloat - will test to see if the string input 
**  is a proper float/double. If not, will return value as false, 
**	failing the string. Otherwise, will return as true.
*/

bool stringIsFloat(string fltString)
{
	bool valid = true;	// We will always assume the string is true, until proven otherwise.
	int i = 0;	// Initialize the index counter
	int periodCount = 0; 	// Initialize for the period count
	int size = fltString.size();	// Length check.

	for(int j = 0; j<size; j++)	// This will check to make sure there is no more than one decimal point per entry.
	{
			if(fltString[j] == '.')
			{
				periodCount++;
			
				if(periodCount > 1)
				{
					return false;
				}
			}
	}	

	if(size <= 1)	// While it may seem redundant, both single length strings may be floats or integers, and this is to make sure nothing slips through. 
	{
		if(fltString[0] == '-' || fltString[0] == '+' || fltString[0] == ' ' || fltString[0] == '.' || fltString[i] == '\0')
		{
			return false;	// If there is a single character of any of the above, return false.
		}

	}
	else 	// Otherwise, check to make sure everything is okay.
	{
		do
		{
			if(fltString[0] == '-' || fltString[0] == '+' || fltString[i] == '.' || fltString[0] == ' ' || fltString[0] == '\0')
			{
				i++;
	
				if(fltString[i] == ' ')	// Check to see if there are two spaces in a row.
				{

					if(fltString[i+1] == ' ')
					{
						valid = false;
					}
					i++;
				}
			}
		
			else	// If it tails any other condition, break it and fail.
			{
				i++;
				valid = false;
				break;
			}
		}
		while(fltString[i] != '\0');	// Null return.
	}
	return valid;	// Return if valid or not.

}