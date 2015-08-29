#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdlib>
using namespace std;

int main()
{
	int upperBound;
	int lowerBound;

	cout << "Please input an upward bound." << endl;
	cin >> upperBound;
	cout << "\n Please input a lower bound." << endl;
	cin >> lowerBound;

	// Use time to generate the seed.
	
	//srand(upperBound);
	//srand(lowerBound);	
	
		//Generate four integer numbers based on the bounds.  	 
	cout << rand() % upperBound+1 << endl; 
	cout << rand() % lowerBound+1 << endl;
	cout << rand() % upperBound+1 << endl;
	cout << rand() % lowerBound+1 << endl;

	return 0;
}


