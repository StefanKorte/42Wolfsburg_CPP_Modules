/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skorte <skorte@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 18:59:12 by skorte            #+#    #+#             */
/*   Updated: 2022/08/19 15:27:28 by skorte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : // private, will not be used
	Form("RobotomyRequestForm", 72, 45) {
	std::cout << "RobotomyRequestForm default constructor called." << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) :
	Form("RobotomyRequestForm", 72, 45) {
	this->setTarget(target);
	std::srand(time(NULL));
	std::cout << "RobotomyRequestForm targeted constructor called." << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& tocopy) : Form(tocopy) {
	*this = tocopy;
	return;
}
RobotomyRequestForm::~RobotomyRequestForm() {}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& tocopy) {
	if (this != &tocopy) {
		this->~RobotomyRequestForm();
    	new (this) RobotomyRequestForm(tocopy.getTarget());
		this->setSigned(tocopy.getSigned());
	}
	return *this;
}

void RobotomyRequestForm::executeThis() const {
	std::cout << "DrrrRRrr Zrrrrhrhrr rrrRrr prrffr" << std::endl;
	if (std::rand() % 2)
		std::cout << "Beep boop! " << this->getTarget() << " has been robotomized successfully!" << std::endl;	
	else
		std::cout << "Huh? " << this->getTarget() << " could not be robotomized!" << std::endl;	
	return ;
}
