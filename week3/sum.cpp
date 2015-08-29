/* Write a program that asks the user to enter two integers and then adds 
** up all the integers between them (inclusive) and displays the total.  The user is 
** allowed to enter the two values in either order - 
** your program will need to figure out which is the lower bound and which is the higher bound.
*/

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;


int main()
	{
		int number1, number2, addup1, lastDigit, lastDigit2, 
			upperBound, lowerBound, total; 

		
		while (number1 != lastDigit)
		{
			cout << "Please input the first integer.\n"; 
			cin >> number1;
			cout << "Please input the second integer.\n";
			cin >> number2;


		for (int x=number1; x <= number1; x++)
		{
			if (number1 >= 100 && number1 <= 999)
			{
			lastDigit = (int)number1 % 100;
			lastDigit += (int)number1 / 100;
			
			lastDigit = (int)number1 / 10;
			lastDigit += (int)lastDigit % 10;
			
			number1 = lastDigit; 
			cout << "You Number is: " << number1 << endl;			
			cout << "The total is: " << lastDigit << endl; 
			

			}

			else if (number1 >= 10 && number1 <= 99)
			{
				lastDigit = number1 % 10;
				lastDigit += number1 / 10;
				cout << "You Number is: " << number1 << endl;			
				cout << "The total is: " << lastDigit << endl; 
			}
			// cout << lastDigit << endl;
		
			else if (number1 <= 9)
			{
				lastDigit = number1;
				cout << "You Number is: " << number1 << endl;			
				cout << "The total is: " << lastDigit << endl; 
			}
			
			else 
			{
				cout << "Please pick a number between 0 and 999." << endl;
				cin >> number1;
			}

		 }

		 for (int x=number2; x<= number2; x++)
		{
			if (number2 >= 100 && number2 <= 999)
			{
			lastDigit2 = (int)number2 % 100;
			lastDigit2 += (int)number2 / 100;
			
			lastDigit2 = (int)number2 / 10;
			lastDigit2 += (int)lastDigit % 10;
			
			number2 = lastDigit; 
			cout << "You Number is: " << number2 << endl;			
			cout << "The total is: " << lastDigit + lastDigit2 << endl; 
			

			}

			else if (number2 >= 10 && number2 <= 99)
			{
				lastDigit2 = number2 % 10;
				lastDigit2 += number2 / 10;
				cout << "You Number is: " << number2 << endl;			
				cout << "The total is: " << lastDigit + lastDigit2 << endl; 
			}
			// cout << lastDigit << endl;
		
			else if (number2 <= 9)
			{
				lastDigit = number2;
				cout << "You Number is: " << number2 << endl;			
				cout << "The total is: " << lastDigit + lastDigit2 << endl; 
			}
			
			else 
			{
				cout << "Please pick a number between 0 and 99." << endl;
				cin >> number2;
			}

		 }
	}

		cout << "You Number is: " << number1 << " & " << number2 << endl;			
		cout << "The total is: " << lastDigit << endl; 

		return 0;
	}
	
