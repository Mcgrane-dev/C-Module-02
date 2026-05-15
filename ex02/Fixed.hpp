#ifndef FIXED_H
#define FIXED_H

#include <iostream>
#include <cmath>

class Fixed {
private:

	int value;

public:

	bool operator>(const Fixed& fixed);
	bool operator<(const Fixed& fixed);
	bool operator>=(const Fixed& fixed);
	bool operator<=(const Fixed& fixed);
	bool operator==(const Fixed& fixed);
	bool operator!=(const Fixed& fixed);
	Fixed& operator+(const Fixed& fixed);
	Fixed& operator-(const Fixed& fixed);
	Fixed& operator*(const Fixed& fixed);
	Fixed& operator/(const Fixed& fixed);
	Fixed& operator++();
	Fixed& operator--();
	Fixed(int value);
	Fixed();
	~Fixed();
};

#endif