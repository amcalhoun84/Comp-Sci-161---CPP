#include <iostream>
#include <algorithm>
#include <vector>

int findMode(int[], int);

int main()
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


}

int findMode (int numArray[], int num)
{

	std::vector<int> mode (numArray, numArray+num);
	int	modeMax = 0; 
	int result = 0;
	
	 for (int i = 1; i < num; i++)
		{
		mode.push_back(numArray[i]);
		// std::cout << numArray[i] << std::endl;
		
		}

		int frequency = 0;
 		std::sort(mode.begin(), mode.end());
	
		for (int j=1; j < mode.size(); j++)
		{
		if(mode[j] == mode[j+1])
		{
			++frequency;
			std::cout << frequency << std::endl;

			if (frequency > modeMax) {

				modeMax = frequency; 
				result = mode[j+1];
				frequency = 0;
			//	std::cout << result << std::endl;
			}
			else if (modeMax == 0) {
				result = modeMax;
				frequency = 0;
			}

		}
		else frequency = 0;
	}

	if (result == 0) 
	{
		std::cout << "There is no mode.\n";
	}
	else
	{
		std::cout << "The mode is: " << result << std::endl;
	}

	return result;

}

	