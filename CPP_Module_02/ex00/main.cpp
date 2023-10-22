/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skorte <skorte@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 00:55:04 by skorte            #+#    #+#             */
/*   Updated: 2022/08/06 11:43:18 by skorte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

int main( void ) {
Fixed a;
Fixed b( a );
Fixed c;
c = b;
std::cout << std::endl;

std::cout << a.getRawBits() << std::endl;
std::cout << b.getRawBits() << std::endl;
std::cout << c.getRawBits() << std::endl;
std::cout << std::endl;

b.setRawBits(42);
std::cout << b.getRawBits() << std::endl;
std::cout << c.getRawBits() << std::endl;
std::cout << std::endl;

c = b;
std::cout << c.getRawBits() << std::endl;
std::cout << b.getRawBits() << std::endl;
return 0;
}
