#include "Span.hpp"

Span::Span() : n(0) {}

Span::Span( unsigned int n ) : n(n) {}

Span::Span( Span const & src )
{
	this->n = src.n;
	this->vec = src.vec;
	return;
}

Span::~Span(){}

Span & Span::operator=( Span const & rhs )
{
	this->n = rhs.n;
	this->vec = rhs.vec;
	return *this;
}

int & Span::operator[]( unsigned int idx )
{
	if (idx >= this->n || idx < 0)
		throw IndexOutOfBoundsException();
	return this->vec[idx];
}

void	Span::addNumber(int nb)
{
	if (this->vec.size() == this->n)
		throw ImpossibleToAddException();
	else
		this->vec.push_back(nb);
}

int		Span::shortestSpan()
{
	int	res;
	if (this->vec.size() < 2)
	{
		throw NoDistanceException();
	}
	else
	{
		std::vector<int>::iterator	it = this->vec.begin();
		std::vector<int>::iterator	ite = this->vec.end();
		res = this->longestSpan();
		for (*it; *it != *(ite - 1); *it++)
		{
			std::vector<int>::iterator	it2 = this->vec.begin();
			for (*it2; *it2 != *ite; *it2++)
			{
				if (abs(*it - *it2) < res && it != it2)
					res = abs(*it - *it2);
			}
		}
	}
	return res;
}

int		Span::longestSpan()
{
	std::vector<int>::iterator min_nb;
	std::vector<int>::iterator max_nb;
	if (this->vec.size() < 2)
	{
		throw NoDistanceException();
	}
	else
	{
		min_nb = std::min_element(this->vec.begin(), this->vec.end());
		max_nb = std::max_element(this->vec.begin(), this->vec.end());
	}
	return *max_nb - *min_nb;
}

const char* Span::ImpossibleToAddException::what() const throw()
{
	return "Immpossible to add number!";
}

const char* Span::NoDistanceException::what() const throw()
{
	return "Immpossible to find distance!";
}

const char* Span::IndexOutOfBoundsException::what() const throw()
{
	return "Index is out of bounds!";
}
