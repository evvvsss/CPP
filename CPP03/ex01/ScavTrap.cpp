#include "ScavTrap.hpp"

ScavTrap::ScavTrap ()
{
	this->name = "default name";
	this->health = 100;
	this->energy = 50;
	this->damage = 20;
	std::cout << "ScanTrap Default constructor" << std::endl;
}

ScavTrap::ScavTrap (std::string name)
{
	this->name = name;
	this->health = 100;
	this->energy = 50;
	this->damage = 20;
	std::cout << "ScanTrap setting name constructor" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const & src)
{
	std::cout << "ScanTrap Copy constructor" << std::endl;
	*this = src;
	return;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScanTrap Default destructor" << std::endl;
}

void ScavTrap::guardGate()
{
			std::cout << "ClapTrap " << this->name << " is in Gate keeper mode" << std::endl;

}
ScavTrap &	ScavTrap::operator=(ScavTrap const & src)
{
	std::cout << "Assignement ScavTrap operator\n ";
	if (this != &src)
	{
		this->name = src.getName().append("ScanCopy");
		this->energy = src.getEnergy();
		this->damage = src.getDamage();
		this->health = src.getHealth();
	}
	return *this;
}

void		ScavTrap::attack(const std::string& target)
{
	if (this->energy > 0 && this->damage > 0)
	{
		std::cout << "ScanTrap " << name << " ATTACKS " << target << " causing " << damage << " points of damage!" << std::endl;
		this->energy--;
	}
	else
		std::cout << "Not enough enegry or damage to attack" << std::endl;
}