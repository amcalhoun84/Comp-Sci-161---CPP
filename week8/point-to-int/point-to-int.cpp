// Pointer Practice

#include <iostream>
#include <cmath>
using namespace std;

void ptrToInt (int*, int*, int*);

int main ()

{
	int num1;
	int num2;
	int num3;
	
	cout << "What is your first number?" << endl;
	cin >> num1;
	cout << "What is your second number?" << endl;
	cin >> num2;
	cout << "What is your third number?" << endl;
	cin >> num3; 


	cout << "Your original sort:\n";
	cout << num1 << " Address: " << long(&num1) << endl;
	cout << num2 << " Address: " << long(&num2) << endl;
	cout << num3 << " Address: " << long(&num3) << endl;

	ptrToInt(&num1, &num2, &num3);
	return 0;
}


void ptrToInt(int *num1, int *num2, int *num3)

{

	int *newPtr[] = {num1, num2, num3};
	int arraySize = *newPtr.size();


	for (int i=0; i < 3; i++)
	{
		if(*newPtr[i] > *newPtr[i+1])
			{
				int *temp = newPtr[i];
				cout << *temp << endl;
				newPtr[i+1] = newPtr[i];
				newPtr[i] = temp;
			}
		
	}
	cout << "Your sorted array looks like: \n";
	cout << *num1 << endl; cout << *num2 << endl; cout << *num3 << endl;

}