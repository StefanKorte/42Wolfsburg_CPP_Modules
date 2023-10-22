/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skorte <skorte@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 18:40:27 by skorte            #+#    #+#             */
/*   Updated: 2022/08/09 23:31:49 by skorte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Dog.hpp"

Dog::Dog(void): Animal(){
	this->_type = "Dog";
	std::cout << "Dog default constructor called." << std::endl;
}

Dog::Dog(const Dog &tocopy) : Animal(){
	*this = tocopy;
	std::cout << "Dog copy constructor called." << std::endl;
}

Dog::~Dog(){
	std::cout << "Dog destructor called." << std::endl;
}

Dog &Dog::operator=(const Dog &tocopy){
	if(this != &tocopy)
		this->_type = tocopy._type;
	return (*this);
}

void	Dog::makeSound(void) const {
	std::cout << "\"Woof!\"" << std::endl;
}
