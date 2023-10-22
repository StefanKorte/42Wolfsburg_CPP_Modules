/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skorte <skorte@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 18:11:02 by skorte            #+#    #+#             */
/*   Updated: 2022/08/20 17:06:51 by skorte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Form.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"

int main()
{
	Bureaucrat b("Hans", 2);
	std::cout << b << std::endl << std::endl;
	Intern *in = new Intern();
	Form* f;
	f = in->makeForm("PresidentialPardonForm", "me");
	std::cout << *f << std::endl;
	b.signForm(*f);
	b.executeForm(*f);
	delete f;
	delete in;

	Intern in2;
	f = in2.makeForm("RobotomyRequestForm", "me");
	std::cout << *f << std::endl;
	b.signForm(*f);
	b.executeForm(*f);
	delete f;
	return 0;
}
