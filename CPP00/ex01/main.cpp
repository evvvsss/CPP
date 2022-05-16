#include "Contact.hpp"
#include "PhoneBook.hpp"
#include <iostream>

int main ()
{
	std::string cmd;

	PhoneBook book;
	std::cout << "Helloo! WELCOME TO PHONEBOOK" << std::endl;
	while (cmd != "EXIT")
	{
		if (std::cin.eof())
     		break;
		std::cin >> cmd;
		if (cmd == "ADD")
		{
			book.addContact();
		}
		else if (cmd ==  "SEARCH")
		{
			book.searchContact();
		}
		else
		{
			if (cmd != "EXIT")	
				std::cout << "Invalid input " << std::endl;
		}
		
	}
	return (0);
}