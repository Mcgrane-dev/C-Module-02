/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmcgrane <jmcgrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/06 14:45:40 by jmcgrane          #+#    #+#             */
/*   Updated: 2026/05/08 14:55:54 by jmcgrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed& Fixed::operator=(Fixed const &src) // Assignment operator overload
{
	if(this != &src)
	{
		this->value = src.value;
		std::cout << "Copy assignment operator called\n";
	}
	return *this;
}

Fixed::Fixed(Fixed const &object) // Copy constructor
{
	this->value = object.getRawBits();
	std::cout << "Copy constructor called\n";
}

void Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called\n";
	this->value = raw;
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called\n";
	return this->value;
}

Fixed::Fixed() : value(0)
{
	std::cout << "Default constructor called\n";
}

Fixed::~Fixed()
{
	std::cout << "Destructor called\n";
}