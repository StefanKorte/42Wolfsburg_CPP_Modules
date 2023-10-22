/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skorte <skorte@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 12:33:18 by skorte            #+#    #+#             */
/*   Updated: 2022/08/03 23:39:24 by skorte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	int N = 3;
	std::cout << "\nStart, constructing Zombie Horde of " << N << " Zombies\n" << std::endl;

	Zombie *z_horde = zombieHorde(N, "WhoAmI?");

	std::cout << "\nI think I hear them coming!\n" << std::endl;

	int i = 0;
	while (i < N)
	{
		z_horde[i].announce();
		i++;
	}

	std::cout << "\nDeleting ZombieHorde\n" << std::endl;

	delete[] z_horde;

	std::cout << "\nEnd!\n" << std::endl;

	return 0;
}
