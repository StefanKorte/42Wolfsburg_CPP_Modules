/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skorte <skorte@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 18:40:27 by skorte            #+#    #+#             */
/*   Updated: 2022/08/11 22:57:42 by skorte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void): _name("noname"), _hitpoints(10), _energypoints(10), _attackdamage(0){
	std::cout << "ClapTrap default constructor has been called." << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &tocopy){
	*this = tocopy;
	std::cout << "ClapTrap copy constructor has been called." << std::endl;
}

ClapTrap::ClapTrap(std::string name): _hitpoints(10), _energypoints(10), _attackdamage(0){
	this->_name = name;
	std::cout << "ClapTrap naming constructor has been called." << std::endl;
}

ClapTrap::~ClapTrap(void){
	std::cout << "ClapTrap destructor has been called." << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &tocopy){
	this->_name 		= tocopy._name;
	this->_hitpoints 	= tocopy._hitpoints;
	this->_energypoints = tocopy._energypoints;
	this->_attackdamage = tocopy._attackdamage;
	return (*this);
}

void	ClapTrap::attack(const std::string &target){
	if(!_hitpoints){
		std::cout << _name << " is dead and cannot attack." << std::endl;
	}
	else if (!_energypoints){
		std::cout << _name << " has no energy left and cannot attack." << std::endl;
	}
	else{
		std::cout << this->_name << " attacks " << target << ", "
			<< "causing " << _attackdamage << " points of damage!" << std::endl;
		_energypoints -= 1;
	}
}

void ClapTrap::takeDamage(unsigned int amount){
	if(!_hitpoints){
		std::cout << _name << " was already dead." << std::endl;
	}
	else if((int)amount < _hitpoints){
		std::cout << _name << " has taken " << amount << " points of damage." << std::endl;
		_hitpoints = _hitpoints - amount;
	}
	else{
		std::cout << _name << " has taken " << amount << " points of damage"
		<< " and is dead." << std::endl;
		_hitpoints = 0;
	}
}

void ClapTrap::beRepaired(unsigned int amount){
	if (!_hitpoints){
		std::cout << _name << " is dead and cannot be repaired." << std::endl;
	}
	else if (!_energypoints){
		std::cout << _name << " has no energy left and cannot be repaired." << std::endl;
	}
	else{
		std::cout << _name << " has gotten " << amount << " hit points back." << std::endl;
		_hitpoints += amount;
		_energypoints -= 1;
	}
}

void	ClapTrap::status(void){
	std::cout << "****Trap " << _name << " has: "
		<< _hitpoints << " HP, "
		<< _energypoints << " EP, "
		<< _attackdamage << " AD." << std::endl;
}
