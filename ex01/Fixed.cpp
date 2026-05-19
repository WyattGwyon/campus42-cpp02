/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clouden <clouden@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/16 16:05:38 by clouden           #+#    #+#             */
/*   Updated: 2026/05/19 19:05:19 by clouden          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/************************
 *  Default Constructor
 ************************/
Fixed::Fixed(void) :
	fixedPoint_(0)
{
	std::cout << "Default Constructor called." << std::endl;
}

/********************
 *  Int Constructor
 ********************/
Fixed::Fixed(const int intVal) :
	fixedPoint_(0)
{
	std::cout << "Int constructor called." << std::endl;
	fixedPoint_ = intVal << fractionalBits_;
}

/**********************
 *  Float Constructor
 **********************/
Fixed::Fixed(const float floatVal) :
	fixedPoint_(0)
{
	std::cout << "Float constructor called." << std::endl;
	fixedPoint_ = roundf(floatVal * (1 << fractionalBits_));
}

/*********************
 *  Copy Constructor
 *********************/
Fixed::Fixed(const Fixed& fixed)
{
	std::cout << "Copy Constructor called." << std::endl;
	fixedPoint_ = fixed.getRawBits();
}

/*****************************************
 *  Copy Assignment Operator Overloading
 *****************************************/
Fixed	&Fixed::operator=(const Fixed& fixed)
{
	std::cout << "Copy Assignment Operator called." << std::endl;
	if (this != &fixed)
		this->fixedPoint_ = fixed.getRawBits();
	return (*this);
}

/***************
 *  Destructor
 ***************/
Fixed::~Fixed(void)
{
	std::cout << "Destructor called." << std::endl;
}

/************
 *  Methods
 ************/

int	Fixed::getRawBits(void) const
{
	return (fixedPoint_);
}

void	Fixed::setRawBits(int raw)
{
	fixedPoint_ = raw;
}

int		Fixed::toInt() const
{
	return (this->getRawBits() >> this->fractionalBits_);
}

float	Fixed::toFloat() const
{
	return ((float)this->getRawBits() / (1 << this->fractionalBits_));
}

/***********************************
 *  Insertion Operator Overloading
 ***********************************/
std::ostream& operator<<(std::ostream& out, const Fixed& fixed)
{
	out << fixed.toFloat();
	return (out);
}

