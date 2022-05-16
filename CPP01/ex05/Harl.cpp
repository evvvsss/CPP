#include "Harl.hpp"

Harl::Harl() {}
Harl::~Harl() {}

void Harl::choose(int i)
{
	this->arr[0] = &Harl::debug;
	this->arr[1] = &Harl::info;
	this->arr[2] = &Harl::warning;
	this->arr[3] = &Harl::error;
	this->arr[4] = &Harl::nothing;

	(this->*arr[i]) ();
}

void Harl::complain(std::string level)
{
	int i = 0;
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	while (i < 4 && levels[i] != level)
		++i;
	std::cout << level << std::endl;
	this->choose(i);
}

void Harl::debug( void )
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void Harl::info( void )
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning( void )
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error( void )
{
	std::cout <<  "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::nothing( void )
{
	std::cout <<  "This is not the correct word." << std::endl;
}