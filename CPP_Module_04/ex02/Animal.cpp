/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp     	                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skorte <skorte@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 18:40:27 by skorte            #+#    #+#             */
/*   Updated: 2022/08/09 23:31:49 by skorte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Animal.hpp"

Animal::Animal(void): _type("Wolpertinger"){
	std::cout << "Animal default constructor called." << std::endl;
}

Animal::Animal(const Animal &tocopy){
	*this = tocopy;
	std::cout << "Animal copy constructor called." << std::endl;
}

Animal::~Animal(){
	std::cout << "Animal destructor called." << std::endl;
}

Animal &Animal::operator=(const Animal &tocopy){
	if(this != &tocopy)
		this->_type = tocopy._type;
	return (*this);
}

std::string	Animal::getType(void) const {
	return (_type);
}
