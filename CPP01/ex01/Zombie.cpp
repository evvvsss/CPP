#include "Zombie.hpp"

Zombie:: Zombie() : name("default name") { 
	std::cout << " default constructor" << std::endl;
}

void Zombie:: setName(std::string name) {
	this->name = name;
	std::cout << name << " set name" << std::endl;
}


Zombie:: ~Zombie() {
	std::cout << this->name << " default destructor" << std::endl;
}

void Zombie:: announce()
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}