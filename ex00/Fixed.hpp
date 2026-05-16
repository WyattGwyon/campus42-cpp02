/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clouden <clouden@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/14 14:41:55 by clouden           #+#    #+#             */
/*   Updated: 2026/05/16 15:02:43 by clouden          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
# include <cmath>
# include <iostream>

class	Fixed
{
private:
	int			fixedPoint_;
	const int	fractionalBits_;
public:
	Fixed(void);
	Fixed(const Fixed& fixed);
	Fixed &operator=(const Fixed& fixed);
	~Fixed(void);
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
};

#endif
