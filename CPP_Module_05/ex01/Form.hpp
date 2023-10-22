/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skorte <skorte@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 18:45:05 by skorte            #+#    #+#             */
/*   Updated: 2022/08/20 17:15:10 by skorte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <exception>
# include "Bureaucrat.hpp"

class Bureaucrat; // Needs to be declared for beSigned()

class Form {
	private :
		const std::string	_name;
		bool 				_signed;
		const unsigned int	_gradeToSign;
		const unsigned int	_gradeToExecute;

		Form(); // private, will not be used
	
	protected :
 		void setSigned(bool issigned);

	public :

// Orthodox Canonial Constructors etc...
		Form(const std::string name);
		Form(const std::string name, unsigned int gradeToSign, unsigned int gradeToExecute);
		Form(const Form& tocopy);
		virtual ~Form();
		Form & operator=(const Form& tocopy);

// Getter functions
		std::string getName() const;
		bool getSigned() const;
		unsigned int getGradeToSign() const;
		unsigned int getGradeToExecute() const;

// Bureaucrat functions
		void beSigned(const Bureaucrat& b);

// Exceptions
		class GradeTooHighException: public std::exception {
			public:
				virtual const char* what() const throw();
		};		
		class GradeTooLowException: public std::exception {
			public:
				virtual const char* what() const throw();
		};
		class AlreadySignedException: public std::exception {
			public:
				virtual const char* what() const throw();
		};

// Messages
		void SuccessSign(const Bureaucrat& bc) const;
		void ErrorAlreadySigned(const Bureaucrat& bc) const;	
		void ErrorGradeTooLowToSign(const Bureaucrat& bc) const;
};

std::ostream &	operator<<( std::ostream & os, Form const & tocout);

#endif
