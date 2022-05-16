#ifndef EASYFIND_HPP
# define EASYFIND_HPP
# include <iostream>
# include <list>
# include <algorithm>
# include <vector>
# include <iomanip>

template <typename T>
int easyfind(T& a, int b)
{
	typename T::iterator	it;

	it = std::find(a.begin(), a.end(), b);
	if (it == a.end())
		throw "Can not find an occuraence";
	return *it;
}

void	displayInt( int i)
{
	std::cout << i << " ";
}

#endif