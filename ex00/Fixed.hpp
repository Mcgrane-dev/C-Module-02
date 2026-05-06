/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmcgrane <jmcgrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/06 14:45:44 by jmcgrane          #+#    #+#             */
/*   Updated: 2026/05/06 15:26:02 by jmcgrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
#define FIXED_H

class Fixed {
private:
	int value;
	static const int bits = 8;

public:
	Fixed();
	~Fixed();

	int getRawBits(void);

};

#endif