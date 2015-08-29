/*****************************************************************
** Name: Andrew Michael Calhoun (calhouna)
** Email: calhouna@onid.oregonstate.edu
** Assignment 5; Date: 05/17/2015
** Description: The function file for findMode, where we cycle through
** a series of arrays to find the mode, or multiple modes, of the array
** if at all applicable. This assignment is designed to familiarize me
** with the usage of vectors, arrays, and hone my skills with nested loops.
******************************************************************/ 

#include <vector>
#include <algorithm>

std::vector<int>findMode(int[], int);	// Function Prototype

/*int main()
{

		int size;
		int numArray[size];


		std::cout << "Please state your array\'s desired size." << std::endl;
		std::cin >> size;
		std::cout << "Your array is " << size << " members." << std::endl;

		for (int a=1; a<=size; a++)
			{
				std::cout << "Please input a number : " << a << " out of " << size << std::endl;
				std::cin >> numArray[a];
			}

			std::cout << "{ ";
			for (int b=1; b<=size; b++)
			{	
				if (b != size)
				std::cout << numArray[b] << ", ";
				else
				std::cout << numArray[b];
				
			}

		std::cout << " }" << std::endl;
		findMode(numArray, size);
		return 0;


}*/

std::vector<int>findMode (int numArray[], int arraySize)
{
		
	std::vector<int> result;	// Set up the vector to process the mode
	int maxFrequency = 0;		
	int mode = 0;

	for (int pass = 0; pass < arraySize; pass++)	// Run through the array the first time...
	{
		int frequency = 0;

		for(int count = 0; count < arraySize; count++) // ... so we can compare it to itself,
													   // and find if there are any numbers that
													   // match 
		{

			if (numArray[pass] == numArray[count])
			{
				frequency++;	// If a value appears and is equal to its comparator, we add to the 
								// frequency counter.
			}
		}
		if (frequency > maxFrequency) 	// If our frequency exceeds our maximum frequency for a particular number, we update our maximum 
										// frequency to make sure that we get an accurate count.
		{
			maxFrequency = frequency;	
		}

		frequency = 0;	// Reset the frequency as necessary to make sure we don't overcount or over-estimate the number of modes if multiple.
		
		for(int modeCount = 0; modeCount < arraySize; modeCount++)	// Once we figure out how frequent a number is, we can go ahead 
																	// and figure out whether or not it is the mode. This loop will check
																	// the array and make sure that we get a complete count of the array.
		{
			if(numArray[pass] == numArray[modeCount])				// We pass through the array again and make sure that the array member
																	// is getting counted properly. Thus allowing us to fully identify the 
																	// frequency of the mode.
			{
				frequency++;										// Iterative addition to our frequency counter.
			}
		}
	if (frequency == maxFrequency)
		{
			mode = numArray[pass];									// If a value's frequency is equal to the maxFrequency, we pass it to the mode 
																	// variable for insertion into the array.
		}
	bool found = false;												// bool value

		for (int modeCount = 0; modeCount < result.size(); modeCount++)		// If our modeCount is less than the size of our vector, we want
																			// to keep adding things to it if it's appropriate.
		{
			if(mode == result[modeCount])
			{
				found = true;												// if our result is equal to our mode, then we are set!
			}
		}
		if (found == false)
		{
			result.push_back(mode);	// If the number isn't part of the mode, we push it back to the end of the vector, so it does not interfere.

		}
	std::sort(result.begin(), result.end()); // Now we sort the vector in ascending order...
		}
		return result;	// ... and return it!
}

