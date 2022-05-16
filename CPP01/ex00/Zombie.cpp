#include "Zombie.hpp"

Zombie:: Zombie() {
	std::cout << "default constructor" << std::endl;
}

Zombie:: Zombie(std::string name) {
	this->name = name;
	std::cout << name << " constructor" << std::endl;
}


Zombie:: ~Zombie() {
	std::cout << this->name << " default destructor" << std::endl;
}

void Zombie:: announce()
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}