/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skorte <skorte@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 12:45:11 by skorte            #+#    #+#             */
/*   Updated: 2022/08/04 00:54:09 by skorte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void)
{
	this->_name = "John Doe";
	std::cout << "Beware! " << this->_name << " became a Zombie!" << std::endl;
}

Zombie::Zombie(std::string input)
{
	this->_name = input;
	std::cout << "Beware! " << this->_name << " became a Zombie!" << std::endl;
}

Zombie::~Zombie(void)
{
	std::cout << "Zombie-" << this->_name << " got decapitated." << std::endl;
}

void Zombie::announce(void)
{
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::set_name(std::string name)
{
	std::cout << "Oh no, I know Zombie-" << this->_name << "! That's " << name << std::endl;
	this->_name = name;
}
