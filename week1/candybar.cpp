// Candy Bar Collection Space

#include <iostream>
#include <string>
using namespace std;

int main()

{	

	int candy;
	float cost;
	float results;

	cout << "How many candy bars have you sold?" << endl; 
	cin >> candy;
	cout << "How much is each candy bar?" << endl;
	cin >> cost; 
	results = candy * cost;
	cout << "Your organization has made $" << results;
	cout << "." << endl;

	return 0;

}