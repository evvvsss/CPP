#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : health(10), energy(10), damage(0) {
	std::cout << "ClapTrap Default constructor" << std::endl;
}

ClapTrap::ClapTrap(std::string name)  : health(10), energy(10), damage(0)
{
	std::cout << "ClapTrap Setting name constructor" << std::endl;
	this->name = name;
}

ClapTrap::ClapTrap(ClapTrap const & src)
{
	std::cout << "ClapTrap Copy constructor" << std::endl;
	*this = src;
	return;
}

ClapTrap::~ClapTrap() {
	std::cout << "ClapTrap Default destructor" << std::endl;
}

ClapTrap & ClapTrap::operator=(ClapTrap const &src)
{
	std::cout << "ClapTrap Assignement operator" << std::endl;
	if (this != &src)
	{
		this->name = src.getName().append("Copy");
		this->damage = src.getDamage();
		this->energy = src.getEnergy();
		this->health = src.getHealth();
	}
	return *this;
}

/*GET*/
std::string ClapTrap::getName() const
{
	return name ;
}

int ClapTrap::getEnergy() const
{
	return energy;
}

int ClapTrap::getDamage() const
{
	return damage;
}

int ClapTrap::getHealth() const
{
	return health;
}
/*GET*/

void ClapTrap::getInfo()
{
	std::cout << "\n______________________________\n" << std::endl;
	std::cout << "NAME: " << this->name << std::endl;
	std::cout << "HEALTH: " << this->health << std::endl;
	std::cout << "ENERGY: " << this->energy << std::endl;
	std::cout << "DAMAGE: " << this->damage << std::endl;
	std::cout << "______________________________\n" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
	
	if (this->energy > 0)
	{
		std::cout << "ClapTrap " << name << " ATTACKS " << target << " causing " << damage << " points of damage!" << std::endl;
		this->energy--;
	}
	else
		std::cout << "Not enough enegry to attack" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	
	if (this->health > 0)
	{
		std::cout << "ClapTrap " << name << " LOSING " << amount << " points of health!" << std::endl;
		this->health -= amount;
		if (this->health < 0)
			this->health = 0;
	}
	else
		std::cout << "Not enough health" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->health > 0 && this->energy > 0)
	{
		std::cout << "ClapTrap " << name << " REPAIRING itself and getting " << amount << " points of health!" << std::endl;
		this->health += amount;
		this->energy--;
	}
	else
		std::cout << "Not enough energy to rapair" << std::endl;
}


std::ostream &	operator<<(std::ostream & out, ClapTrap const & a)
{
	out << "ClapTrap " << a.getName() << " has " << a.getHealth() << " health, " << a.getEnergy() << " energy, " << a.getDamage() << " attack damage. ";
	if (a.getHealth() > 0)
		out << a.getName() << " is alive.";
	else
		out << a.getName() << " is dead.";

	return out;
}