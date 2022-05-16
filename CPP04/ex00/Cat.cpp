#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Cat Default constructor " << std::endl;
	type = "Cat";
}

Cat::Cat(Cat const & src) : Animal(src)
{
	std::cout << "Cat Copy constructor " << std::endl;
	*this = src;
}

Cat::~Cat()
{
	std::cout << "Cat Default destructor " << std::endl;
}

Cat & Cat::operator=(Cat const &src)
{
	std::cout << "Assignment Cat operator";
	if (this != &src)
		this->type = src.getType();
	return *this;
}

void Cat::makeSound() const
{
	std::cout << "MEOOOOWWWW" << std::endl;
}