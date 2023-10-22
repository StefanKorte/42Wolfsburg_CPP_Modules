/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp     	                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skorte <skorte@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 18:40:27 by skorte            #+#    #+#             */
/*   Updated: 2022/08/09 23:31:49 by skorte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <exception>
# include "Form.hpp"

class Form;

class Bureaucrat {
	private:
		const std::string	_name;
		unsigned int		_grade;
	
		Bureaucrat(); // default constructor, private, not usable

	public:
		Bureaucrat(const std::string name);
		Bureaucrat(const std::string name, unsigned int grade);
		Bureaucrat(const Bureaucrat& tocopy);
		virtual ~Bureaucrat();
		Bureaucrat & operator=(const Bureaucrat& tocopy);

		std::string getName() const;
		unsigned int getGrade() const;
		void incGrade();
		void decGrade();

		void signForm(Form& form);
		void executeForm(Form const & form);

		class GradeTooHighException: public std::exception {
			public:
				virtual const char* what() const throw();
		};	
		class GradeTooLowException: public std::exception {
			public:
				virtual const char* what() const throw();
		};
};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& tocout);

#endif
