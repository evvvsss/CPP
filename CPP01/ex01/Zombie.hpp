#ifndef _ZOMBIE_HPP
#define _ZOMBIE_HPP
#include <iostream>

class Zombie {
	public:
			Zombie();
			~Zombie();

			void announce();
			void setName(std::string name);
			Zombie* zombieHorde(int N, std::string name);
	private:
			std::string name;
};
#endif