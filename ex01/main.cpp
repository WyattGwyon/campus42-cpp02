/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clouden <clouden@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/16 16:05:21 by clouden           #+#    #+#             */
/*   Updated: 2026/05/16 18:38:41 by clouden          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int	main(void)
{
	Fixed	a;
	Fixed	const b( 10 );
	Fixed	const c(42.42f);
	Fixed	const d( b );

	a = Fixed(1234.4321f);

	std::cout << "a is" << a << std::endl;
	std::cout << "b is" << b << std::endl;
	std::cout << "c is" << c << std::endl;
	std::cout << "d is" << d << std::endl;

	std::cout << "a is" << a.getInt() << "as integer" << std::endl;
	std::cout << "b is" << b.getInt() << "as integer" << std::endl;
	std::cout << "c is" << c.getInt() << "as integer" << std::endl;
	std::cout << "d is" << d.getInt() << "as integer" << std::endl;
}
