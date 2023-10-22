/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skorte <skorte@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 18:11:33 by skorte            #+#    #+#             */
/*   Updated: 2022/08/12 11:08:58 by skorte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP
# include "Animal.hpp"
# include "Brain.hpp"

class Dog : virtual public Animal
{
	private:
		Brain* _brain;
		
	public:
		Dog(void);
		Dog(const Dog &tocopy);
		virtual ~Dog();
		Dog	&operator=(const Dog &tocopy);

		virtual void makeSound(void) const;
};

#endif