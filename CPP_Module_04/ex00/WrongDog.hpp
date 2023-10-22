/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongDog.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skorte <skorte@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 18:11:33 by skorte            #+#    #+#             */
/*   Updated: 2022/08/12 11:08:58 by skorte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP
# include "WrongAnimal.hpp"

class WrongDog : virtual public WrongAnimal
{
	public:
		WrongDog(void);
		WrongDog(const WrongDog &tocopy);
		~WrongDog();
		WrongDog	&operator=(const WrongDog &tocopy);

		void makeSound(void) const;
};

#endif