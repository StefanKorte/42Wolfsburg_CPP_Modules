/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skorte <skorte@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 18:55:21 by skorte            #+#    #+#             */
/*   Updated: 2022/08/19 15:05:32 by skorte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP
# include <iostream>
# include <string>
# include <cstring>
# include <ctime>
# include <cstdlib>
# include "Form.hpp"

class RobotomyRequestForm : public Form {
	private :
		RobotomyRequestForm();

	protected :
		void executeThis() const;

	public:
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm(const RobotomyRequestForm& tocopy);
		~RobotomyRequestForm();

		RobotomyRequestForm & operator=(const RobotomyRequestForm& tocopy);
};

#endif