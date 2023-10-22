/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skorte <skorte@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 15:20:10 by skorte            #+#    #+#             */
/*   Updated: 2022/08/25 20:09:02 by skorte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stack>
#include <iterator>

/*
** The std::stack class is a container adaptor that gives the programmer the
** functionality of a stack - specifically, a LIFO (last-in, first-out) data structure.
**
** The class template acts as a wrapper to the underlying 
** Standard Template Library (STL) container
** - only a specific set of functions is provided. 
** The stack pushes and pops the element from the back of the underlying container,
** known as the top of the stack.
**
** Member objects: Container c
** the underlying container
** (protected member object)
*/

template<typename T>

class MutantStack: public std::stack<T> {
	public: 
		typedef typename std::stack<T>::container_type::iterator iterator;
		typedef typename std::stack<T>::container_type::const_iterator const_iterator;
		typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
		typedef typename std::stack<T>::container_type::const_reverse_iterator const_reverse_iterator;

		iterator begin(){return (this->c.begin());};
		const_iterator begin()const{return (this->c.begin());};

		iterator end(){return (this->c.end());};
		const_iterator end()const{return (this->c.end());};

		reverse_iterator rbegin(){return (this->c.rbegin());};
		const_reverse_iterator rbegin()const{return (this->c.rbegin());};

		reverse_iterator rend(){return (this->c.rend());};
		const_reverse_iterator rend()const{return (this->c.rend());};
};
