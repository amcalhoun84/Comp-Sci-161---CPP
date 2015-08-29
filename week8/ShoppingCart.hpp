/*****************************************************************
** Name: Andrew Michael Calhoun (calhouna)
** Email: calhouna@onid.oregonstate.edu
** Assignment 5; Date: 05/9/2015
** Description: The shopping cart class header. Demonstrating the
** usage of pointers to store objects in memory for later use and
** comparison.
******************************************************************/ 

#include "Item.hpp"

#ifndef SHOPPINGCART_HPP
#define SHOPPINGCART_HPP


class ShoppingCart 
{
private:
	static const int ARRSIZE = 100; // Array size restrictor
	Item *itemArray[ARRSIZE];		// Item Array
	int arrayEnd;					// the arrayEnd

public:
	void addItem(Item*);	// Adds the pointed-to-item to the array 
	double totalPrice();	// Calculates the total price

	ShoppingCart();			// default constructor

};

#endif