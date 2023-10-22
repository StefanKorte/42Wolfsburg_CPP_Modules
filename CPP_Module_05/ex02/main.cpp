/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skorte <skorte@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 18:11:02 by skorte            #+#    #+#             */
/*   Updated: 2022/08/20 16:57:30 by skorte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Form.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

int main()
{
	Bureaucrat a("Otto");
	std::cout << a << std::endl << std::endl;
	Bureaucrat b("Hans", 2);
	std::cout << b << std::endl << std::endl;

	{
	std::cout << std::endl << "--- ShrubberyCreationTest ---" << std::endl;
	ShrubberyCreationForm x("garden");
	std::cout << x << std::endl;
	a.executeForm(x);
	a.signForm(x);
	b.signForm(x);
	std::cout << x << std::endl;
	b.executeForm(x);
	a.executeForm(x);
	}

	{
	std::cout << std::endl << "--- RobotomyRequestTest ---" << std::endl;
	RobotomyRequestForm y("Homer Simpson");
	std::cout << y << std::endl;
	b.signForm(y);
	b.executeForm(y);
	b.executeForm(y);
	b.executeForm(y);
	b.executeForm(y);
	b.executeForm(y);
	}
	
	{
	std::cout << std::endl << "--- PresidentialPardonTest ---" << std::endl;
	PresidentialPardonForm z("Donalds Trompete");
	std::cout << z << std::endl;
	b.signForm(z);
	b.executeForm(z);
	}
	return 0;
}
