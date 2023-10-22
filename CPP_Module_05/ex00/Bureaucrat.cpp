/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skorte <skorte@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 13:42:25 by skorte            #+#    #+#             */
/*   Updated: 2022/08/17 18:11:51 by skorte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() {}  // default constructor, private, not usable!

Bureaucrat::Bureaucrat(const std::string name) : _name(name), _grade(150) {
	std::cout << "Bureaucrat naming constructor called." << std::endl;
}

Bureaucrat::Bureaucrat(const std::string name, unsigned int grade) : _name(name) {
	std::cout << "Bureaucrat naming and grading constructor called." << std::endl;
	try {
		if (grade < 1)
			throw Bureaucrat::GradeTooHighException();
		if (grade > 150)
			throw Bureaucrat::GradeTooLowException();
		this->_grade = grade;
	}
	catch (Bureaucrat::GradeTooHighException& exc) {
		std::cout << "# " << exc.what() << " Set to minimum grade 150." << std::endl;
		this->_grade = 150;
	}
	catch (Bureaucrat::GradeTooLowException& exc) {
		std::cout << "# " << exc.what() <<  " Set to minimum grade 150." << std::endl;
		this->_grade = 150;
	}
}

Bureaucrat::Bureaucrat(const Bureaucrat& tocopy): _name(tocopy._name), _grade(tocopy._grade) {
	std::cout << "Bureaucrat copy constructor called." << std::endl;
}

Bureaucrat::~Bureaucrat() {
	std::cout << "Bureaucrat destructor called." << std::endl;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& tocopy) {
	if (this != &tocopy) {
		this->~Bureaucrat();
    	new (this) Bureaucrat(tocopy._name, tocopy._grade); 
	}
	return *this;
}

std::string Bureaucrat::getName() const {
	return this->_name;
}

unsigned int Bureaucrat::getGrade() const {
	return this->_grade;
}

void Bureaucrat::incGrade() {
	try {
		if (this->_grade == 1)
			throw Bureaucrat::GradeTooHighException();
		this->_grade--;
	}
	catch (Bureaucrat::GradeTooHighException& exc) {
		std::cout << "# " << exc.what() << " Already has highest grade 1." << std::endl;
	}
}

void Bureaucrat::decGrade() {
	try {
		if (this->_grade == 150)
			throw Bureaucrat::GradeTooLowException();
		this->_grade++;
	} 
	catch (Bureaucrat::GradeTooLowException& exc) {
		std::cout << "# " << exc.what() << " Already has lowest grade 150." << std::endl;
	}
}

const char* Bureaucrat::GradeTooHighException::what() const throw() {
    return "BureaucratException: Grade too high.";
}

const char* Bureaucrat::GradeTooLowException::what() const throw() {
    return "BureaucratException: Grade too low.";
}

std::ostream &	operator<<( std::ostream & os, Bureaucrat const & tocout) {
	os << tocout.getName() << ", bureaucrat grade " << tocout.getGrade();
	return os;
}
