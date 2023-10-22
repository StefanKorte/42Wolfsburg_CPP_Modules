/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skorte <skorte@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 18:59:12 by skorte            #+#    #+#             */
/*   Updated: 2022/08/20 16:38:12 by skorte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : // private, will not be used
	Form("ShrubberyCreationForm", 145, 137) {
	std::cout << "ShrubberyCreationForm default constructor called." << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) :
	Form("ShrubberyCreationForm", 145, 137) {
	this->setTarget(target);
	std::cout << "ShrubberyCreationForm targeted constructor called." << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& tocopy) : Form(tocopy) {
	*this = tocopy;
	return;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& tocopy) {
	if (this != &tocopy) {
		this->~ShrubberyCreationForm();
    	new (this) ShrubberyCreationForm(tocopy.getTarget());
		this->setSigned(tocopy.getSigned());
	}
	return *this;
}

void ShrubberyCreationForm::executeThis() const {
	std::ofstream outfile;
	outfile.open((this->getTarget() + "_shrubbery").c_str()); // std::ios::out | std::ios::app);
	outfile 	<< "\n	     ccee88oo \n"
				<< "  C8O8O8Q8PoOb o8oo \n"
				<< " dOB69QO8PdUOpugoO9bD \n"
				<< "CgggbU8OU qOp qOdoUOdcb \n"
				<< "    6OuU  /p u gcoUodpP \n"
				<< "      \\ //  /douUP \n"
				<< "        \\ //// \n"
				<< "         |||/I \n"
				<< "         |||0! \n"
				<< "         ||||| \n"
				<< "   .....//||||\\.... \n" ;

	outfile.close();
}
