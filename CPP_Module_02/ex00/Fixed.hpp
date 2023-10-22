/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skorte <skorte@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 00:56:54 by skorte            #+#    #+#             */
/*   Updated: 2022/08/07 00:26:45 by skorte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H
class Fixed
{
	private:
		static const int _bitShift = 8;
		int _rawBits;

	public:
		Fixed(void);
		Fixed(const Fixed &tocopy);
		~Fixed(void);
		
		Fixed	&operator=(const Fixed &tocopy);

		int getRawBits() const;
		void setRawBits(int const rawBits);
};
#endif
