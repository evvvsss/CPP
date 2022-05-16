#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Default Brain constructor" << std::endl;
	for (int i = 0; i < 100; i++)
		this->ideas[i] = "My interesting idea № " + std::to_string(i);
}

Brain::Brain(Brain const & src)
{
	std::cout << "Copy Brain constructor" << std::endl;
	for (int i = 0; i < 100; i++)
		this->ideas[i] = src.ideas[i];
}

Brain::~Brain()
{
	std::cout << "Default Brain destructor" << std::endl;
}

Brain &Brain::operator=(Brain const &src)
{
	std::cout << "Assignment Brain operator" << std::endl;
	if (this != &src)
	{
		for (int i = 0; i < 100; i++)
			this->ideas[i] = src.getIdea(i);
	}
	return *this;
}

std::string Brain::getIdea(int i) const{
	return this->ideas[i];
}