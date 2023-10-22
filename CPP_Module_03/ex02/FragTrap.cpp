/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skorte <skorte@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 22:51:46 by skorte            #+#    #+#             */
/*   Updated: 2022/08/11 23:35:45 by skorte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap("noname_frag"){
	_hitpoints    = 100;
	_energypoints = 100;	
	_attackdamage = 30;
	std::cout << "FragTrap default constructor has been called." << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name){
	_hitpoints    = 100;
	_energypoints = 100;
	_attackdamage = 30;
	std::cout << "FragTrap naming constructor has been called." << std::endl;
}

FragTrap::FragTrap(const FragTrap &fragTrap) : ClapTrap(fragTrap){
	*this = fragTrap;
	std::cout << "FragTrap copy constructor has been called." << std::endl;
}

FragTrap::~FragTrap(void){
	std::cout << "FragTrap destructor has been called." << std::endl;
}

FragTrap	&FragTrap::operator=(const FragTrap &tocopy){
	this->_name = tocopy._name;
	this->_hitpoints = tocopy._hitpoints;
	this->_energypoints = tocopy._energypoints;
	this->_attackdamage = tocopy._attackdamage;
	return (*this);
}

void	FragTrap::highFivesGuys(void){
	if (_hitpoints)
		std::cout << _name << ": \" High-Five, guys!!\"" << std::endl;
	else
		std::cout << _name << " is dead and cannot ask for a high-five!" << std::endl;

}
