/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skorte <skorte@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 18:59:12 by skorte            #+#    #+#             */
/*   Updated: 2022/08/19 15:27:28 by skorte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : // private, will not be used
	Form("PresidentialPardonForm", 25, 5) {
	std::cout << "PresidentialPardonForm default constructor called." << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) :
	Form("PresidentialPardonForm", 25, 5) {
	this->setTarget(target);
	std::cout << "PresidentialPardonForm targeted constructor called." << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& tocopy) : Form(tocopy) {
	*this = tocopy;
	return;
}
PresidentialPardonForm::~PresidentialPardonForm() {}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& tocopy) {
	if (this != &tocopy) {
		this->~PresidentialPardonForm();
    	new (this) PresidentialPardonForm(tocopy.getTarget());
		this->setSigned(tocopy.getSigned());
	}
	return *this;
}

void PresidentialPardonForm::executeThis() const {
	std::cout << this->getTarget() << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}
