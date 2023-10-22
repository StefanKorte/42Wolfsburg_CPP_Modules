/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skorte <skorte@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 12:42:16 by skorte            #+#    #+#             */
/*   Updated: 2022/07/26 13:18:16 by skorte           ###   ########.fr       */
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
		void set_name(std::string name);
		Zombie(void);
		Zombie(std::string input);
		~Zombie(void);
};

Zombie *zombieHorde(int N, std::string name);

#endif