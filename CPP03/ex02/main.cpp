#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main ()
{
	std::cout << std::endl << "Creating ClapTrap object a" << std::endl;
	ClapTrap a("Valley");
	a.getInfo();
	a.attack("bad guy");
	a.getInfo();
	a.takeDamage(5);
	a.getInfo();
	std::cout << std::endl << "****************************" << std::endl;
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
	std::cout << std::endl << "****************************" << std::endl;

	std::cout << std::endl << "Creating FragTrap object last" << std::endl;
	ScavTrap last("Crazy");
	last.getInfo();
	last.takeDamage(15);
	last.getInfo();
	last.attack("first");
	last.beRepaired(10);
	last.getInfo();
	std::cout << std::endl << "***********THE END**********\n" << std::endl;


}