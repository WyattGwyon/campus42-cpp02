/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clouden <clouden@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/19 19:19:31 by clouden           #+#    #+#             */
/*   Updated: 2026/05/19 22:40:37 by clouden          ###   ########.fr       */
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
//	Fixed	&operator<();
//	Fixed	&operator>();
//	Fixed	&operator>=();
//	Fixed	&operator<=();
//	Fixed	&operator==();
//	Fixed	&operator!=();

	int		getRawBits(void) const;
	void	setRawBits(const int raw);
	int		toInt(void) const;
	float	toFloat(void) const;

//	Fixed&	static min(Fixed& f1, Fixed& f2);
//	Fixed&	static min(const Fixed& f1, const Fixed& f2);
//	Fixed&	static max(Fixed& f1, Fixed& f2);
//	Fixed&	static max(constFixed& f1, const Fixed& f2);
};

std::ostream&	operator<<(std::cout out, const Fixed& fixed);

#endif
