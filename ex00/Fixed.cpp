/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmcgrane <jmcgrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/06 14:45:40 by jmcgrane          #+#    #+#             */
/*   Updated: 2026/05/07 13:26:42 by jmcgrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(Fixed const &object)
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