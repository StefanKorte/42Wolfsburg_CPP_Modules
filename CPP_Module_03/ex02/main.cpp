/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skorte <skorte@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 18:11:02 by skorte            #+#    #+#             */
/*   Updated: 2022/08/11 23:34:13 by skorte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "FragTrap.hpp"

int	main(void)
{
	{
		std::cout << std::endl << "Constructor test" << std::endl;
		FragTrap	ft1("This FragTrap");
		FragTrap	ft2;
		FragTrap	ft3(ft2);
 
		ft1.status();
		ft2.status();
		ft3.status();

		std::cout << std::endl << "= operator test" << std::endl;
		ft3.status();
		ft3 = ft3;
		ft3 = ft1;
		ft3.status();
	}
	{
		std::cout << std::endl << "Function test" << std::endl;
		FragTrap	ft1("ActionFrag");
		ft1.status();
		ft1.takeDamage(5);
		ft1.status();
		ft1.highFivesGuys();
		ft1.status();
		ft1.attack("somebody");
		ft1.status();
		ft1.beRepaired(2);
		ft1.status();
		std::cout << std::endl << "Killed test" << std::endl;
		ft1.takeDamage(98);
		ft1.status();
		ft1.takeDamage(3);
		ft1.status();
		ft1.attack("somebody");
		ft1.status();
		ft1.beRepaired(10);
		ft1.status();
		ft1.highFivesGuys();
		ft1.status();
	}
	{
		std::cout << std::endl << "EP test" << std::endl;
		FragTrap	ft1;
		ft1.status();
		for (int i = 0; i < 50; i++)
		{
			ft1.attack("somebody");
			ft1.beRepaired(1);
		}
		ft1.status();
		ft1.beRepaired(1);
		ft1.attack("somebody");
		ft1.takeDamage(10);
		ft1.highFivesGuys();
		ft1.status();
	}
	return (0);
}