#include "Fixed.hpp"

Fixed:: Fixed() : integer(0) {
	std::cout << "Default constructor called\n";
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
	std::cout << "getRawBits member function called\n";
	return this->integer;
}

void Fixed::setRawBits( int const raw )
{
	this->integer = raw;
}