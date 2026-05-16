/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clouden <clouden@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/16 15:35:45 by clouden           #+#    #+#             */
/*   Updated: 2026/05/16 15:56:31 by clouden          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) :
	fixedPoint_(0),
	fractionalBits_(8)
{
	std::cout << "Default Constructor called." << std::endl;
}

Fixed::Fixed(const Fixed& fixed) :
	fixedPoint_(fixed.fixedPoint_),
	fractionalBits_(8)
{
	std::cout << "Copy Constructor called." << std::endl;
}

Fixed	&Fixed::operator=(const Fixed& fixed)
{
	std::cout << "Copy Assignment Operator called." << std::endl;
	if (this != &fixed)
		this->fixedPoint_ = fixed.fixedPoint_;
	return (*this);
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called." << std::endl;
}

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

