/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clouden <clouden@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/16 16:05:52 by clouden           #+#    #+#             */
/*   Updated: 2026/05/19 19:04:07 by clouden          ###   ########.fr       */
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
	
	~Fixed();

	Fixed	&operator=(const Fixed& fixed);
	
	int		getRawBits(void) const;
	void	setRawBits(int);
	int		toInt(void) const;
	float	toFloat(void) const;
};

std::ostream& operator<<(std::ostream& out, const Fixed& fixed);

#endif

