#include "PhoneBook.hpp"
#include "Contact.hpp"

PhoneBook:: PhoneBook(): id(0) {};
PhoneBook:: ~PhoneBook() {};

void PhoneBook::addContact()
{
	if (this->id >= 8)
	{
		std::cout << "!!! NOT ENOUGH MEMORY. The oldest contact will be deleted." << std::endl;
		this->contacts[this->id % 8].newContact(this->id);
	}
	else
		contacts[this->id].newContact(this->id);
	std::cout << "Success!!!!" << std::endl;
	this->id++;
}	

void PhoneBook::searchContact()
{
	int num = 0;
	std::cout << std::endl;
	std::cout << "Index     |";
	std::cout << " First name|";
	std::cout << " Last name|";
	std::cout << " Nickname  " << std::endl;
	
	for (int i = 0; i < 8 && i < this->id; i++)
	{
		this->contacts[i].displayContact();
		std::cout << std::endl;
	}
	std::cout << " PLEASE CHOOSE THE INDEX YOU NEED: " << std::endl;
	std::cin >> num;
	if (std::cin.eof())
     	return;
	if (num <= 8 && num < this->id + 1 && num > 0)
	{
		 this->contacts[num - 1].displayMoreContact();
	}
	else 
		std::cout << " THE INDEX IS OUT OF RANGE " << std::endl;
}