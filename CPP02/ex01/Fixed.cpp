#include "Fixed.hpp"

Fixed:: Fixed() : integer(0) {
	std::cout << "Default constructor called\n";
}

Fixed::Fixed(int const n)
{
	std::cout << "Int constructor called\n";
	this->integer = n << bits;
}

Fixed::Fixed(float const n)
{
	std::cout << "Float constructor called\n";
	this->integer = (int)(roundf(n * (1 << bits)));
}

Fixed::Fixed(const Fixed &copy) : integer()
{
	std::cout << "Copy constructor called\n";
	*this = copy;
}

Fixed::~Fixed() {
	std::cout << "Destructor called\n";
}

Fixed &Fixed::operator=(const Fixed &assign)
{
	std::cout << "Copy assignment operator called\n";
	setRawBits(assign.getRawBits());
	return *this;
}

int Fixed::getRawBits( void ) const
{
	//std::cout << "getRawBits member function called\n";
	return this->integer;
}

void Fixed::setRawBits( int const raw )
{
	this->integer = raw;
}

float Fixed::toFloat( void ) const
{
	return ((float)integer / (1 << bits));
}

int Fixed::toInt( void ) const
{
	return (integer >> bits);
}

std::ostream	&operator<<(std::ostream &out, const Fixed &fixed)
{
	out << fixed.toFloat();
	return out;
}