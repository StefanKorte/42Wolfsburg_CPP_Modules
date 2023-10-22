/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skorte <skorte@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 12:42:16 by skorte            #+#    #+#             */
/*   Updated: 2022/07/26 13:01:01 by skorte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie
{
	private:
		std::string _name;

	public:
		void announce(void);
		Zombie(void);
		Zombie(std::string input);
		~Zombie(void);
};

Zombie* newZombie(std::string name);

void randomChump(std::string name);

#endif