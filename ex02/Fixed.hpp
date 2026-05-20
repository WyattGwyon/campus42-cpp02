/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clouden <clouden@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/19 19:19:31 by clouden           #+#    #+#             */
/*   Updated: 2026/05/20 20:12:49 by clouden          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>
# include <cmath>

class	Fixed
{
private:
	int					fixedPoint_;
	static const int	fractionalBits_ = 8;

public:
	Fixed(void);
	Fixed(const int intVal);
	Fixed(const float floatVal);
	Fixed(const Fixed& fixed);
	
	~Fixed(void);

	Fixed	&operator=(const Fixed& fixed);
	bool	operator<(const Fixed& fixed) const;
	bool	operator>(const Fixed& fixed) const;
	bool	operator>=(const Fixed& fixed) const;
	bool	operator<=(const Fixed& fixed) const;
	bool	operator==(const Fixed& fixed) const;
	bool	operator!=(const Fixed& fixed) const;
	float	operator+(const Fixed& fixed) const;
	float	operator-(const Fixed& fixed) const;
	float	operator*(const Fixed& fixed) const;
	float	operator/(const Fixed& fixed) const;
	Fixed	operator++();
	Fixed	operator++(int);
	Fixed	operator--();
	Fixed	operator--(int);

	int		getRawBits(void) const;
	void	setRawBits(const int raw);
	int		toInt(void) const;
	float	toFloat(void) const;

	static Fixed&		min(Fixed& f1, Fixed& f2);
	static const Fixed&	min(const Fixed& f1, const Fixed& f2);
	static Fixed&		max(Fixed& f1, Fixed& f2);
	static const Fixed&	max(const Fixed& f1, const Fixed& f2);
};

std::ostream&	operator<<(std::ostream& out, const Fixed& fixed);

#endif
