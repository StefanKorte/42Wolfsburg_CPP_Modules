/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skorte <skorte@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 13:52:11 by skorte            #+#    #+#             */
/*   Updated: 2022/08/04 23:07:52 by skorte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"

int main()
{
    {
        std::cout << std::endl << "HumanA: Test 1, creation" << std::endl;
        Weapon club = Weapon("crude spiked club");
        HumanA bob("Bob", club);
        bob.attack();

        std::cout << std::endl << "HumanA: Test 2, weapon.setType" << std::endl;
        club.setType("some other type of club");
        bob.attack();

        std::cout << std::endl << "HumanA: Test 3, HumanA.setType" << std::endl;
        bob.setType("warranty replacement club");
        bob.attack();

        std::cout << std::endl << "End HumanA tests" << std::endl;
    }

    {
        std::cout << std::endl << "HumanB: Test 1, no weapon" << std::endl;

        HumanB jim("Jim");
        jim.attack();

        std::cout << std::endl << "HumanB: Test 2, weapon, weapon.setType" << std::endl;
        Weapon club = Weapon("crude spiked club");
        jim.setWeapon(club);
        jim.attack();
        club.setType("some other type of club");
        jim.attack();

        std::cout << std::endl << "HumanB: Test 3, HumanB.setWeapon" << std::endl;
        Weapon gun = Weapon("toy gun");
        jim.setWeapon(gun);
        jim.attack();

        std::cout << std::endl << "End HumanB tests" << std::endl;
    }
    return 0;
}