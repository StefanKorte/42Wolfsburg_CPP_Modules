/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongDog.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skorte <skorte@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 18:40:27 by skorte            #+#    #+#             */
/*   Updated: 2022/08/13 16:20:19 by skorte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "WrongDog.hpp"

WrongDog::WrongDog(void): WrongAnimal(){
	this->_type = "WrongDog";
	std::cout << "WrongDog default constructor called." << std::endl;
}

WrongDog::WrongDog(const WrongDog &tocopy) : WrongAnimal(){
	*this = tocopy;
	std::cout << "WrongDog copy constructor called." << std::endl;
}

WrongDog::~WrongDog(){
	std::cout << "WrongDog destructor called." << std::endl;
}

WrongDog &WrongDog::operator=(const WrongDog &tocopy){
	if(this != &tocopy)
		this->_type = tocopy._type;
	return (*this);
}

void	WrongDog::makeSound(void) const {
	std::cout << "\"Woof!\"" << std::endl;
}
