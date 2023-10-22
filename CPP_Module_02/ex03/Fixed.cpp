/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skorte <skorte@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 00:56:57 by skorte            #+#    #+#             */
/*   Updated: 2022/08/06 18:12:38 by skorte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

Fixed::Fixed(void)
{
//	std::cout << "Default constructor called" << std::endl;
	this->_rawBits = 0;
}

Fixed::~Fixed(void)
{
//	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &tocopy)
{
//	std::cout << "Copy constructor called" << std::endl;
	this->_rawBits = tocopy.getRawBits();
}

Fixed::Fixed(const int i)
{
//	std::cout << "Integer to Fixed constructor called" << std::endl;
	this->_rawBits = (i << this->_bitShift);
	if (i != ((i << this->_bitShift) >> this->_bitShift))
		std::cout << "Integer truncated" << std::endl;
}

int Fixed::toInt( void ) const
{
//	std::cout << "toInt member function called" << std::endl;
	return (this->_rawBits >> this->_bitShift);
}

Fixed::Fixed(const float f)
{
//	std::cout << "Float to Fixed constructor called" << std::endl;
	this->_rawBits = roundf(f * (1 << this->_bitShift));
}

float Fixed::toFloat( void ) const
{
//	std::cout << "toFloat member function called" << std::endl;
	int i = (1 << this->_bitShift);
	return (((float)_rawBits / i));
}

Fixed &Fixed::operator=(const Fixed &tocopy)
{
//	std::cout << "Copy assignment operator called" << std::endl;
	this->_rawBits = tocopy.getRawBits();
	return (*this);
}
		
int Fixed::getRawBits(void) const
{
//	std::cout << "getRawBits member function called" << std::endl;
	return (this->_rawBits);	
}

void Fixed::setRawBits(int const rawBits)
{
//	std::cout << "setRawBits member function called" << std::endl;
	this->_rawBits = rawBits;
}

std::ostream& operator<<(std::ostream &os, const Fixed &fixed)
{
	os << fixed.toFloat();
	return (os);
}

Fixed Fixed::operator+(const Fixed &fixed) const
{
	Fixed result;
	result.setRawBits(this->_rawBits + fixed.getRawBits());
	return (result);
}

Fixed Fixed::operator-(const Fixed &fixed) const
{
	Fixed result;
	result.setRawBits(this->_rawBits - fixed.getRawBits());
	return (result);
}

Fixed Fixed::operator*(const Fixed &fixed) const
{
	return (Fixed(this->toFloat() * fixed.toFloat()));
}

Fixed Fixed::operator/(const Fixed &fixed) const
{
	return (Fixed(this->toFloat() / fixed.toFloat()));
}

bool Fixed::operator==(const Fixed &fixed) const
{
	return (this->getRawBits()==fixed.getRawBits());
}

bool Fixed::operator!=(const Fixed &fixed) const
{
	return (this->getRawBits()!=fixed.getRawBits());
}

bool Fixed::operator<(const Fixed &fixed) const
{
	return (this->getRawBits()<fixed.getRawBits());
}

bool Fixed::operator>(const Fixed &fixed) const
{
	return (this->getRawBits()>fixed.getRawBits());
}

bool Fixed::operator<=(const Fixed &fixed) const
{
	return (this->getRawBits()<=fixed.getRawBits());
}

bool Fixed::operator>=(const Fixed &fixed) const
{
	return (this->getRawBits()>=fixed.getRawBits());
}

Fixed	Fixed::operator++(int) // fixed++
{
	Fixed old(*this);
	this->_rawBits += 1;
	return (old);
}

Fixed	Fixed::operator++(void) // ++fixed
{
	this->_rawBits += 1;
	return (*this);
}

Fixed	Fixed::operator--(int) // fixed--
{
	Fixed old(*this);
	this->_rawBits -= 1;
	return (old);
}

Fixed	Fixed::operator--(void) // --fixed
{
	this->_rawBits -= 1;
	return (*this);
}

Fixed	&Fixed::max(Fixed &a, Fixed &b)
{
	if (a.toFloat() >= b.toFloat())
		return a;
	return b;
}

Fixed	&Fixed::min(Fixed &a, Fixed &b)
{
	if (a.toFloat() <= b.toFloat())
		return a;
	return b;
}

Fixed const	&Fixed::max(const Fixed &a, const Fixed &b)
{
	if (a.toFloat() >= b.toFloat())
		return a;
	return b;
}

Fixed const	&Fixed::min(const Fixed &a, const Fixed &b)
{
	if (a.toFloat() <= b.toFloat())
		return a;
	return b;
}
