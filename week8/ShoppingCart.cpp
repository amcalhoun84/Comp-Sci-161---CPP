/*****************************************************************
** Name: Andrew Michael Calhoun (calhouna)
** Email: calhouna@onid.oregonstate.edu
** Assignment 5; Date: 05/9/2015
** Description: The shopping cart class source file. Demonstrating the
** usage of pointers to store objects in memory for later use and
** comparison.
******************************************************************/ 

#include "ShoppingCart.hpp"
using namespace std;


ShoppingCart::ShoppingCart()		// Default Constructor
{
	
	arrayEnd = 0;

	for (int i = 0; i < ARRSIZE; i++)
	{
		itemArray[i] = NULL;
	}
}

void ShoppingCart::addItem(Item *newItem)
{
		itemArray[arrayEnd] = newItem;
		arrayEnd++;	
}

double ShoppingCart::totalPrice()
{

	double totalPrice;

		for (int i = 0; i < arrayEnd; i++)
			{
				totalPrice += itemArray[i]->getQuantity() * itemArray[i]->getPrice();
			
			}
			return totalPrice;
		
}