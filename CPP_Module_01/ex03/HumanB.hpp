/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skorte <skorte@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 01:14:17 by skorte            #+#    #+#             */
/*   Updated: 2022/08/04 23:07:17 by skorte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
 #define HUMANB_HPP

#include <string>
#include <iostream>
#include "Weapon.hpp"

/*
** The weapon must be handled as pointer for HumanB,
** because no weapon must be possible,
** but NULL references do not exists.
*/

class HumanB
{
	private:
	   	std::string _name;
		Weapon *_weapon;
		
	public:
		void setWeapon(Weapon &weapon);
		void attack(void);
		HumanB(std::string name);
		~HumanB(void);
};

#endif
