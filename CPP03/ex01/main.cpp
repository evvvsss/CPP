#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main ()
{
	// ClapTrap a("Valley");
	// a.getInfo();
	// a.attack("bad guy");
	// a.getInfo();
	// a.takeDamage(5);
	// a.getInfo();
	// a.beRepaired(3);
	// a.getInfo();
	// std::cout << a << std::endl;
	// ClapTrap b(a);
	// b.getInfo();
	std::cout << std::endl << "Creating ScavTrap object big" << std::endl;
	ScavTrap big("Eva");
	big.getInfo();
	std::cout << "Some operations: " << std::endl;
	big.attack("small");
	big.takeDamage(12);
	big.getInfo();
	big.beRepaired(8);
	big.getInfo();


}