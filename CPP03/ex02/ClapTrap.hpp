#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
# include <iostream>

class ClapTrap {

protected:
		ClapTrap();
		std::string name;
		int health;
		int energy;
		int damage;
public:
		ClapTrap(std::string name);
		ClapTrap(ClapTrap const &src);
		~ClapTrap();

		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		void getInfo();

		std::string getName() const;
		int getEnergy() const;
		int getDamage() const;
		int getHealth() const;


		ClapTrap &operator=(ClapTrap const &src);
};

std::ostream &	operator<<(std::ostream & out, ClapTrap const & a);

#endif