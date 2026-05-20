/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clouden <clouden@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/19 19:19:46 by clouden           #+#    #+#             */
/*   Updated: 2026/05/20 20:16:01 by clouden          ###   ########.fr       */
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
	fixedPoint_ = roundf(floatVal * (1 << fractionalBits_));
}


/*********************
 *  Copy Constructor
 *********************/
Fixed::Fixed(const Fixed& fixed)
{
	fixedPoint_ = fixed.getRawBits();
}

/**************
 *  Destrutor
 **************/
Fixed::~Fixed()
{}

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
std::ostream& operator<<(std::ostream& out, const Fixed& fixed)
{
	return (out << fixed.toFloat());
}

bool	Fixed::operator<(const Fixed& fixed) const
{
	return (this->fixedPoint_ < fixed.getRawBits());
}

bool	Fixed::operator>(const Fixed& fixed) const
{
	return (this->fixedPoint_ > fixed.getRawBits());
}

bool	Fixed::operator<=(const Fixed& fixed) const
{
	return (this->fixedPoint_ <= fixed.getRawBits());
}

bool	Fixed::operator>=(const Fixed& fixed) const
{
	return (this->fixedPoint_ >= fixed.getRawBits());
}

bool	Fixed::operator==(const Fixed& fixed) const
{
	return (this->fixedPoint_ == fixed.getRawBits());
}

bool	Fixed::operator!=(const Fixed& fixed) const
{
	return (this->fixedPoint_ != fixed.getRawBits());
}

float	Fixed::operator+(const Fixed& fixed) const
{
	return (this->toFloat() + fixed.toFloat());
}

float	Fixed::operator-(const Fixed& fixed) const
{
	return (this->toFloat() - fixed.toFloat());
}

float	Fixed::operator*(const Fixed& fixed) const
{
	return (this->toFloat() * fixed.toFloat());
}

float	Fixed::operator/(const Fixed& fixed) const
{
	return (this->toFloat() / fixed.toFloat());
}

Fixed	Fixed::operator++()
{
	fixedPoint_ += 1;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed temp = *this;
	fixedPoint_ += 1;
	return (temp);
}

Fixed	Fixed::operator--()
{
	fixedPoint_ -= 1;
	return (*this);
}

Fixed	Fixed::operator--(int)
{
	Fixed temp = *this;
	fixedPoint_ -= 1;
	return (temp);
}

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

Fixed&	Fixed::min(Fixed& f1, Fixed& f2)
{
	if (f1 < f2)
		return (f1);
	else
		return (f2);
}

const Fixed& Fixed::min(const Fixed& f1, const Fixed& f2)
{
	if (f1 < f2)
		return (f1);
	else
		return (f2);
}

Fixed&	Fixed::max(Fixed& f1, Fixed& f2)
{
	if (f1 > f2)
		return (f1);
	else
		return (f2);
}

const Fixed& Fixed::max(const Fixed& f1, const Fixed& f2)
{
	if (f1 > f2)
		return (f1);
	else
		return (f2);
}


