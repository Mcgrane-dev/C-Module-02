/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmcgrane <jmcgrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/06 14:45:44 by jmcgrane          #+#    #+#             */
/*   Updated: 2026/05/08 13:52:13 by jmcgrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
#define FIXED_H

class Fixed {
private:
	int value;
	static const int bits = 8; // const here means it can never be changed after declaration
							   // static makes it the same value for all objects created

public:
	Fixed();
	~Fixed();
	Fixed(Fixed const &src); // Copy constructor
	Fixed& operator=(Fixed const &src); // Assignment operator overload

	int getRawBits(void) const;
	void setRawBits(int const raw);
};

#endif