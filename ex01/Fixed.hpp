/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clouden <clouden@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/16 16:05:52 by clouden           #+#    #+#             */
/*   Updated: 2026/05/16 18:23:22 by clouden          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>

class	Fixed
{
private:
	int			fixedPoint_;
	const int	fractionalBits_;
public:
	Fixed(void);
	Fixed(const Fixed& fixed);
	Fixed	&operator=(const Fixed& fixed);
	~Fixed();

};

#endif
