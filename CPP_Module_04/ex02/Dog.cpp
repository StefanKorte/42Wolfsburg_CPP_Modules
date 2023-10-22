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
	std::cout << "Dog default constructor called." << std::endl;
	this->_type = "Dog";
	this->_brain = new Brain();
}

Dog::Dog(const Dog &tocopy) : Animal(){
	std::cout << "Dog copy constructor called." << std::endl;
	this->_type = tocopy._type;
	this->_brain = new Brain(*tocopy._brain);
}

Dog::~Dog(){
	std::cout << "Dog destructor called." << std::endl;
	delete this->_brain;
}

Dog &Dog::operator=(const Dog &tocopy){
	if(this == &tocopy)
		return (*this);
	this->_type = tocopy._type;
	this->_brain = new Brain(*tocopy._brain);
	return (*this);
}

void	Dog::makeSound(void) const {
	std::cout << "\"Woof!\"" << std::endl;
}
