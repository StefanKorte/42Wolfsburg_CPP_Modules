/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skorte <skorte@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 18:40:27 by skorte            #+#    #+#             */
/*   Updated: 2022/08/09 23:31:49 by skorte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Cat.hpp"

Cat::Cat(void): Animal(){
	std::cout << "Cat default constructor called." << std::endl;
	this->_type = "Cat";
	this->_brain = new Brain();
}

Cat::Cat(const Cat &tocopy) : Animal() {
	std::cout << "Cat copy constructor called." << std::endl;
	this->_type = tocopy._type;
	this->_brain = new Brain(*tocopy._brain);
}

Cat::~Cat(){
	std::cout << "Cat destructor called." << std::endl;
	delete this->_brain;
}

Cat &Cat::operator=(const Cat &tocopy){
	if(this == &tocopy)
		return (*this);
	this->_type = tocopy._type;
	this->_brain = new Brain(*tocopy._brain);
	return (*this);
}

void	Cat::makeSound(void) const {
	std::cout << "\"Meow! Meow!\"" << std::endl;
}
