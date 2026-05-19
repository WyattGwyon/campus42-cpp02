/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clouden <clouden@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/16 15:35:45 by clouden           #+#    #+#             */
/*   Updated: 2026/05/19 19:03:16 by clouden          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/*
 *  Default Constructor
 */
Fixed::Fixed(void) :
	fixedPoint_(0)
{
	std::cout << "Default Constructor called." << std::endl;
}

/*
 *  Copy Constructor
 */
Fixed::Fixed(const Fixed& fixed)
	// : fixedPoint_(fixed.getRawBits())
{
	std::cout << "Copy Constructor called." << std::endl;
	fixedPoint_ = fixed.getRawBits();
	//*this = fixed;
}

/*
 *  Copy Assignment Operator
 */
Fixed	&Fixed::operator=(const Fixed& fixed)
{
	std::cout << "Copy Assignment Operator called." << std::endl;
	if (this != &fixed)
		this->fixedPoint_ = fixed.getRawBits();
	return (*this);
}

/*
 * Destructor
 */
Fixed::~Fixed(void)
{
	std::cout << "Destructor called." << std::endl;
}

/* 
 * Methods
 */
int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called." << std::endl;
	return (fixedPoint_);
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called." << std::endl;
	fixedPoint_ = raw;
}

