/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wrongmain.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skorte <skorte@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 18:11:02 by skorte            #+#    #+#             */
/*   Updated: 2022/08/13 14:15:27 by skorte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "WrongDog.hpp"

int main()
{
	std::cout << std::endl << "WrongAnimal Test:" << std::endl;
	const WrongAnimal* animal = new WrongAnimal();
	std::cout << animal->getType() << ": ";
	animal->makeSound();
	delete animal;

	std::cout << std::endl << "WrongCat Test:" << std::endl;
	const WrongAnimal* cat = new WrongCat();
	std::cout << cat->getType() << ": ";
	cat->makeSound();
	delete cat;

	std::cout << std::endl << "WrongDog Test:" << std::endl;
	const WrongAnimal* dog = new WrongDog();
	std::cout << dog->getType() << ": ";
	dog->makeSound();
	delete dog;
	
	return 0;
}
