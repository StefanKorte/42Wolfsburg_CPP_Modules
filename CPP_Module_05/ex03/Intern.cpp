/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skorte <skorte@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 12:27:40 by skorte            #+#    #+#             */
/*   Updated: 2022/08/20 17:04:49 by skorte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern() {
	std::cout << "Hey folks, we found an intern to do our work!" << std::endl;
}

Intern::Intern(const Intern& src) {
	*this = src;
}
Intern::~Intern() {
	std::cout << "The intern is gone! Who's gonna do my work now?" << std::endl;
}

Intern& Intern::operator=(const Intern& tocopy) {
	if (this != &tocopy) {}
	return *this ; // Interns have no unique characteristics
}

Form* Intern::makeForm(std::string form, std::string target) {
	std::string forms[3] = 
		{"PresidentialPardonForm", 
		"RobotomyRequestForm", 
		"ShrubberyCreationForm"
		};
	int i = 0;
	while ( form != forms[i] && i < 3)
		i++;
	switch (i) {
		case 0 : {
			std::cout << "An intern prepares a new " << form << "." << std::endl;
			return new PresidentialPardonForm(target);
		}
		case 1 : {
			std::cout << "An intern prepares a new " << form << "." << std::endl;
			return new RobotomyRequestForm(target);
		}
		case 2 : {
			std::cout << "An intern prepares " << form << "." << std::endl;
			return new ShrubberyCreationForm(target);
		}
	}
	std::cout << "Error: The intern could not find any form of the type "
		<< form << "." << std::endl;
	return NULL;
}
