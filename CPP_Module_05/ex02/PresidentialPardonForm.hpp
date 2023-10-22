/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skorte <skorte@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 18:55:21 by skorte            #+#    #+#             */
/*   Updated: 2022/08/19 15:05:32 by skorte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef PRESIDENTALPARDONFORM_HPP
# define PRESIDENTALPARDONFORM_HPP
# include <iostream>
# include <string>
# include <cstring>
# include "Form.hpp"

class PresidentialPardonForm : public Form {
	private :
		PresidentialPardonForm();

	protected :
		void executeThis() const;

	public :
		PresidentialPardonForm(std::string target);
		PresidentialPardonForm(const PresidentialPardonForm& tocopy);
		~PresidentialPardonForm();

		PresidentialPardonForm & operator=(const PresidentialPardonForm& tocopy);
};

#endif