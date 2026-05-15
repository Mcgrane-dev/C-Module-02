#include "Fixed.hpp"

int main(void)
{
	Fixed a(5);
	Fixed b(2);

	if(a > b)
		std::cout << "a is greater than b\n";

	return 0;
}