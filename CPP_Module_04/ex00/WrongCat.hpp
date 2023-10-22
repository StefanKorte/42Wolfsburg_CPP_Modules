/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skorte <skorte@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 18:11:33 by skorte            #+#    #+#             */
/*   Updated: 2022/08/12 11:08:58 by skorte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP
# include "WrongAnimal.hpp"

class WrongCat : virtual public WrongAnimal
{
	public:
		WrongCat(void);
		WrongCat(const WrongCat &tocopy);
		~WrongCat();
		WrongCat	&operator=(const WrongCat &tocopy);

		void makeSound(void) const;
};

#endif