#include <iostream>
#include <string>
#include <cctype>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

bool stringIsInt(string);
bool stringIsFloat(string);

// int main()
// {
// 	string inputString; 

// 	cout << "Please input a number, either an integer or decimal.\n";
// 	getline(cin, inputString);

// 	cout << "The truth value of your integer is: " << stringIsInt(inputString) << endl;
// 	return 0;
// }

bool stringIsInt(string intString)
{
	bool valid = true;
	int i = 0;
	char c;
	int size = intString.size();

	for(int j = 0; j<size; j++)
	{
			c = intString[j];
			// cout << intString[j] << endl;
			// cout << c << endl;
	}	

	if(size <= 1)
	{
		if(intString[0] == '-' || intString[0] == '+' || intString[0] == char(32) || intString[0] == ' ' || intString[0] == '\0')
		{
			return false;
		}

	}
	else 
	{
		do
		{
			c = intString[i];
			if(isdigit(intString[i]) || intString[0] == '-' || intString[0] == '+' || intString[0] == '\0')
			{
				i++;
				valid=true;
				//cout << "Good!\n";

			}
			else if(intString[i] == char(32))
			{
				valid = false;
				//cout << "Another space!\n";
				break;
			}

			// else if(c == char(32))
			// {
			// 	i++;
			// 	valid = false;
			// 	cout << "Bad!\n";
			// 	break;
			// }

			else
			{
				i++;
				valid = false;
				//cout << "Bad!\n";
				break;
			}
		}
		while(intString[i] != '\0');
	}
	return valid;

}

bool stringIsFloat(string)
{
	return false;
}