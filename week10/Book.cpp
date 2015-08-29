/*********************************************************************  
** Program Filename: book.cpp
** Author: Andrew M. Calhoun
** Date: 7/8/2015
** Description: Item Source File, informs class members or data.
				Sub-class of item class.
** Input: Book Source File. Needed to build program.
** Outut: N/A
***********************************************************************/ 

#include <iostream>
#include "book.hpp"

/*********************************************************************
** Function: Book::Book()
** Description: Item Book Subclass Default Constructor
** Parameters: N/A
** Pre-Conditions: N/A
** Post-Conditions: N/A
*********************************************************************/ 

Book::Book()
{
	this->itemID = "BK-0"; // Books start with prefix BK
	this->length = 0;
	this->title = "Null Book";
	this->author = "John Smith";
	this->publisher = "Null Publisher";
	this->fmt = NO_FORMAT;
	this->gnr = NOGENRE;
	this->lctn = NOLOCATION;
	this->onReserve = false;

}
/*********************************************************************
** Function: Book::Book
** Description: Item Book Subclass Constructor
** Parameters:(std::string itID, std::string title, std::string auth, 
**	std::string publisher, int length, FormatBK fmtBK, Genre gnr, Location lcl,
**	 bool onRev)
**
** Pre-Conditions: User creates a book object and inputs data.
** Post-Conditions: New book object is created and saved to memory.
*********************************************************************/ 
Book::Book(std::string itID, std::string title, std::string auth, std::string publisher, int length, FormatBK fmtBK, Genre gnr, Location lcl, bool onRev)
{
	this->itemID = "BK-" + itID;
	this->length = length;
	this->title = title;
	this->author = auth;
	this->publisher = publisher;
	this->gnr = gnr;
	this->lctn = lcl;
	this->onReserve = onRev;
	this->fmtBK = fmtBK;
	this->onReserve = onRev;


}

/*********************************************************************
** Function: Book::getFormatBK()
** Description: Gets the format of the object.
** Parameters: N/A
** Pre-Conditions: User is looking at book object and has a getFormatBK call.
** Post-Conditions: Format returned to function call, informs user what
**					book's format is.
*********************************************************************/ 

std::string Book::getFormatBK()
{
	if(fmtBK == HARDCOVER)
	{
		format = "Hardcover";
	}
	else if(fmtBK == PAPERBACK)
	{
		format = "Paperback";
	}
	else if(fmtBK == VOLUME)
	{
		format = "Volume";
	}
	else if(fmtBK == FREE_LEAF)
	{
		format = "Free-Leaf/Unbound";
	}
	else 
	{
		return "NO FORMAT";
	}

	return format;
}


