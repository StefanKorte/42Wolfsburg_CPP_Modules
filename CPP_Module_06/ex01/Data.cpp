/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skorte <skorte@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 13:42:25 by skorte            #+#    #+#             */
/*   Updated: 2022/08/22 17:17:50 by skorte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

Data::Data() {}  // default constructor, private, not usable!

Data::Data(const int some_data) : _some_data(some_data) 
{ std::cout << "Data constructor called." << std::endl;}

Data::Data(const Data& tocopy): _some_data(tocopy.getData()) 
{ std::cout << "Data copy constructor called." << std::endl;}

Data::~Data() 
{ std::cout << "Data destructor called." << std::endl;}

Data& Data::operator=(const Data& tocopy) {
	this->_some_data = tocopy.getData();
	return *this;
}

int Data::getData() const {
	return this->_some_data;
}

std::ostream &	operator<<( std::ostream & os, Data const & tocout) {
	os << tocout.getData();
	return os;
}
