/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skorte <skorte@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 18:11:02 by skorte            #+#    #+#             */
/*   Updated: 2022/08/11 23:09:26 by skorte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main(void)
{
	{
		std::cout << std::endl << "Constructor test" << std::endl;
		ScavTrap	st1("This ScavTrap");
		ScavTrap	st2;
		ScavTrap	st3(st2);
 
		st1.status();
		st2.status();
		st3.status();

		std::cout << std::endl << "= operator test" << std::endl;
		st3.status();
		st3 = st3;
		st3 = st1;
		st3.status();
	}
	{
		std::cout << std::endl << "Function test" << std::endl;
		ScavTrap	st1("ActionScav");
		st1.status();
		st1.takeDamage(5);
		st1.status();
		st1.guardGate();
		st1.status();
		st1.attack("somebody");
		st1.status();
		st1.beRepaired(2);
		st1.status();
		std::cout << std::endl << "Killed test" << std::endl;
		st1.takeDamage(98);
		st1.status();
		st1.takeDamage(3);
		st1.status();
		st1.attack("somebody");
		st1.status();
		st1.beRepaired(10);
		st1.status();
		st1.guardGate();
		st1.status();
	}
	{
		std::cout << std::endl << "EP test" << std::endl;
		ScavTrap	st1;
		st1.status();
		for (int i = 0; i < 25; i++)
		{
			st1.attack("somebody");
			st1.beRepaired(1);
		}
		st1.status();
		st1.beRepaired(1);
		st1.attack("somebody");
		st1.takeDamage(10);
		st1.guardGate();
		st1.status();
	}
	return (0);
}