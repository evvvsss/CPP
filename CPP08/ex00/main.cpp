#include "easyfind.hpp"

int main ()
{
	std::list<int>	lst;
	int	pos;

	lst.push_back(27);
	lst.push_back(53);
	lst.push_back(1999);
	lst.push_back(592);
	lst.push_back(1);
	lst.push_back(7);
	lst.push_back(1021);

	try
	{
		pos = easyfind(lst, 28);p
		std::cout << "Found " << os << "!\n"; 
	}
	catch(char const * err)
	{
		std::cerr << err << std::endl;
 	}

	try
	{
		pos = easyfind(lst, 1021);
		std::cout << "Found " << pos << "!\n"; 
	}
	catch(char const * err)
	{
		std::cerr << err << std::endl;
 	}
	return 0;
}