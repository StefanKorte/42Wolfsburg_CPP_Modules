/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skorte <skorte@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 00:56:57 by skorte            #+#    #+#             */
/*   Updated: 2022/08/07 00:18:16 by skorte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include <iostream>

Point::Point(void)
{
//	std::cout << "Default constructor called" << std::endl;
	this->_x = 0;
	this->_y = 0;
}

Point::~Point(void)
{
//	std::cout << "Destructor called" << std::endl;
}

Point::Point(Point &tocopy)
{
//	std::cout << "Copy constructor called" << std::endl;
//	this->_x;
	Fixed a = tocopy.getX();
	this->_y = tocopy.getY();
}

Point::Point(const Point &tocopy)
{
//	std::cout << "Copy constructor called" << std::endl;
//	this->_x;
	Fixed a = tocopy.getX();
	this->_y = tocopy.getY();
}

Point::Point(Fixed x, Fixed y)
{
	this->_x = x;
	this->_y = y;
}

Fixed Point::getX( void ) const
{	
	return (this->_x);
}

Fixed Point::getX( void )
{	
	return (this->_x);
}

Fixed Point::getY( void ) const
{	
	return (this->_y);
}

Fixed Point::getY( void )
{	
	return (this->_y);
}

void Point::setX(Fixed x)
{
	this->_x = x;
}

void Point::setY(Fixed y)
{
	this->_y = y;
}

Point &Point::operator=(Point &tocopy)
{
//	std::cout << "Copy assignment operator called" << std::endl;
	this->_x = tocopy.getX();
	this->_y = tocopy.getY();
	return (*this);
}

Point Point::operator+(Point &point)
{
	Point result;
	result.setX(this->_x + point.getX());
	result.setY(this->_y + point.getY());
	return(result);
}

Point Point::operator-(Point &point)
{
	Point result;
	result.setX(this->_x - point.getX());
	result.setY(this->_y - point.getY());
	return (result);
}
