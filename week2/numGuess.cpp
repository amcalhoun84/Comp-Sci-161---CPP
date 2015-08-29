#include <iostream>
using namespace std;


int main() 
{

	int numberInput;
	int guess;
	int numberofGuesses;

	cout << "Enter the number for the player to guess." << endl;
	cin >> numberInput;
	cout << "Enter your guess." << endl;
	cin >> guess;

	while (guess != numberInput) { 

		if (guess <= numberInput)
		{
			cout << "higher"; << endl; 
			numberofGuesses++;
			cin >> guess;
		}

	else if (guess >= numberInput)
		{
			cout << "lower"; << endl;
			numberofGuesses++;
			cin >> guess;
		}

	else
	   {
		cout << "It took you " << numberofGuesses << "tries." <<  endl;
	   }
	
	}
	
	cout << "It took you " << numberofGuesses << "tries." <<  endl;

	return 0;


}