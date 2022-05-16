#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>

template<typename T>
void addTwo(T& i) {
	i += 2;
}

template<typename R>
void iter(R adr[], int len, void (func)(R&)) 
{
	for (int i = 0; i < len; i++)
		func(adr[i]);
}

#endif