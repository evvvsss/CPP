#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	type = "WrongAnimal";
	std::cout << "Default WrongAnimal constructor" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const & src)
{
	std::cout << "WrongAnimal Copy constructor" << std::endl;
	*this = src;
}

WrongAnimal & WrongAnimal::operator=(WrongAnimal const & src)
{
	std::cout << "Assignment WrongAnimal operator";
	if (this != &src)
	{
		type = src.type;
	}
	return *this;
}

std::string	WrongAnimal::getType() const 
{
	return type;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor "<< std::endl;
}

void WrongAnimal::makeSound() const
{
	std::cout << "WrongAnimal says wrong sounds!" << std::endl;
}


std::ostream &	operator<<(std::ostream & out, WrongAnimal const & a)
{
	out << "Type is " << a.getType() << std::endl;
	return out;
}
