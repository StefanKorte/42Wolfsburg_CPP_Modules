/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skorte <skorte@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 11:43:08 by skorte            #+#    #+#             */
/*   Updated: 2022/08/06 00:30:02 by skorte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_H
# define HARL_H

# include <iostream>

class Harl
{
	private:
		void _debug(void);
		void _info(void);
		void _warning(void);
		void _error(void);
		void _nolevel(void);
		std::string _levels[4];
		void (Harl::*_funcs[5])(void);

	public:
		void complain(std::string level);
		void filter(std::string level);
		Harl(void);
		~Harl(void);
};

#endif 
