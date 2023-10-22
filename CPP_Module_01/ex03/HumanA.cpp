/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skorte <skorte@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 01:00:20 by skorte            #+#    #+#             */
/*   Updated: 2022/08/04 23:03:19 by skorte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

/*
** The constructor needs to instantiate the reference to weapon on creation of
** the HumanA. It cannot construct a HumanA with an empty reference.
*/

HumanA::HumanA(std::string name, Weapon &weapon): _name(name), _weapon(weapon)
{
    std::cout << "HumanA " << _name << " appears and picks up a " 
        << _weapon.getType() << "." << std::endl;
}

HumanA::~HumanA(void)
{
    std::cout << "HumanA " << _name << " commits suicide." << std::endl;
}

void    HumanA::attack(void)
{
    std::cout << "HumanA " << _name << " attacks with a " 
        << _weapon.getType() << "." << std::endl;
}

/*
** Since the weapon is a reference, one cannot change which object it refers to.
** To change the weapon, one has to access the weapon and change its type.
*/

void    HumanA::setType(std::string type)
{
    std::cout << "HumanA " << _name << " wishes the " 
        << _weapon.getType() << " was a " 
        << type << " instead." << std::endl;
    _weapon.setType(type);
}
