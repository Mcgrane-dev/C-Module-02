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
	}
	return *this;
}

Fixed::Fixed(Fixed const &object) // Copy constructor
{
	this->value = object.getRawBits();
}

void Fixed::setRawBits(int const raw)
{
	this->value = raw;
}

int Fixed::getRawBits(void) const
{
	return this->value;
}

Fixed::Fixed() : value(0) {}

Fixed::~Fixed(){}