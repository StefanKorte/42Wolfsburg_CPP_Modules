/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skorte <skorte@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 18:11:33 by skorte            #+#    #+#             */
/*   Updated: 2022/08/08 19:07:26 by skorte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
	private:
		std::string 	_name;
		int 			_hitpoints;
		int				_energypoints;
		int				_attackdamage;

	public:
		ClapTrap(void);
		ClapTrap(const ClapTrap &tocopy);
		ClapTrap(std::string name);
		~ClapTrap();
		ClapTrap	&operator=(const ClapTrap &tocopy);

		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
		void	attack(const std::string &target);
		void	status(void);
};

#endif