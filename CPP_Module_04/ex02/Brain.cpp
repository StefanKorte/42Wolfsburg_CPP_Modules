/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp     	                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skorte <skorte@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 18:40:27 by skorte            #+#    #+#             */
/*   Updated: 2022/08/09 23:31:49 by skorte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Brain.hpp"

Brain::Brain(void) {
	std::cout << "Brain default constructor called." << std::endl;
}

Brain::Brain(const Brain &tocopy){
	std::cout << "Brain copy constructor called." << std::endl;
	for (size_t i = 0; i < 100; i++) {
		this->_ideas[i] = tocopy._ideas[i];
		if (i == 0)
			std::cout << "Copying ideas." << std::endl; 
	}
}

Brain::~Brain(){
	std::cout << "Brain destructor called." << std::endl;
}

Brain &Brain::operator=(const Brain &tocopy){
	std::cout << "Brain copy operator called." << std::endl; 
	if(this != &tocopy){
		for (size_t i = 0; i < 100; i++) {
			this->_ideas[i] = tocopy._ideas[i];
			if (i == 0)
				std::cout << "Copying ideas." << std::endl; 
		}
	}
	return (*this);
}
