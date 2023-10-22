/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skorte <skorte@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 18:11:02 by skorte            #+#    #+#             */
/*   Updated: 2022/08/20 17:59:45 by skorte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <exception>
#include "Form.hpp"
#include "Bureaucrat.hpp"

int main()
{
	Bureaucrat a("Otto");
	std::cout << a << std::endl << std::endl;
	Bureaucrat b("Hans", 2);

	std::cout << "---Form signing tests---" << std::endl;
	Form x("Passierschein A38");
	std::cout << x << std::endl;
	try {x.beSigned(b);}
	catch (Form::GradeTooLowException& exc){
		std::cout << "# " << exc.what() << std::endl;}
	catch (Form::AlreadySignedException& exc){
		std::cout << "# " << exc.what() << std::endl;}
	b.signForm(x);
	std::cout << x << std::endl;
	std::cout << b << std::endl;
	b.incGrade();
	std::cout << b << std::endl;
	std::cout << x << std::endl;
	x.beSigned(b);
	try {x.beSigned(b);}
	catch (Form::GradeTooLowException& exc){
		std::cout << "# " << exc.what() << std::endl;}
	catch (Form::AlreadySignedException& exc){
		std::cout << "# " << exc.what() << std::endl;}
	b.signForm(x);
	std::cout << x << std::endl;

	std::cout << std::endl << "---Form tests 2---" << std::endl;
	Form y("Everything-allowed-until-explicitly-forbidden", 20, 30);
	std::cout << y << std::endl;
	y.beSigned(Bureaucrat("Hilda", 1));
	std::cout << y << std::endl;

	std::cout << std::endl << "---Form exception tests---" << std::endl;
	Form z("Obsolete Form", 0, 151);
	std::cout << z << std::endl;

	std::cout << std::endl << "---Form heap and copy test---" << std::endl;
	Form* zz = new Form(z);
	std::cout << *zz << std::endl;
	b.signForm(*zz);
	delete zz;

	std::cout << std::endl << "---End---" << std::endl;
	return 0;
}
