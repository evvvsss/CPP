#ifndef FRAG_TRAP
# define FRAG_TRAP
#include "ScavTrap.hpp"

class FragTrap : public ClapTrap
{
public:
		FragTrap(std::string name);
		FragTrap(FragTrap const &src);
		~FragTrap();
		FragTrap &	operator=(FragTrap const & src);

		void highFivesGuys(void);
		void attack(const std::string& target);
private:
		FragTrap();
};

#endif