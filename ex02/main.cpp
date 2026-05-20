/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clouden <clouden@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/19 19:19:15 by clouden           #+#    #+#             */
/*   Updated: 2026/05/20 19:55:05 by clouden          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int	main(void)
{
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;

	std::cout << b << std::endl;

	std::cout << Fixed::max( a, b ) << std::endl;
	
	std::cout << a << std::endl;
	std::cout << --a << std::endl;
	std::cout << a << std::endl;
	std::cout << a-- << std::endl;
	std::cout << a << std::endl;
	std::cout << Fixed::min( a, b ) << std::endl;

	//Fixed	a;
	//Fixed	const b( 10 );
	//Fixed	const c(42.42f);
	//Fixed	const d( b );

	//a = Fixed(1234.4321f);

	//std::cout << "a is " << a << std::endl;
	//std::cout << "b is " << b << std::endl;
	//std::cout << "c is " << c << std::endl;
	//std::cout << "d is " << d << std::endl;

	//std::cout << "a is " << a.toInt() << " as integer" << std::endl;
	//std::cout << "b is " << b.toInt() << " as integer" << std::endl;
	//std::cout << "c is " << c.toInt() << " as integer" << std::endl;
	//std::cout << "d is " << d.toInt() << " as integer" << std::endl;

	//std::cout << "d is less than c: " << (d < c) << std::endl;
	//std::cout << "d is less than b: " << (d < b) << std::endl;
	//std::cout << "d is greater than c: " << (d > c) << std::endl;
	//std::cout << "d is greater than b: " << (d > b) << std::endl;
	//std::cout << "d is less than or equal to c: " << (d <= c) << std::endl;
	//std::cout << "d is less than or equal to b: " << (d <= b) << std::endl;
	//std::cout << "d is greater than or equal to c: " << (d >= c) << std::endl;
	//std::cout << "d is greater than or equal to b: " << (d >= b) << std::endl;
	//std::cout << "d is equal to c: " << (d == c) << std::endl;
	//std::cout << "d is equal to b: " << (d == b) << std::endl;
	//std::cout << "d is not equal to c: " << (d != c) << std::endl;
	//std::cout << "d is not equal to b: " << (d != b) << std::endl;

	//std::cout << "d + c = " << (d + c) << std::endl;
	//std::cout << "d + b = " << (d + b) << std::endl;
	//std::cout << "d - c = " << (d - c) << std::endl;
	//std::cout << "c - d = " << (c - d) << std::endl;
	//std::cout << "b - d = " << (b - d) << std::endl;
	//std::cout << "a * b = " << (a * b) << std::endl;
	//std::cout << "b * d = " << (b * d) << std::endl;
	//std::cout << "b / d = " << (b / d) << std::endl;
	//std::cout << "c / d = " << (c / d) << std::endl;

	
	return (0);
}
