/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skorte <skorte@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 18:11:02 by skorte            #+#    #+#             */
/*   Updated: 2022/08/11 18:30:53 by skorte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	{
		std::cout << std::endl << "Constructor test" << std::endl;
		ClapTrap	ct1("This ClapTrap");
		ClapTrap	ct2;
		ClapTrap	ct3(ct2);
 
		ct1.status();
		ct2.status();
		ct3.status();

		std::cout << std::endl << "= operator test" << std::endl;
		ct3.status();
		ct3 = ct3;
		ct3 = ct1;
		ct3.status();
	}
	{
		std::cout << std::endl << "Function test" << std::endl;
		ClapTrap	ct1("ActionTrap");
		ct1.status();
		ct1.takeDamage(5);
		ct1.status();
		ct1.attack("somebody");
		ct1.status();
		ct1.beRepaired(2);
		ct1.status();
		ct1.takeDamage(8);
		ct1.status();
		ct1.takeDamage(3);
		ct1.status();
		ct1.attack("somebody");
		ct1.status();
		ct1.beRepaired(10);
		ct1.status();
	}
	{
		std::cout << std::endl << "EP test" << std::endl;
		ClapTrap	ct1;
		ct1.status();
		ct1.attack("somebody");
		ct1.beRepaired(1);
		ct1.attack("somebody");
		ct1.beRepaired(1);
		ct1.attack("somebody");
		ct1.beRepaired(1);
		ct1.attack("somebody");
		ct1.beRepaired(1);
		ct1.attack("somebody");
		ct1.beRepaired(1);
		ct1.status();

		ct1.beRepaired(1);
		ct1.attack("somebody");
		ct1.takeDamage(10);
		ct1.status();
	}
	return (0);
}