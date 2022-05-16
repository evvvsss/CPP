#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Dog Default constructor " << std::endl;
	type = "Dog";
}

Dog::Dog(Dog const & src) : Animal(src)
{
	std::cout << "Dog Copy constructor " << std::endl;
	*this = src;
}

Dog::~Dog()
{
	std::cout << "Dog Default destructor " << std::endl;
}

Dog & Dog::operator=(Dog const &src)
{
	std::cout << "Assignment Dog operator";
	if (this != &src)
		this->type = src.getType();
	return *this;
}

void Dog::makeSound() const
{
	std::cout << "WOOF-WOOF" << std::endl;
}