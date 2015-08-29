/*****************************************************************
** Name: Andrew Michael Calhoun (calhouna)
** Email: calhouna@onid.oregonstate.edu
** Assignment 5; Date: 05/17/2015
** Description: Item.hpp for the Item Class. Stores the get/setter 
** function protoypes and variables.
******************************************************************/ 

#include <string>
using namespace std;

#ifndef ITEM_HPP
#define ITEM_HPP

class Item
{
private:     // Private Data Variables.
	string name;
	double price;
	int quantity;

public:
	// Setter Functions
	void setName(string);
	void setPrice(double);
	void setQuantity(int);

	// Getter Functions
	string getName();
	double getPrice();
	int getQuantity();

	Item();	// Default Constructor
	Item(string, double, int);	// Constructor
	
};

#endif