
// Baseball Challenge Program

#include <iostream>
#include <ctime>
#include <cmath>
#include <iomanip>
using namespace std;

int main() 
{

	const double CLASS_A_SEATS = 15.00;
	const double CLASS_B_SEATS = 12.00;
	const double CLASS_C_SEATS = 9.00; 
	const double STATE_TAX = 0.0975;
	
	int soldASeats, soldBSeats, soldCSeats;
	float revenue; 
	float totalCallIn;  

	cout << "How many Class A Seats have been sold?" << endl;
	cin >> soldASeats;
	cout << "How many Class B Seats have been sold?" << endl;
	cin >> soldBSeats;   
	cout << "How many Class C Seats have been sold?" << endl;
	cin >> soldCSeats;
	cout << endl;

	revenue = (CLASS_A_SEATS * soldASeats) + (CLASS_B_SEATS * soldBSeats) + 		  (CLASS_C_SEATS * soldCSeats);	   
	totalCallIn = revenue + (revenue * STATE_TAX);

	cout << fixed; 
	cout << "You have sold $" << setprecision(2) << revenue << " worth of seats." << endl;
	cout << "With taxes, a total of $" << totalCallIn << " was brought in." 		<< endl;
	 
	return 0;	
	
}
