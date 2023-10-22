/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skorte <skorte@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 15:19:32 by skorte            #+#    #+#             */
/*   Updated: 2022/08/25 18:45:07 by skorte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int const n): _N(n) {}

Span::~Span(){}

Span::Span(Span const &tocopy): _N(tocopy._N) {
	this->_list = tocopy._list;
}
	
Span &Span::operator=(Span const &tocopy) {
	if (this != &tocopy) {
		this->~Span();
    	new (this) Span(tocopy._N); 
		this->_list = tocopy._list;
	}
	return (*this);
}

void Span::addNumber(int n) {
	if (this->_list.size() == _N)
		throw OutOfRangeException();

	std::list<int>::iterator it = this->_list.begin();
	std::list<int>::iterator end = this->_list.end();
	for (*it; it != end; it++){
		if (*it >= n) {
			this->_list.insert(it, n);
			return ;
		}
	}
	this->_list.push_back(n);
}

void Span::addNumbers(int const n[], unsigned int len) {
	for (unsigned int i = 0; i < len; i++)
		this->addNumber(n[i]);
}

int Span::longestSpan() {
	if (this->_list.size() < 2)
		throw TooFewElementsException();
	
	int longest = this->_list.back() - this->_list.front();
	return (longest);
}

int Span::shortestSpan() {
	if (this->_list.size() < 2)
		throw TooFewElementsException();
	
	std::list<int>::iterator it = this->_list.begin();
	std::list<int>::iterator end = this->_list.end();
	int shortest = this->_list.back() - this->_list.front();
	int last = *it;
	it++;
	for (*it; it!=end; it++){
		if (shortest > (*it - last))
			shortest = (*it - last);
		last = *it;
	}
	return (shortest);
}

const char *Span::OutOfRangeException::what(void) const throw() { 
	return("Index out of Range.");
}

const char *Span::TooFewElementsException::what(void) const throw() {  
	return("Cannot compute. Too few elements.");
}

void Span::printSpan() {
	std::list<int>::iterator it = this->_list.begin();
	std::list<int>::iterator end = this->_list.end();
	std::cout << "{";
	for (*it; it != end; it++) {
		std::cout << *it << " ";
	}
	std::cout << "}" << std::endl;
}
