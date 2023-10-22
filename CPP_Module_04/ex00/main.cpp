/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skorte <skorte@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 18:11:02 by skorte            #+#    #+#             */
/*   Updated: 2022/08/13 14:05:44 by skorte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	std::cout << std::endl << "Animal Test:" << std::endl;
	const Animal* animal = new Animal();
	std::cout << animal->getType() << ": ";
	animal->makeSound();
	delete animal;

	std::cout << std::endl << "Cat Test:" << std::endl;
	const Animal* cat = new Cat();
	std::cout << cat->getType() << ": ";
	cat->makeSound();
	delete cat;

	std::cout << std::endl << "Dog Test:" << std::endl;
	const Animal* dog = new Dog();
	std::cout << dog->getType() << ": ";
	dog->makeSound();
	delete dog;
	
	return 0;
}
