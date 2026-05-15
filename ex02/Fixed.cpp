#include "Fixed.hpp"

std::ostream& operator<<(std::ostream& os, const Fixed& fixed)
{
	os << fixed.toFloat();
	return os;
}

int Fixed::toInt(void) const
{
	return(int)this->value / 256;
}

float Fixed::toFloat(void) const
{
	return(float)this->value / 256;
}

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

Fixed Fixed::operator+(const Fixed& fixed)
{
	Fixed a;
	a.value = this->value + fixed.value;
	return a;
}

Fixed Fixed::operator-(const Fixed& fixed)
{
	Fixed a;
	a.value = this->value - fixed.value;
	return a;
}

Fixed Fixed::operator*(const Fixed& fixed)
{
	Fixed a;
	a.value = (this->value * fixed.value) / 256;
	return a;
}

Fixed Fixed::operator/(const Fixed& fixed)
{
	Fixed a;
	a.value = (this->value * 256) / fixed.value;
	return a;
}

Fixed& Fixed::operator++()
{
	++this->value;
	return *this;
}

Fixed& Fixed::operator--()
{
	--this->value;
	return *this;
}

Fixed Fixed::operator++(int)
{
	Fixed temp = *this;
	this->value++;
	return temp;
}

Fixed Fixed::operator--(int)
{
	Fixed temp = *this;
	this->value--;
	return temp;
}

Fixed& Fixed::operator=(const Fixed& obj)
{
	if(this != &obj)
	{
		this->value = obj.value;
	}
	return *this;
}

Fixed::Fixed(const Fixed& obj)
{
	this->value = obj.value;
}

Fixed::Fixed(const int value)
{
	this->value = value * 256;
}

Fixed::Fixed(const float value)
{
	this->value =roundf(value * 256);
}

Fixed::Fixed()
{
	this->value = 0;
};

Fixed::~Fixed(){};