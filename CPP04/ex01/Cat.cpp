#include "Cat.hpp"

Cat::Cat()
{
	type = "Cat";
	brain = new Brain();
	std::cout << "Cat Default constructor " << std::endl;
}

Cat::Cat(Cat const & src) : Animal(src)
{

	std::cout << "Cat Copy constructor " << std::endl;
	this->type = src.getType();
	this->brain = new Brain(*src.brain);
}

Cat::~Cat()
{
	delete brain;
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

void Cat::getIdea(int i) const
{
	std::cout << this->brain->getIdea(i) << std::endl;
}