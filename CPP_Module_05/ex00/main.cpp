/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skorte <skorte@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 18:11:02 by skorte            #+#    #+#             */
/*   Updated: 2022/08/14 18:39:45 by skorte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"

int main()
{
	std::cout << std::endl << "---Bureaucrat constructor tests---" << std::endl;
	Bureaucrat a("Otto");
	std::cout << a << std::endl << std::endl;
	Bureaucrat b("Hans", 2);
	std::cout << b << std::endl << std::endl;
	Bureaucrat c("Hilda", 151);
	std::cout << c << std::endl << std::endl;
	Bureaucrat d("Gert", 0);
	std::cout << d << std::endl << std::endl;
	Bureaucrat e(a);
	std::cout << e << std::endl << std::endl;

	std::cout << std::endl << "---Bureaucrat copy operator tests---" << std::endl;
	std::cout << d << std::endl;
	d = c;
	std::cout << d << std::endl << std::endl;


	std::cout << "---Increment/Decrement tests---" << std::endl;
	std::cout << b << std::endl;
	b.incGrade();
	std::cout << b << std::endl;
	b.incGrade();
	std::cout << b << std::endl;
	b.decGrade();
	std::cout << b << std::endl;

	std::cout << a << std::endl;
	a.decGrade();
	std::cout << a << std::endl;
	a.incGrade();
	std::cout << a << std::endl;
	a.decGrade();
	std::cout << a << std::endl;

	return 0;
}
