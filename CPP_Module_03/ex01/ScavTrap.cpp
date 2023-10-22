/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skorte <skorte@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 22:51:46 by skorte            #+#    #+#             */
/*   Updated: 2022/08/11 23:05:45 by skorte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap("noname_scav"){
	_hitpoints = 100;
	_energypoints = 50;
	_attackdamage = 20;
	std::cout << "ScavTrap default constructor has been called." << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name){
	_hitpoints = 100;
	_energypoints = 50;
	_attackdamage = 20;
	std::cout << "ScavTrap naming constructor has been called." << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &scavTrap) : ClapTrap(scavTrap){
	*this = scavTrap;
	std::cout << "ScavTrap copy constructor has been called." << std::endl;
}

ScavTrap::~ScavTrap(void){
	std::cout << "ScavTrap destructor has been called." << std::endl;
}

ScavTrap	&ScavTrap::operator=(const ScavTrap &tocopy){
	this->_name = tocopy._name;
	this->_hitpoints = tocopy._hitpoints;
	this->_energypoints = tocopy._energypoints;
	this->_attackdamage = tocopy._attackdamage;
	return (*this);
}

void	ScavTrap::guardGate(void) const{
	if (_hitpoints)
		std::cout << _name << " now keeps the gate!" << std::endl;
	else
		std::cout << _name << " is dead and cannot keep the gate!" << std::endl;

}

void	ScavTrap::attack(const std::string &target){
	if(!_hitpoints){
		std::cout << "ScavTrap " << _name << " is dead and cannot attack." << std::endl;
	}
	else if (!_energypoints){
		std::cout << "ScavTrap " << _name << " has no energy left and cannot attack." << std::endl;
	}
	else{
		std::cout << "ScavTrap " << this->_name << " attacks " << target << ", "
			<< "causing " << _attackdamage << " points of damage!" << std::endl;
		_energypoints -= 1;
	}
}
