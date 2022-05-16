#include "Fixed.hpp"

Fixed:: Fixed() : integer(0) {
	//std::cout << "Default constructor called\n";
}

Fixed::Fixed(int const n)
{
	//std::cout << "Int constructor called\n";
	this->integer = n << bits;
}

Fixed::Fixed(float const n)
{
	//std::cout << "Float constructor called\n";
	this->integer = (int)(roundf(n * (1 << bits)));
}

Fixed::Fixed(const Fixed &copy) : integer()
{
	//std::cout << "Copy constructor called\n";
	*this = copy;
}

Fixed::~Fixed() {
	//std::cout << "Destructor called\n";
}

Fixed &Fixed::operator=(const Fixed &assign)
{
	//std::cout << "Copy assignment operator called\n";
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

/* comparison operators */
bool	Fixed::operator>(const Fixed &fixed) const
{
	return (integer > fixed.integer);
}

bool	Fixed::operator<(const Fixed &fixed) const
{
	return (integer < fixed.integer);
}

bool	Fixed::operator>=(const Fixed &fixed) const
{
	return (integer >= fixed.integer);
}

bool	Fixed::operator<=(const Fixed &fixed) const
{
	return (integer <= fixed.integer);
}

bool	Fixed::operator==(const Fixed &fixed) const
{
	return (integer == fixed.integer);
}

bool	Fixed::operator!=(const Fixed &fixed) const
{
	return (integer != fixed.integer);
}

/* increment/decrement */
Fixed	&Fixed::operator++()
{
	this->integer++;
	return *this;
}

Fixed	&Fixed::operator--()
{
	this->integer--;
	return *this;
}

Fixed	Fixed::operator++(int)
{
	Fixed n = *this;
	++*this;
	return n;
}

Fixed	Fixed::operator--(int)
{
	Fixed n = *this;
	--*this;
	return n;
}

/* arithmetic operators */
Fixed	Fixed::operator+(const Fixed &fixed) const
{
	Fixed n = *this;
	n.integer += fixed.integer;
	return n;
}

Fixed	Fixed::operator-(const Fixed &fixed) const
{
	Fixed n = *this;
	n.integer -= fixed.integer;
	return n;
}

Fixed	Fixed::operator*(const Fixed &fixed) const
{
	return (toFloat() * fixed.toFloat());
}

Fixed	Fixed::operator/(const Fixed &fixed) const
{
	return (toFloat() / fixed.toFloat());
}

/* overloaded member functions */
Fixed &Fixed::min(Fixed &fixed1, Fixed &fixed2)
{
	return (fixed1 < fixed2)? fixed1 : fixed2;
}

const Fixed &Fixed::min(const Fixed &fixed1, const Fixed &fixed2)
{
	return (fixed1 < fixed2)? fixed1 : fixed2;
}

Fixed &Fixed::max(Fixed &fixed1, Fixed &fixed2)
{
	return (fixed1 > fixed2)? fixed1 : fixed2;
}

const Fixed &Fixed::max(const Fixed &fixed1, const Fixed &fixed2)
{
	return (fixed1 > fixed2)? fixed1 : fixed2;
}