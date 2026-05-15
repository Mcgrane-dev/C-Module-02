#include "Fixed.hpp"

std::ostream& operator<<(std::ostream& os, const Fixed& fixed)
{
	os << fixed.toFloat();
	return os;
}

Fixed& Fixed::operator=(const Fixed &obj)
{
	std::cout << "Assignment operator called\n";
	if(this != &obj)
	{
		this->value = obj.value;
	}
	return *this;
}

float Fixed::toFloat(void) const
{
	return(float)this->value / 256;
}

int Fixed::toInt(void) const
{
	return(int)this->value / 256;
}

Fixed::Fixed(const Fixed &obj)
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

Fixed::Fixed()
{
    std::cout << "Default constructor called\n";
	this->value = 0;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called\n";
}
