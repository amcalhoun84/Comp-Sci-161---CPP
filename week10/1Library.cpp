/*****************************
Name: Andrew Michael Calhoun (calhouna)
Email: calhouna@onid.oregonstate.edu
Date: 6/7/2015
Assignment 10

    Library.cpp - class file to 
    create library returns and check
    the fines, books, etc.

******************************/

#include "Library.hpp"
#include <iostream>

Library::Library()
{

	currentDate = 0;
}


// Adds a book if the ID is uniqe.

void Library::addBook(Book* b)
{
	std::string idCode = b->getIdCode();

	if(getBook(idCode) != NULL)
	{
		std::cout << "Book already in system" << std::endl;
		return;
	}
	holdings.push_back(b);
}


// Adds a patron if the ID is uniqe.

void Library::addPatron(Patron* p)
{
	std::string idNum = p->getIdNum();

	if(getPatron(idNum) != NULL)
	{
		std::cout << "Patron already in system!" << std::endl;
		return;
	}
	

	 members.push_back(p);
}


// get Patron, gets patron information if it exists.

Patron* Library::getPatron(std::string pID)
{
	for (int i=0; i < members.size(); i++)
	{
	if (members.at(i)->getIdNum() == pID)
			{ 
				/* For Debugging
				std::cout << "Hi! We have a patron!" << std::endl;
				std::cout << "ID: " << members.at(i)->getIdNum() << std::endl;
				std::cout << "Name: " << members.at(i)->getName() << std::endl;
				std::cout << "FineAmount: " << members.at(i)->getFineAmount() << std::endl;
			//	std::cout << members.at(i)->getCheckedOutBooks().at(i) << std::endl;
				std::cout << members.at(i) << std::endl;*/
				return members.at(i); 
			}
		
	}

	return NULL;
}

// Get Book - gets the book information if it exists

Book* Library::getBook(std::string bID)
{
//	std::cout << "getIdCode getBook" << std::endl;

	for (int i =0; i < holdings.size(); i++)
	{
		if(holdings.at(i)->getIdCode() == bID)
		{
			/* Debugging 
			std::cout << "Hi! We have a book!" << std::endl;
			std::cout << "Title: " << holdings.at(i)->getTitle() << std::endl;
			std::cout << "IdCode: " << holdings.at(i)->getIdCode() << std::endl;
			std::cout << "Author: " << holdings.at(i)->getAuthor() << std::endl;
			std::cout << "Location: " << holdings.at(i)->getLocation() << std::endl;
			std::cout << "Requested By: " << holdings.at(i)->getRequestedBy() << std::endl;
			std::cout << "Checked Out By: " << holdings.at(i)->getCheckedOutBy() << std::endl;
			*/
			return holdings.at(i);
		}

	}

	return NULL;
}

/**********************************

	CHECKOUT BOOK

	Checks for the book, checks to see
	if it exists, if it is on hold,
	if its requested or free and
	then assigns it to the patron if
	it is free or requested by it.

***********************************/

std::string Library::checkOutBook(std::string pID, std::string bID)
{

	Book* b;
	Patron* p;
	bool pExist = false, bExist = false;

	if(holdings.empty () || members.empty())
	{
		if(holdings.empty())
		{
		//	std::cout << "Warning! Empty Vector!" << std::endl;
			return "book not found";
		}

		else if (members.empty())
		{
		//	std::cout << "Warning! Empty Vector!"  << std::endl;
			return "patron not found";

		}

	}


	for(int i=0; i<holdings.size(); i++)
	{
		if(bID == holdings.at(i)->getIdCode())
		{
			/* Debugging ... 

			std::cout << "Hi! We have a book!" << std::endl;
			std::cout << holdings.at(i)->getTitle() << std::endl;
			std::cout << holdings.at(i)->getIdCode() << std::endl;
			std::cout << holdings.at(i)->getAuthor() << std::endl;
			std::cout << holdings.at(i)->getLocation() << std::endl;
			std::cout << holdings.at(i)->getRequestedBy() << std::endl;
			std::cout << holdings.at(i)->getCheckedOutBy() << std::endl;
*/
			b = holdings.at(i);
			bExist = true;
			break;
		}

	}

	for(int i=0; i<members.max_size(); i++)
	{
		if(pID == members.at(i)->getIdNum())
		{
	/*			std::cout << "Hi! We have a patron!" << std::endl;
				std::cout << members.at(i)->getIdNum() << std::endl;
				std::cout << members.at(i)->getName() << std::endl;
				std::cout << members.at(i)->getFineAmount() << std::endl;
				std::cout << members.at(i) << std::endl;*/
				p = members.at(i);
				pExist = true;
				break;
		}
		

	}

	// If Book is on hold by other patron and the requesting patron ID does not match.
	if(b->getLocation() == ON_HOLD_SHELF && b->getRequestedBy() != p)
	{
	//	std::cout << "book on hold by other patron" << std::endl;
		return "book on hold by other patron";
	}

	// if the book is already checked out, return that book is already checked out.
	else if(b->getLocation() == CHECKED_OUT)
	{
	//	std::cout << "book is already checked out" << std::endl;
		return "book already checked out";
	}
	else	// checks out the book to requesting patron if conditions are met
	{
	//	std::cout << "check out successful" << std::endl;
		b->setLocation(CHECKED_OUT);
		b->setRequestedBy(NULL);
		b->setCheckedOutBy(p);
		b->setDateCheckedOut(currentDate);
		p->addBook(b);

		return "check out successful";

	}
	if(pExist == false)	// False Catch, otherwise returned false all the time, which broke the program.
	{
			std::cout << "chkout ptn not found" << std::endl;
			return "patron not found";
	}

	if(bExist == false) // False Catch, otherwise returned false all the time, which broke the program.
	{
			std::cout << "chkout book not found" << std::endl;
			return "book not found";
	}

}


/**********************************

	RETURN BOOK

	Returns the book, checks to see
	if it exists, the holdings exist,
	if its requested or free and
	then places it on the proper shelf.

***********************************/



std::string Library::returnBook(std::string bID)
{
	
	Book* b;
	Patron* p;
	Patron *req;

	if(holdings.empty () || members.empty())
	{
		if(holdings.empty())
		{
		//	std::cout << "Warning! Empty Vector!" << std::endl;
			return "book not found";
		}

		else if (members.empty())
		{
		//	std::cout << "Warning! Empty Vector!"  << std::endl;
			return "patron not found";

		}

	}

	for(int i=0; i<holdings.size(); i++)
	{
		if(holdings.at(i)->getIdCode() == bID)
		{
			b = holdings.at(i);
		
		/*  Debugging
			std::cout << "One of the Book Titles: " << b->getTitle() << std::endl;
			std::cout << "Book checked out by: " << b->getCheckedOutBy() << std::endl;
			std::cout << "Book requested by: " << b->getRequestedBy() << std::endl;	
		*/
			{
				if(b->getLocation() != CHECKED_OUT)
				{
					return "book already in library";
				}
				else if(b->getLocation() == CHECKED_OUT)
				{
					if(b->getRequestedBy() != NULL)
						{
						p = b->getCheckedOutBy();
						p->removeBook(b);
						//std::cout << b->getRequestedBy() << std::endl;
						b->setCheckedOutBy(NULL);
						b->setLocation(ON_HOLD_SHELF);
						//std::cout << "requested return successful\n";
						return "return successful";
						}
					else
						{
						p = b->getCheckedOutBy();
						p->removeBook(b);
						b->setCheckedOutBy(NULL);
						b->setLocation(ON_SHELF);
						//std::cout << "non-requested return successful\n";
						return "return successful";
						}
				}
			}
		}
		
	}

	// There was no need for a false catch here.

	// std::cout << "return book not found" << std::endl;
	return "book not found";

	
	{


	}
	
}

/**********************************

	Request Book, checks to see
	if the holding/patron vector exists,
	then goes through the holdings and
	members to find the book and patron,
	then returns information based on
	the location of the book and places
	it on hold if avaialble. 

***********************************/

std::string Library::requestBook(std::string pID, std::string bID)
{

	Book* b;
	Patron* p;
	bool pExists = false, bExists = false;

	if(holdings.empty () || members.empty())
	{
		if(holdings.empty())
		{
		//	std::cout << "Warning! Empty Vector!" << std::endl;
			return "book not found";
		}

		else if (members.empty())
		{
		//	std::cout << "Warning! Empty Vector!"  << std::endl;
			return "patron not found";

		}

	}

	for (int i=0; i<holdings.size(); i++)
	{
		if(bID == holdings.at(i)->getIdCode())
		{
		//	std::cout << "Holdings Found Requested";
			b = holdings.at(i);
			break;
		}
		
	}

	for(int i=0; i<members.size(); i++)
	{ 
		if(pID == members.at(i)->getIdNum())
		{

			p = members.at(i);
			break;
		}

	}

	if(b->getLocation() == ON_SHELF || b->getLocation() == CHECKED_OUT)	// Requested Book is either On Hold SHelf or checked Out
	{
		b->setRequestedBy(p);
	//	std::cout << "request successful" << std::endl;
		return "request successful";

	}
	else if (b->getLocation() == ON_HOLD_SHELF)	// Check to see if a Patron has the book on hold.
	{
	//	std::cout << "book on hold by other patron" << std::endl;
		return "book on hold by other patron";
	}

	if(bExists == false)	// False catch; placing it in the loop returned bad results.
	{
	//std::cout << "Requested book not found" << std::endl;
	return "book not found";
	}

	if(pExists = false) // False catch; placing it in the loop returned bad results.
	{
	//std::cout << "Requesting patron not found" << std::endl;
	return "patron not found";
	}
		
}

/****************************
		PAY FINE

Searches for a patron, determines
if they have a fine, and then
allows them to pay it.

*****************************/

std::string Library::payFine(std::string pID, double payment)
{
	Patron *p;
	bool pExists = false;

	if(members.empty () == true)
	{
	//	std::cout << "No patrons..." << std::endl;
		return "patron not found";
	}

	for (int i=0; i<members.size(); i++)
	{
		if (pID == members.at(i)->getIdNum())
		{
			p = members.at(i);

			// std::cout << "fine: " << p->getFineAmount() << std::endl;
			// std::cout << "payment:" << payment << std::endl;
			p->amendFine(-payment);

			// std::cout << "fine now: " << p->getFineAmount() << std::endl;
			// std::cout << "payment successful" << std::endl;
			pExists = true;

			return "payment successful";

		}
	}

	if(pExists == false)  // False Catch
	{
	// std::cout << "patron not found" << std::endl;
	return "patron not found";
	}
}


/*****************************************

	Increment Date Function: Find out
		if Patron is delinquent on
		their books and if so, fine
		them appropriately. At this
		current point in time, it is
		0.10 per day. I have created a
		constant for the daily fine called
		FINE, so that if we need to update
		it in the future, it will be easy
		to fix, especially if the project
		needs to be expanded.

*****************************************/
	

void Library::incrementCurrentDate()
{
	Patron* p;	//	Patron Pointer
	Book* b;	//	Book Pointer

	currentDate++;	// Increment the Date each time this passes.
	for (int i=0; i<members.size(); i++)
	{
		p = members.at(i);

		if(p->getCheckedOutBooks().empty() == false)	// Make sure there is no empty checkoutBooks.
		{
			for (int j=0; j<(p->getCheckedOutBooks().size()); j++)
			{
				b = p->getCheckedOutBooks().at(j);

				if(currentDate - (b->getDateCheckedOut()) > Book::CHECK_OUT_LENGTH)	// Comparison of Time Book is Out vs. the CheckOut Length
				{
					members.at(i)->amendFine(FINE);	// Add the fine to the patron's address/profile.
			
				}
			}

		}
	}
}