/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skorte <skorte@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 00:55:04 by skorte            #+#    #+#             */
/*   Updated: 2022/08/06 18:52:23 by skorte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>


int main( void )
{
	{
	std::cout << "subject tests" << std::endl;
	std::cout << std::endl;
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;
	}
	std::cout << std::endl;
	{
	std::cout << "my tests" << std::endl;
	std::cout << std::endl;
	Fixed a(42);
	Fixed b(0.42f);
	Fixed c;
	Fixed d(-100);
	Fixed const bb(b);
	Fixed const dd(d);

 	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;
	std::cout << "c is " << c << std::endl;
	std::cout << "d is " << d << std::endl;
 	std::cout << "const bb is " << bb << std::endl;
	std::cout << "const dd is " << dd << std::endl;
	std::cout << std::endl;

 	std::cout << "a + b is " << (a + b) << std::endl;
	std::cout << "b - a is " << (b - a) << std::endl;
	std::cout << "b * d is " << (b * d) << std::endl;
	std::cout << "d / b is " << (d / b) << std::endl;
	std::cout << std::endl;

	std::cout << "a == b is " << (a == b) << std::endl;
	std::cout << "b == b is " << (b == b) << std::endl;
	std::cout << "b > d is " << (b > d) << std::endl;
	std::cout << "b < d is " << (b < d) << std::endl;
	std::cout << "const bb > const dd is " << (bb > dd) << std::endl;
	std::cout << "const bb < const dd is " << (bb < dd) << std::endl;
	std::cout << std::endl;

	std::cout << "a is " << a << std::endl;
	std::cout << "a++ is " << a++ << std::endl;
	std::cout << "a is " << a << std::endl;	
	std::cout << "a-- is " << a-- << std::endl;
	std::cout << "a is " << a << std::endl;
	std::cout << "--a is " << --a << std::endl;
	std::cout << "a is " << a << std::endl;	
	std::cout << "++a is " << ++a << std::endl;
	std::cout << "a is " << a << std::endl;
	std::cout << std::endl;
	
	std::cout << "max (b, d) is " << Fixed::max(b, d) << std::endl;
	std::cout << "min (b, d) is " << Fixed::min(b, d) << std::endl;
	std::cout << "max (const bb, const dd) is " << Fixed::max(bb, dd) << std::endl;
	std::cout << "min (const bb, const dd) is " << Fixed::min(bb, dd) << std::endl;
	}
	return 0;
}