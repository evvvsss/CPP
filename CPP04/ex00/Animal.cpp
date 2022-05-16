#include "Animal.hpp"

Animal::Animal()
{
	type = "Animal";
	std::cout << "Default Animal constructor" << std::endl;
}

Animal::Animal(Animal const & src)
{
	std::cout << "Animal Copy constructor" << std::endl;
	*this = src;
}

Animal & Animal::operator=(Animal const & src)
{
	std::cout << "Assignment Animal operator";
	if (this != &src)
	{
		type = src.type;
	}
	return *this;
}

std::string	Animal::getType() const 
{
	return type;
}

Animal::~Animal()
{
	std::cout << "Animal destructor "<< std::endl;
}

void Animal::makeSound() const
{
	std::cout << "Animal makes a specific sound!" << std::endl;
}

std::ostream &	operator<<(std::ostream & out, Animal const & a)
{
	out << "Type is " << a.getType() << std::endl;
	return out;
}
