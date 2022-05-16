#include "Zombie.hpp"

int main ()
{
	Zombie a("Harry");
	a.announce();

	Zombie* b = a.newZombie("Ron");
	b->announce();

	a.randomChump("Hermione");
	delete b;

	return 0;
}