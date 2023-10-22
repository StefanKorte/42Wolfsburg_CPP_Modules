/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skorte <skorte@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 13:42:25 by skorte            #+#    #+#             */
/*   Updated: 2022/08/14 14:42:14 by skorte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

unsigned int gradeTrim(unsigned int i) {
	if (i > 150)
		return 150;
	if (i < 1)
		return 1;
	return i;
}

Form::Form(const std::string name) : 
			_name(name), _signed(0), _gradeToSign(1), _gradeToExecute(150) {
	std::cout << "Form naming constructor called." << std::endl;
}

Form::Form(const std::string name,  unsigned int gradeToSign, unsigned int gradeToExecute) :
			 _name(name), _signed(0),
			 _gradeToSign(gradeTrim(gradeToSign)),
			 _gradeToExecute(gradeTrim(gradeToExecute)) {
	std::cout << "Form naming and grading constructor called." << std::endl;
	try {
		if (gradeToSign < 1 || gradeToExecute < 1)
			throw Form::GradeTooHighException();
	}
	catch (Form::GradeTooHighException& exc) {
		std::cout << "# " << exc.what() << " Set to minimum grade 150." << std::endl;
	}
	try {
		if (gradeToSign > 150 || gradeToExecute > 150)
			throw Form::GradeTooLowException();
	}
	catch (Form::GradeTooLowException& exc) {
		std::cout << "# " << exc.what() <<  " Set to minimum grade 150." << std::endl;
	}
}

Form::Form(const Form& tocopy):
			 _name(tocopy._name), _signed(tocopy._signed),
			 _gradeToSign(tocopy._gradeToSign),
			 _gradeToExecute(tocopy._gradeToExecute) {
	std::cout << "Form copy constructor called." << std::endl;
}

Form::~Form() {
	std::cout << "Form destructor called." << std::endl;
}

Form& Form::operator=(const Form& tocopy) {
	if (this != &tocopy) {
		this->_signed = tocopy._signed;
	}
	return *this;
}

std::string Form::getName() const {
	return this->_name;
}

bool Form::getSigned() const {
	return this->_signed;
}

unsigned int Form::getGradeToSign() const {
	return this->_gradeToSign;
}

unsigned int Form::getGradeToExecute() const {
	return this->_gradeToExecute;
}

void Form::setSigned(bool issigned) {
	this->_signed = issigned;
}

const char* Form::GradeTooHighException::what() const throw() {
    return "FormException: Grade too high.";
}
const char* Form::GradeTooLowException::what() const throw() {
    return "FormException: Grade too low.";
}
const char* Form::AlreadySignedException::what() const throw() {
    return "FormException: Is already signed.";
}

std::ostream &	operator<<( std::ostream & os, Form const & tocout) {
	os  << "Form " << tocout.getName() 
		<< ", signing grade " << tocout.getGradeToSign()
		<< ", execution grade " << tocout.getGradeToExecute();
	if (tocout.getSigned())
		os << ", already signed.";
	else
		os << ", not signed yet.";
	return os;
}

void Form::beSigned(const Bureaucrat &bc) {
	if(bc.getGrade() > _gradeToSign)
		throw Form::GradeTooLowException();
	else if (_signed == 1)
		throw Form::AlreadySignedException();
	setSigned(1);
}

void Form::SuccessSign(const Bureaucrat& bc) const {
	std::cout << "Bureaucrat " << bc.getName() << " signed Form " << _name << "." << std::endl;
}
void Form::ErrorAlreadySigned(const Bureaucrat& bc) const {
	std::cout << " Bureaucrat " << bc.getName() << " could not sign Form " << _name
		<< " because it already is signed." << std::endl;
}
void Form::ErrorGradeTooLowToSign(const Bureaucrat& bc) const {
	std::cout << " Bureaucrat " << bc.getName() << " could not sign Form " << _name
		<< " because his/her grade is too low." << std::endl;
}
