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
	this->_type = "Cat";
	std::cout << "Cat default constructor called." << std::endl;
}

Cat::Cat(const Cat &tocopy) : Animal(){
	*this = tocopy;
	std::cout << "Cat copy constructor called." << std::endl;
}

Cat::~Cat(){
	std::cout << "Cat destructor called." << std::endl;
}

Cat &Cat::operator=(const Cat &tocopy){
	if(this != &tocopy)
		this->_type = tocopy._type;
	return (*this);
}

void	Cat::makeSound(void) const {
	std::cout << "\"Meow! Meow!\"" << std::endl;
}
