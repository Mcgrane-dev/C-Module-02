#include "Fixed.hpp"

int main(void)
{
	Fixed a;                        // Regular object - CAN be modified
	Fixed const b(10);              // Const object - CANNOT be modified
	Fixed const c(42.42f);          // Const object - CANNOT be modified
	Fixed const d(b);               // Const object - CANNOT be modified
	a = Fixed(1234.4321f);          // OK - 'a' is not const
	// b = Fixed(5);                // ERROR - 'b' is const!

	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;
	std::cout << "c is " << c << std::endl;
	std::cout << "d is " << d << std::endl;

	std::cout << "a is " << a.toInt() << " as integer" << std::endl;
	std::cout << "b is " << b.toInt() << " as integer" << std::endl;
	std::cout << "c is " << c.toInt() << " as integer" << std::endl;
	std::cout << "d is " << d.toInt() << " as integer" << std::endl;
	return 0;
}

// So std::cout << "a =" calls builtin fucntion where, std::cout is ostream parameter
// and "a " is char*str parameter...
 
// Then std::cout << Fixed a takes std::cout as ostream parameter and Fixed object 'a'
// as second parameter