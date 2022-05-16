#include "Dog.hpp"

Dog::Dog()
{
	type = "Dog";
	brain = new Brain();
	std::cout << "Dog Default constructor " << std::endl;
}

Dog::Dog(Dog const & src) : Animal(src)
{
	std::cout << "Dog Copy constructor " << std::endl;
	this->type = src.getType();
	this->brain = new Brain(*src.brain);
}

Dog::~Dog()
{
	delete brain;
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

void Dog::getIdea(int i) const
{
	std::cout << this->brain->getIdea(i) << std::endl;
}