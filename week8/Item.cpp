/*****************************************************************
** Name: Andrew Michael Calhoun (calhouna)
** Email: calhouna@onid.oregonstate.edu
** Assignment 5; Date: 05/17/2015
** Description: Item.cpp for the Item Class. Describes the get/setter 
** function protoypes and provides the information for the shopping cart
** class from input.
******************************************************************/ 

#include "Item.hpp"
using namespace std;

// Default Constructor
Item::Item()		
{
	
	setName("");
	setPrice(0.0);
	setQuantity(0);
}

// Constructor
Item::Item(string s, double x, int y)
{
	setName(s);
	setPrice(x);
	setQuantity(y);
}


// Sets the name of the item from input.
void Item::setName(string n)
{
	name = n;
}

// Sets the price of the item from input.
void Item::setPrice(double prc)
{
	price = prc;
}

// Sets the quantity of the item from input.
void Item::setQuantity(int quant)
{
	quantity = quant;

}

// Returns the name from the input
string Item::getName()
{
	return name;
}

// Returns the price from the input
double Item::getPrice()
{
	return price;
}

// Returns the quantity from the input
int Item::getQuantity()
{
	return quantity;
}



