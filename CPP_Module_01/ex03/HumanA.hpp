/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skorte <skorte@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 13:55:30 by skorte            #+#    #+#             */
/*   Updated: 2022/08/04 23:03:04 by skorte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
 #define HUMANA_HPP

#include "Weapon.hpp"
#include <iostream>
#include <string>

/*
** The weapon is handled as reference for HumanA,
** because this is the more flexible and failsafe way.
** But NULL references are not possible!
** HumanA cannot not have a weapon.
*/

class HumanA
{
	private:
		std::string _name;
		Weapon  &_weapon;
	
	public:
		void    setType(std::string type);
		void    attack(void);
		HumanA(std::string name, Weapon &weapon);
		~HumanA(void);

};

#endif 
