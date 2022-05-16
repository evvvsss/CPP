#ifndef WHATEVER_HPP
#define WHATEVER_HPP
#include <iostream>

template<typename Template>
void	swap(Template &a,Template &b)	{
	Template tmp = a;
	a = b;
	b = tmp;
}

template <typename Template>
Template	&max(Template &a, Template &b)	{
	return (a > b ? a : b);
}

template <typename Template>
Template	&min(Template &a, Template &b)	{
	return (a < b ? a : b);
}

#endif