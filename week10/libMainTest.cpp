#include "Book.hpp"
#include "Library.hpp"
#include "Patron.hpp"

#include <string>
#include <iostream>
// using namespace std;


int main()
{
	Library l;
	Book* bk = NULL;
	Patron* pt = NULL;

	int input;


	do {

	std::string bIdCode = "";
	std::string bTitle = "";
	std::string bAuthor = "";
	std::string pIdNum = "";
	std::string pName = "";
	double pay = 0.0;


	std::cout << "Library Simulator" << std::endl;
	std::cout << "1. Add Book" << std::endl;
	std::cout << "2. Add Patron" << std::endl;
	std::cout << "3. Check Out Book" << std::endl;
	std::cout << "4. Return Book" << std::endl;
	std::cout << "5. Request Book" << std::endl;
	std::cout << "6. Pay Fine" << std::endl;
	std::cout << "7. Increment Date" << std::endl;
	std::cout << "8. View Book" << std::endl;
	std::cout << "9. View Patron" << std::endl;
	std::cout << "0. Quit" << std::endl;

	std::cout << "Please input your choice:" << std::endl;
	std::cin >> input;

	switch (input)

	{
	
		case 1:
		{

			std::cin.ignore();
			std::cout << "Book idCode: ";
			std::getline(std::cin, bIdCode);
			std::cout << "Book Title: ";
			std::getline(std::cin, bTitle);
			std::cout << "Book Author: ";
			std::getline(std::cin, bAuthor);

			bk = new Book(bIdCode, bTitle, bAuthor);

			l.addBook(bk);
			break;
		}

		case 2:
		{	

			std::cin.ignore();
			std::cout << "Patron Id Num:\n";
			std::getline(std::cin, pIdNum);
			std::cout << "Patron Name:\n";
			std::getline(std::cin, pName);

			pt = new Patron(pIdNum, pName);

			l.addPatron(pt);
			break;
			
		}

		case 3:
		{
			std::cin.ignore();
			std::cout << "Book ID Code:\n";
			std::getline(std::cin, bIdCode);
			std::cout << "Patron ID Number:\n";
			std::getline(std::cin, pIdNum);

			l.checkOutBook(pIdNum, bIdCode);
			break;

		}

		case 4: 
		{
			std::cin.ignore();
			std::cout << "Book Book Id Code\n";
			std::getline(std::cin, bIdCode);

			l.returnBook(bIdCode);
			break;

		}

		case 5:
		{
			std::cin.ignore();
			std::cout << "Requesting Patron ID Number:\n";
			std::getline(std::cin, pIdNum);
			std::cout << "Requested Book ID Code\n";
			std::getline(std::cin, bIdCode);

			l.requestBook(pIdNum, bIdCode);
			break;
			
		}
		case 6: 
		{
			std::cin.ignore();
			std::cout << "Patron owing fine ID Number\n";
			std::getline(std::cin, pIdNum);
			std::cout << "Fine Payment\n";
			std::cin >> pay;

			l.payFine(pIdNum, pay);
			break;
			
		}

		case 7:
		{
			std::cout << "Incrementing date..." << std::endl;
			l.incrementCurrentDate();
			break;
		
		}

		case 8:
		{
			std::cin.ignore();
			std::cout << "Book ID Code" << std::endl;
			std::getline(std::cin, bIdCode);
			l.getBook(bIdCode);
			break;
		}

		case 9:
		{
			std::cin.ignore();
			std::cout << "Patron ID Code" << std::endl;
			std::getline(std::cin, pIdNum);
			l.getPatron(pIdNum);
			break;
		}

		case 0:
		{
			return 0;
		}
		default:
		{
			std::cout << "Not a valid input.\n\n";
			break;
		}

	} 
}while(input != 0);
	
}