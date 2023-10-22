/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skorte <skorte@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 00:56:54 by skorte            #+#    #+#             */
/*   Updated: 2022/08/07 20:29:49 by skorte           ###   ########.fr       */
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
//		friend std::ostream& operator<<(std::ostream &os, const Fixed &fixed)		
};

std::ostream& operator<<(std::ostream &os, const Fixed &fixed);
#endif

