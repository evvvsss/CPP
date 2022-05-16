#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	std::cout << "WrongCat Default constructor " << std::endl;
}

WrongCat::WrongCat(WrongCat const & src) : WrongAnimal(src)
{
	std::cout << "WrongCat Copy constructor " << std::endl;
	*this = src;
}

WrongCat::~WrongCat()
{
	std::cout << "Cat Default destructor " << std::endl;
}

WrongCat & WrongCat::operator=(WrongCat const &src)
{
	std::cout << "Assignment WrongCat operator";
	if (this != &src)
		this->type = src.getType();
	return *this;
}

void WrongCat::makeSound() const
{
	std::cout << "Wrong meow..." << std::endl;
}