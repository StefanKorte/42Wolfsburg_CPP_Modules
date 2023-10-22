/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skorte <skorte@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 00:13:52 by skorte            #+#    #+#             */
/*   Updated: 2022/08/07 00:17:52 by skorte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

bool bsp( Point const &a, Point const &b, Point const &c, Point const &point)
{
	Fixed a_x(a.getX() - c.getX());
	Fixed a_y(a.getY() - c.getY());
	Fixed b_x(b.getX() - c.getX());
	Fixed b_y(b.getY() - c.getY());
	Fixed p_x(point.getX() - c.getX());
	Fixed p_y(point.getY() - c.getY());

	Fixed a_proj = (p_x * b_y - p_y * b_x)/(a_x * b_y - a_y * b_x);
	Fixed b_proj = (p_x * a_y - p_y * a_x)/(b_x * a_y - b_y * a_x);
	
	std::cout << "a_proj " << a_proj << " b_proj " << b_proj << std::endl;
	
	if (a_proj > 0 && b_proj > 0 && a_proj + b_proj < 1)
	{
		std::cout << "is inside " << std::endl;
		return 1;
	}
	else if (a_proj >= 0 && b_proj >= 0 && a_proj + b_proj <= 1)
		std::cout << "is on edge " << std::endl;
	else	
		std::cout << "is outside " << std::endl;
	return (0);
}
