#include "Contact.hpp"
#include <iomanip>

Contact:: Contact () : index(0) {};
Contact:: ~Contact () {};

void Contact::newContact(int id)
{
	std::cout << "ADDING NEW CONTACT" << std::endl;
	std::cout << "First name: " << std::endl;
	std::cin >> this->first_name;
	std::cout << "Last name: " << std::endl;
	std::cin >> this->last_name;
	std::cout << "Nickname: " << std::endl;
	std::cin >> this->nickname;
	std::cout << "Phone number: " << std::endl;
	std::cin >> this->phone_number;
	std::cout << "Darkest secret: " << std::endl;
	std::cin >> this->darkest_secret;
	this->index = id % 8;
}

void Contact::cut (std::string line)
{
	if (line.length() > 10)
		std::cout << line.substr(0, 9) << ".";
	else
		std::cout << std::setw(10) << line;
}

void Contact::displayContact()
{

	this->cut(std::to_string(this->index + 1));
	std::cout << "|";
	this->cut(this->first_name);
	std::cout << "|";
	this->cut(this->last_name);
	std::cout << "|";
	this->cut(this->nickname);
}

void Contact::displayMoreContact()
{
	std::cout << "Index:";
	this->cut(std::to_string(this->index + 1));
	std::cout << "\nFirst name:" << this->first_name << std::endl;
	std::cout << "Last name:" << this->last_name << std::endl;
	std::cout << "Nickname:" << this->nickname << std::endl;
	std::cout << "Phone number:" << this->phone_number << std::endl;
	std::cout << "Secret:" << this->darkest_secret << std::endl;
}