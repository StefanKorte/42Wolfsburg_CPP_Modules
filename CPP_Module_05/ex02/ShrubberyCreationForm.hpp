/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skorte <skorte@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 18:55:21 by skorte            #+#    #+#             */
/*   Updated: 2022/08/20 16:42:29 by skorte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP
# include <iostream>
# include <fstream> // for ofstream
# include <string>
# include <cstring>
# include "Form.hpp"

class ShrubberyCreationForm : public Form {
	private :
		ShrubberyCreationForm();
		
	protected :
		void executeThis() const;

	public :
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm(const ShrubberyCreationForm& tocopy);
		~ShrubberyCreationForm();
		ShrubberyCreationForm & operator=(const ShrubberyCreationForm& tocopy);
};

#endif