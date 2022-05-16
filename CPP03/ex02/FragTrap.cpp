#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	this->name = "default name";
	this->health = 100;
	this->energy = 100;
	this->damage = 30;
	std::cout << "FragTrap setting name constructor" << std::endl;
}

FragTrap::FragTrap(std::string name)
{
	this->name = name;
	this->health = 100;
	this->energy = 100;
	this->damage = 30;
	std::cout << "FragTrap setting name constructor" << std::endl;
}

FragTrap::FragTrap(FragTrap const &src)
{
	std::cout << "FragTrap Copy constructor" << std::endl;
	*this = src;
	return;
}
FragTrap::~FragTrap()
{
	std::cout << "FragTrap Default destructor" << std::endl;

}

FragTrap & FragTrap::operator=(FragTrap const &src)
{
	std::cout << "Assignement FragTrap operator\n ";
	if (this != &src)
	{
		this->name = src.getName().append("FragCopy");
		this->energy = src.getEnergy();
		this->damage = src.getDamage();
		this->health = src.getHealth();
	}
	return *this;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << this->name << " gives VIRTUAL HIGH FIVE :)" << std::endl;
}

void FragTrap::attack(const std::string& target)
{
	if (this->energy > 0 && this->damage > 0)
	{
		std::cout << "FragTrap " << name << " ATTACKS " << target << " causing " << damage << " points of damage!" << std::endl;
		this->energy--;
	}
	else
		std::cout << "Not enough enegry or damage to attack" << std::endl;
}