/*********************************************************************
** Author: Andrew Michael Calhoun (calhouna@onid.oregonstate.edu)
** Date: 04/13/2015
** Description: This program is designed to have one user input a number, 
**		and another user guess the number. It will continue to tell
**		the user to guess higher or lower until they get the correct
**		number, where it will tell the user that they guessed it in
**		x number of tries. 				
*********************************************************************/
 

#include <iostream>
using namespace std;  		 // Namespace, for std::cout, std::cin, etc shorthand.
		
int main() 					// The primary function of the program. 
{

	int targetNumber;   	// The user's number.
	int guess;				// The player's guess. 
	int numberGuess = 0 ;   // The number of tries it took the user to guess the
							// input number. Starts at 1, so if the player guesses
							// it in one try, it will state 1 tries. 
	
	cout << "Enter the number for the player to guess." << endl;
	cin >> targetNumber;
	

	do 		// So long as the player has not guessed the number
			// correctly, the loop will continues. Once the number
			// is correctly guessed, it will then drop the user out
			// of the loop and tell them how many tries it took.
	{ 

		cout << "Enter your guess." << endl;
		cin >> guess;
		numberGuess++;
	
		if (guess < targetNumber)
			cout << "higher" << endl; 

		else if (guess > targetNumber)
			cout << "lower" << endl;

		else 
			cout << "You guessed it in " << numberGuess << " tries." <<  endl;


	} while (guess != targetNumber);
	
	return 0;   // terminate the program


}
