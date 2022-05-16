#include "Zombie.hpp" 

Zombie* Zombie::zombieHorde(int N, std::string name)
{
	int i = 0;
	Zombie* a = new Zombie[N];
	while (i < N)
	{
		a[i].setName(name);
		i++;
	}
	return a;
}