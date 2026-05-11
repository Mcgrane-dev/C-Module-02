#include "Fixed.hpp"

float Fixed::toFloat(void) const
{
	return(float)this->value / 256;
}

int Fixed::toInt(void) const
{
	return(int)this->value / 256;
}

Fixed::Fixed(Fixed const &obj)
{
	std::cout << "Copy constructor called\n";
	this->value = obj.value;
}

Fixed::Fixed(const int value)
{
	std::cout << "Int constructor called\n";
	this->value = value * 256;
}

Fixed::Fixed(const float value)
{
	std::cout << "Float constructor called\n";
	this->value = value * 256;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called\n";
}
