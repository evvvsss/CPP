#ifndef _ZOMBIE_HPP
#define _ZOMBIE_HPP
#include <iostream>

class Zombie {

public:
		Zombie();
		Zombie(std::string name);
		~Zombie();

		void announce();
		Zombie* newZombie(std::string name);
		void randomChump(std::string name);
private:
		std::string name;
};

#endif