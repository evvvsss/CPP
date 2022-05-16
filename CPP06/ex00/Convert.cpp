#include "Convert.hpp"

Convert::Convert(void){}

Convert::Convert(char *arg)
{
	int i;
	int j;

	i = 0;
	while (arg[i] && arg[i] != '.')
		i++;
	if (!arg[i])
		precision = 1;
	else
	{
		j = 1;
		while (arg[j + i] && isdigit(arg[j + i]))
			j++;
		precision = j - 1;
	}
	this->arg = atof(arg);
}

Convert::Convert(Convert const & src)
{
	*this = src;
}

Convert::~Convert(){}

Convert &	Convert::operator=(Convert const &src)
{
	if (this != &src)
		precision = src.getPrecision();
	return (*this);
}

int	Convert::getPrecision() const
{
	return (this->precision);
}

void	Convert::isChar() const
{
	char	c = static_cast<char>(arg);

	if (arg >= 32 && arg <= 126)
		std::cout << "char: '" << c << "'" << std::endl ;
	else if ((arg >= 0 && arg < 32) || arg == 127)
		std::cout  << "char: Non displayable"  << std::endl ;
	else
		std::cout  << "char: impossible"  << std::endl;
}

void		Convert::isInt() const
{
	long	i = static_cast<long>(arg);

	if (std::isnan(arg) || std::isinf(arg))
		std::cout  << "int: impossible"  << std::endl;
	else if (i >= INT_MIN && i <= INT_MAX)
		std::cout  << "int: " << i  << std::endl;
	else
		std::cout  << "int: impossible"  << std::endl;
}

void	Convert::isFloat() const
{
	std::cout  <<  "float : " << std::setprecision(this->precision) << std::fixed << static_cast<float>(arg) << 'f'  << std::endl;
}

void	Convert::isDouble() const
{
	std::cout  << "double : " << std::setprecision(this->precision) << std::fixed << arg  << std::endl;
}