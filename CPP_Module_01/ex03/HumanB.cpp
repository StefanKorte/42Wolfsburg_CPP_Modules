/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skorte <skorte@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 01:26:17 by skorte            #+#    #+#             */
/*   Updated: 2022/08/04 23:02:55 by skorte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name): _name(name)
{
	this->_weapon = NULL;
    std::cout << "HumanB " << name << " appears." << std::endl;
}

HumanB::~HumanB(void)
{
    std::cout << "HumanB " << _name << " commits suicide." << std::endl;
}

void    HumanB::attack(void)
{
    std::cout << "HumanB " << _name;
	if (this->_weapon != NULL)
		std::cout << " attacks with a " << (_weapon)->getType() << "." << std::endl;
	else
		std::cout << " attacks without a weapon." << std::endl;
}

/*
** The weapon is a pointer, so it can be exchanged against any other pointer
** without changing the weapon it has referred to before or afterwards.
*/

void    HumanB::setWeapon(Weapon &weapon)
{
	if (this->_weapon != NULL)
		std::cout << "HumanB " << _name << " trades the "
			<< _weapon->getType() << " for a "
			<< weapon.getType() << "." << std::endl;
	else
		std::cout << "HumanB " << _name << " picks up a "
			<< weapon.getType() << "." << std::endl;
    _weapon = &weapon;
}
