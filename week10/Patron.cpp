/*****************************
Name: Andrew Michael Calhoun (calhouna)
Email: calhouna@onid.oregonstate.edu
Date: 6/7/2015
Assignment 10

    Patron.cpp - class file to 
    create patron returns and check
    the patron's checked out vectors

******************************/

#include "Patron.hpp"
#include <iostream>

Patron::Patron(std::string idn, std::string n)

{
	idNum = idn;
	name = n;
	fineAmount = 0.0;

}

std::string Patron::getIdNum()
{
	return idNum;

}

std::string Patron::getName()
{
	return name;
}

void Patron::addBook(Book* b)
{
	checkedOutBooks.push_back(b);
}

void Patron::removeBook(Book* b)
{
	//std::cout << "remove Book" << std::endl;
	for(int i=0; i < checkedOutBooks.size(); i++)
	{

		if(checkedOutBooks.at(i) == b)
		{	
			checkedOutBooks.erase(checkedOutBooks.begin()+i);
		}
	}
}

std::vector<Book*> Patron::getCheckedOutBooks()
{
		//std::cout << "Checked Out Book" << std::endl;
		return checkedOutBooks;
}

void Patron::amendFine(double amount)
{
	//std::cout << "Amending fine" << std::endl;
	fineAmount += amount; // adds or subtracts the amount
}

double Patron::getFineAmount()
{
	return fineAmount;
}

