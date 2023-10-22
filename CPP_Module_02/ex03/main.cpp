/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skorte <skorte@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 00:55:04 by skorte            #+#    #+#             */
/*   Updated: 2022/08/08 16:25:45 by skorte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"
#include <iostream>

bool bsp( Point const &a, Point const &b, Point const &c, Point const &p);

int main( void )
{
	const Point a(1,2);
	const Point b(2,0);
	const Point c(0,0);
	const Point point(1, 0);

	bool inside = bsp(a, b, c, point);
	std::cout << "bool is inside " << inside << std::endl; 
	return 0;
}
