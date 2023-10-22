/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skorte <skorte@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 18:40:27 by skorte            #+#    #+#             */
/*   Updated: 2022/08/13 16:20:05 by skorte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "WrongCat.hpp"

WrongCat::WrongCat(void): WrongAnimal(){
	this->_type = "WrongCat";
	std::cout << "WrongCat default constructor called." << std::endl;
}

WrongCat::WrongCat(const WrongCat &tocopy) : WrongAnimal(){
	*this = tocopy;
	std::cout << "WrongCat copy constructor called." << std::endl;
}

WrongCat::~WrongCat(){
	std::cout << "WrongCat destructor called." << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &tocopy){
	if(this != &tocopy)
		this->_type = tocopy._type;
	return (*this);
}

void	WrongCat::makeSound(void) const {
	std::cout << "\"Meow! Meow!\"" << std::endl;
}
