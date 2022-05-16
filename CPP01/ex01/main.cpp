#include "Zombie.hpp"

int main()
{
	Zombie a;
	Zombie* horde = a.zombieHorde(5, "Harry");
	for (int i = 0; i < 5; i++)
	{
		horde[i].announce();	
	}
	delete [] horde;
	return 0;
}