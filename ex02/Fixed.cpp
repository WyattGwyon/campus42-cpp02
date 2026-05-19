/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clouden <clouden@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/19 19:19:46 by clouden           #+#    #+#             */
/*   Updated: 2026/05/19 22:39:58 by clouden          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/************************
 *  Default Constructor
 ************************/
Fixed::Fixed(void) :
	fixedPoint_(0)
{}

/********************
 *  Int Constructor
 ********************/
Fixed::Fixed(const int intVal)
{
	fixedPoint_ = intVal << fractionalBits_;
}


/**********************
 *  Float Constructor
 **********************/
Fixed::Fixed(const float floatVal)
{
	fixedPoint_ = roundf(floatVal * (1 << fractionBits_));
}


/*********************
 *  Copy Constructor
 *********************/
Fixed::Fixed(const Fixed& fixed)
{
	fixedPoint_ = fixed.getRawBits();kkkkj
}


/*****************************
 *  Copy Assignment Operator
 *****************************/
Fixed	&Fixed::operator=(const Fixed& fixed)
{
	if (this != &fixed)
		this->fixedPoint_ = fixed.getRawBits();
	return (*this);
}

/************************
 *  Overload Operations
 ************************/



/************
 *  Methods
 ************/
int	Fixed::getRawBits(void) const
{
	return(fixedPoint_);
}

void Fixed::setRawBits(const int raw)
{
	fixedPoint_ = raw;
}

int	Fixed::toInt(void) const
{
	return (this->getRawBits() >> this->fractionalBits_);
}

float Fixed::toFloat() const
{
	return ((float)this->getRawBits() / (1 << this->fractionalBits_));
}
