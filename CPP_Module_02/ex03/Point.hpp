/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skorte <skorte@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 00:56:54 by skorte            #+#    #+#             */
/*   Updated: 2022/08/07 00:27:25 by skorte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_H
# define POINT_H
#include <cmath>
#include <iostream>
#include "Fixed.hpp"


class Point
{
	private:
		Fixed _x;
		Fixed _y;

	public:
		Point(void);
		Point(Point &tocopy);
		Point(const Point &tocopy);
		Point(Fixed x, Fixed y);
		~Point(void);
		
		Point	&operator=(Point &tocopy);

		Fixed getX( void ) const;
		Fixed getX( void );
		Fixed getY( void ) const;
		Fixed getY( void );
		void setX( Fixed x);
		void setY( Fixed y);

		Point	operator+( Point &point);
		Point	operator-( Point &point);
};
#endif
