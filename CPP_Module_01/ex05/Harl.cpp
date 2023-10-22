/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skorte <skorte@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 11:43:43 by skorte            #+#    #+#             */
/*   Updated: 2022/08/06 00:14:53 by skorte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void) // constructor
{
	this->_levels[0] = "DEBUG";
	this->_levels[1] = "INFO";
	this->_levels[2] = "WARNING";
	this->_levels[3] = "ERROR";
	
	this->_funcs[0] = &Harl::_debug;
	this->_funcs[1] = &Harl::_info;
	this->_funcs[2] = &Harl::_warning;
	this->_funcs[3] = &Harl::_error;
	this->_funcs[4] = &Harl::_nolevel;
	std::cout << "A Harl enters the restaurant." << std::endl;
}

Harl::~Harl(void) // destructor
{
	std::cout << "A Harl leaves the restaurant." << std::endl;
}

void Harl::complain(std::string level)
{
	int i = 0;
	while ( level != Harl::_levels[i] && i < 4)
		i++;
	(this->*_funcs[i])();
	return ;
}

void Harl::_debug(void)
{
	std::cout << "I love having extra bacon for my " 
		<< "7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!"
		<< std::endl;
}

void Harl::_info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. "
	<< "You didn't put enough bacon in my burger! If you did, "
	<< "I wouldn't be asking for more!" << std::endl;
}

void Harl::_warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. "
	<< "I've been coming for years whereas you started working here since last month." 
	<< std::endl;
}

void Harl::_error(void)
{
	std::cout << "This is unacceptable! I want to speak to the manager now."
	<< std::endl;
}

void Harl::_nolevel(void)
{
	std::cout << "Error: not a valid level" << std::endl;
} 
