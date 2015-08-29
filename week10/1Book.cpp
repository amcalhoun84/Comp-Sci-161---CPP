/*********************************************************************  
** Program Filename: book.cpp
** Author: Andrew M. Calhoun
** Date: 7/8/2015
** Description: Item Source File, informs class members or data.
				Sub-class of item class.
** Input: Book Header File.
** Outut: N/A
***********************************************************************/ 
#include "book.hpp"

Book::Book()
{
	this->itemID = "BK" + "0"; // Books start with prefix BK
	this->length = 0;
	this->title = "Null Book";
	this->author = "John Smith";
	this->publisher = "Null Publisher";
	this->Format = 100;
	this->Genre = 100;
	this->Location = 100;
	this->onReserve = false;
	this->unique = false;

}

Book::Book(int itID, int lgt, std::string ttl, std::string auth, std::string publisher, Genre gnr, Location lcl, Format fmt, bool onRev, bool uniq)
{
	this->itemID = itID;
	this->length = lgt;
	this->title = title;
	this->author = auth;
	this->publisher = publisher;
	this->genre = gnr;
	this->location = lcl;
	this->onReserve = onRev;
	this->unique = uniq;
	this->format = getFormat(fmt)

}

std::string getAuthor()
{
	return author;
}

std::string getFormat()
{
	if(fmt == 0)
	{
		fmt = "Hardcover";
	}
	else if(fmt == 1)
	{
		fmt = "Paperback";
	}
	else if(fmt == 2)
	{
		format = "Volume";
	}
	else if(fmt == 3)
	{
		format = "Free-Leaf/Unbound";
	}
	else 
	{
		std::cout << "Invalid Input, please try again. " << std::endl;
		return "null";
	}

	return format;
}


