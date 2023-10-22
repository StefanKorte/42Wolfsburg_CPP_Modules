/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skorte <skorte@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 18:11:02 by skorte            #+#    #+#             */
/*   Updated: 2022/08/13 18:04:17 by skorte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
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
	}
	{
	std::cout << std::endl << "Array Test:" << std::endl;
	int	len = 10;
	Animal *array[len];
	for (int i = 0; i < len; i++){
		if (i % 2)
			array[i] = new Dog();
		else
			array[i] = new Cat();
	}
	for (int i = 0; i < len; i++)
		delete (array[i]);
	}
	{
	std::cout << std::endl << "Brain Test:" << std::endl;
	Brain brain1;
	Brain brain2(brain1);
	brain2 = brain1;
	std::cout << &brain1 << " " << &brain2 << std::endl; 
	}
	{
	std::cout << std::endl << "CopyCat Test:" << std::endl;
	Cat *cat = new Cat();
	Cat *copycat = new Cat(*cat);
	delete copycat;
	delete cat;
	}
	{
	std::cout << std::endl << "CopyDog Test:" << std::endl;
	Dog *dog = new Dog();
	Dog *copydog = new Dog(*dog);
	delete copydog;
	delete dog;
	}
	return 0;
}
