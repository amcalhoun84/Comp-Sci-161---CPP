#include <vector>
#include <algorithm>
#include <iostream>

std::vector<int>findMode(int[], int);

/*int main()
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


}*/

std::vector<int>findMode (int numArray[], int arraySize)
{
		
	int maxFrequency=0, number, frequency=1;
	// int mode=numArray[0];

	std::vector <int> result; 
	std::vector <int> mode;
	std::vector <int> counter;

	 for (int i=0; i<=arraySize; i++)
		{				
			
			// std::cout << "{ " << numArray[i] << " }" << std::endl;


				if (arraySize == 1) 	// While potentially redundant with the later code, this checks that if the array size is one, that we can 
										// just go ahead and terminate the program.
				{

						result.push_back(numArray[0]);	// There is no need to sort, as there is ONLY one element in the array.
						std::cout << numArray[i] << std::endl;
						return result;

				}
				else { 
				
					for (int j = i+1; j<arraySize; j++)
					{
						
						// std::cout << "{ " << numArray[i] << " } vs. { " << numArray[j] << " }" << std::endl;
											
						if (numArray[i] == numArray[j])			
						{

							mode.push_back(numArray[i]);
							std::sort(mode.begin(), mode.end()+1);
							

							for (int c=0; c < mode.size(); c++)
							{
								std::cout << "{ " << numArray[i] << " }" << std::endl;

							}

							//std::cout << frequency << std::endl;
							// std::cout << number << " frequency: " << frequency << std::endl;
							// counter.push_back(frequency++);
							//std::cout << counter[i] << std::endl;
							// std::cout << frequency << std::endl;

								if(frequency >= 2)
								{
									
									maxFrequency = frequency;
									
									number = numArray[i];
									// std::cout << number << std::endl;

									if (numArray[i] == number)
									{
										//std::cout << "Almost there!" << std::endl;
										//std::cout << "Mode is suspected to be: " << number << std::endl;
										result.push_back(number);
										//std::cout << "Mode: " << result[i] << std::endl;
									}
										
								}
							
							else if (numArray[i] < numArray[j])			
							{

								result.push_back(numArray[i]);
								std::cout << result[i] << std::endl;
								// std::cout <<
							}

							else 
							{		
								if (frequency == 1)
								{
									for(int k=0; k < arraySize; k++)
									{
									result.push_back(numArray[k]);
									}
								}
							}
								
						}
												
					}
				}

		}
		std::sort(result.begin(), result.end());
		
		return result;
}
