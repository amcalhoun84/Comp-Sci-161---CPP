#include <iostream>
#include <string>

	double baseballCost;
	double numberOfBaseballs;
	double totalCost;

int main()

{

	std::cout << "How much does a baseball cost in $?" << std::endl;
	std::cin >> baseballCost;
	std::cout << "How many baseballs did your team buy?" << std:: endl;
	std::cin >> numberOfBaseballs;
	totalCost = baseballCost * numberOfBaseballs;
	std::cout << "Your team spent: $" << totalCost;
	std::cout << "." << std::endl;

	return 0;

}