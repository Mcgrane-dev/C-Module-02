#include "Fixed.hpp"

bool Fixed::operator>(const Fixed& fixed)// 'this' is left side of operator.
{										 // parameter is right side ^^
	if(this->value > fixed.value)
		return true;
	return false;
}

bool Fixed::operator<(const Fixed& fixed)
{
	if(this->value < fixed.value)
		return true;
	return false;
}

bool Fixed::operator>=(const Fixed& fixed)
{
	if(this->value >= fixed.value)
		return true;
	return false;
}

bool Fixed::operator<=(const Fixed& fixed)
{
	if(this->value <= fixed.value)
		return true;
	return false;
}

bool Fixed::operator==(const Fixed& fixed)
{
	if(this->value == fixed.value)
		return true;
	return false;
}

bool Fixed::operator!=(const Fixed& fixed)
{
	if(this->value != fixed.value)
		return true;
	return false;
}

Fixed& Fixed::operator+(const Fixed& fixed)
{
	return(this->value + fixed.value);
}

Fixed& Fixed::operator-(const Fixed& fixed)
{
	int value;
	value = this->value - fixed.value;
	return value;
}

Fixed& Fixed::operator*(const Fixed& fixed)
{
	int value;
	value = this->value * fixed.value;
	return value;
}

Fixed& Fixed::operator/(const Fixed& fixed)
{
	int value;
	value = this->value / fixed.value;
	return value;
}

Fixed& Fixed::operator++()
{
	int value;
	value = this->value++;
	return value;
}

Fixed& Fixed::operator--()
{
	int value;
	value = this->value--;
	return value;
}

Fixed::Fixed(int value)
{
	this->value = value;
}

Fixed::Fixed()
{
	this->value = 0;
};

Fixed::~Fixed(){};