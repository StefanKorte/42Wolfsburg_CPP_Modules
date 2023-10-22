/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skorte <skorte@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 00:56:54 by skorte            #+#    #+#             */
/*   Updated: 2022/08/07 20:35:45 by skorte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H
#include <cmath>
#include <iostream>

#ifndef BITSHIFT
static const int BITSHIFT = 8;
#endif

class Fixed
{
	private:
		static const int _bitShift = BITSHIFT;
		int _rawBits;

	public:
		Fixed(void);
		Fixed(const Fixed &tocopy);
		Fixed(const int i);
		Fixed(const float f);
		~Fixed(void);
		
		Fixed	&operator=(const Fixed &tocopy);

		float toFloat( void ) const;
		int toInt( void ) const;
		int getRawBits() const;
		void setRawBits(int const rawBits);

		//A friend function in C++ is defined as a function
		// that can access private, protected and public members of a class.
//		friend std::ostream& operator<<(std::ostream &os, const Fixed &fixed);


		Fixed	operator+(const Fixed &fixed) const;
		Fixed	operator-(const Fixed &fixed) const;
		Fixed	operator*(const Fixed &fixed) const;
		Fixed	operator/(const Fixed &fixed) const;

		bool	operator==(const Fixed &fixed) const;
		bool	operator!=(const Fixed &fixed) const;
		bool	operator<(const Fixed &fixed) const;
		bool	operator>(const Fixed &fixed) const;
		bool	operator<=(const Fixed &fixed) const;
		bool	operator>=(const Fixed &fixed) const;
		
		Fixed	operator++(int);   // fixed++
		Fixed	operator++(void);  // ++fixed
		Fixed	operator--(int);   // fixed--
		Fixed	operator--(void);  // --fixed

		static Fixed	&max(Fixed &a, Fixed &b);
		static Fixed	&min(Fixed &a, Fixed &b);
		static const Fixed	&max(const Fixed &a, const Fixed &b);
		static const Fixed	&min(const Fixed &a, const Fixed &b);
};

std::ostream& operator<<(std::ostream &os, const Fixed &fixed);

#endif
