#ifndef FIXED_H
#define FIXED_H

#include <iostream>
#include <cmath>

class Fixed {
private:

	int value;
	static const int bits = 8;

public:

	int toInt(void) const;
	float toFloat(void) const;

	bool operator>(const Fixed& fixed);
	bool operator<(const Fixed& fixed);
	bool operator>=(const Fixed& fixed);
	bool operator<=(const Fixed& fixed);
	bool operator==(const Fixed& fixed);
	bool operator!=(const Fixed& fixed);
	Fixed operator+(const Fixed& fixed);
	Fixed operator-(const Fixed& fixed);
	Fixed operator*(const Fixed& fixed);
	Fixed operator/(const Fixed& fixed);
	Fixed& operator++();
	Fixed& operator--();
	Fixed operator++(int);
	Fixed operator--(int);

	Fixed& operator=(const Fixed& obj);
	Fixed(const Fixed& obj);
	Fixed(const int value);
	Fixed(const float value);
	Fixed();
	~Fixed();
};

std::ostream& operator<<(std::ostream& os, const Fixed& fixed);

#endif