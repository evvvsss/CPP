#include "ClapTrap.hpp"

int main ()
{
	ClapTrap a("Valley");
	a.getInfo();
	a.attack("bad guy");
	a.getInfo();
	a.takeDamage(5);
	a.getInfo();
	a.beRepaired(3);
	a.getInfo();
	std::cout << a << std::endl;
	ClapTrap b(a);
	b.getInfo();
}