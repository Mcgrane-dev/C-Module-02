#ifndef FIXED_H
#define FIXED_H

#include <iostream>

class Fixed {
private:

	int value;
	static const int bits = 8;

public:

	float toFloat(void) const;
	int toInt(void) const;

	Fixed();
	Fixed(const int value);
	Fixed(const float value);
	Fixed(Fixed const &obj);
	Fixed& operator=(const Fixed &obj);
	~Fixed();
};

#endif