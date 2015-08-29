/***************************************************************
 * Author: Andrew M. Calhoun (calhouna)
 * Email: calhouna@onid.oregonstate.edu
 * Date: 04/07/2015
 * Decription: Temperature Conversion Program, Celsuis to Fahrenheit.
 * Demonstration of inputs, outputs, and processing.
 * ************************************************************/

#include <iostream>
using namespace std;

// The primary function of the program.

int main()
{
    
    double celsius,			// initialize variables.
           fahrenheit;
    
    cout << "Please enter a Celsius Temperature." << endl;
    cin >> celsius; 				   // Input your temperature.
    fahrenheit = (celsius * 9/5) + 32; // Calculation of Celsius to Fahrenheit. 
    								   // 1.8 also works in lieu of 9/5.
    cout << fahrenheit << endl; 	   // Output of Fahrenheit Conversion
    return 0; // returns if program has no errors.
    
}


