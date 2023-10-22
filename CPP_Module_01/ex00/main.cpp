/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skorte <skorte@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 12:33:18 by skorte            #+#    #+#             */
/*   Updated: 2022/07/26 13:05:22 by skorte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	std::cout << "\nStart, constructing Zombies\n" << std::endl;
	Zombie z_noname;
	Zombie z_stack("StackZombie");
	Zombie* z_heap_zombie = new Zombie("HeapZombie");
	Zombie *z_heap_zombie_2 = newZombie("HeapZombie2");

	std::cout << "\nI think I hear them coming!\n" << std::endl;

	z_noname.announce();
	z_stack.announce();
	z_heap_zombie->announce();
	z_heap_zombie_2->announce();

	std::cout << "\nCreating randomChump\n" << std::endl;

	randomChump("ChumpZombie");

	std::cout << "\nDeleting HeapZombies\n" << std::endl;

	delete z_heap_zombie;
	delete z_heap_zombie_2;

	std::cout << "\nEnd!\n" << std::endl;

	return 0;
}
