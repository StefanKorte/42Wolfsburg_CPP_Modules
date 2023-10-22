/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skorte <skorte@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 18:11:33 by skorte            #+#    #+#             */
/*   Updated: 2022/08/13 18:07:40 by skorte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

/*
** to make a class into an interface class (abstract)
** and not itself instantinable, add one function = 0
*/

class Animal
{
	protected:
		std::string _type;

	public:
		Animal(void);
		Animal(const Animal &tocopy);
		virtual ~Animal();
		Animal	&operator=(const Animal &tocopy);

		virtual void	makeSound(void)const = 0;
		std::string getType(void) const;
};

#endif