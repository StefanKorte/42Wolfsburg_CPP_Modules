/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skorte <skorte@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 15:19:49 by skorte            #+#    #+#             */
/*   Updated: 2022/08/25 18:44:41 by skorte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <exception>
# include <list>
# include <algorithm>
# include <iostream>

class Span
{
	private:
		unsigned int const	_N;
		std::list<int>		_list;
		
		class OutOfRangeException: public std::exception{
			public: 
				const char *what(void) const throw();
		};
		class TooFewElementsException: public std::exception{
			public: 
				const char *what(void) const throw();
		};
	
	public:
		Span(unsigned int const n);
		Span(Span const &tocopy);
		~Span();
		Span &operator=(Span const &tocopy);

		void addNumber(int const n);
		void addNumbers(int const n[], unsigned int len);
		int shortestSpan();
		int longestSpan();
		void printSpan();
};

#endif
