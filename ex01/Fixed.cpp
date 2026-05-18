/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clouden <clouden@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/16 16:05:38 by clouden           #+#    #+#             */
/*   Updated: 2026/05/16 18:38:41 by clouden          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void)
	fixedPoint_(0),
	fractionalBits_(8)
{
	std::cout << "Default Constructor called." << std::endl;
}

Fixed::Fixed(const Fixed& fixed)
	fixedPoint_(0),
	fractionalBits_(8)
{
	std::cout << "Copy Constructor called." << std::endl;
}

Fixed::Fixed(const int fixedPoint)
{
	std::cout << "Int constructor called." << std::endl;
}

Fixed::Fixed(const float fixedPoint)
{
	std::cout << "Float constructor called." << std::endl;
}

Fixed	Fixed::operator=(const Fixed& fixed)
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

int	getRawBits(void)
{
	std::cout << "getRawBits member function called." << std::endl;
	return (fixedPoint_);
}

void	setRawBits(int	raw)
{
	std::cout << "setRawBits member function called." << std::endl;
	fixedPoint_ = raw;
}
