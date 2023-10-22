/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skorte <skorte@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 00:18:15 by skorte            #+#    #+#             */
/*   Updated: 2022/08/06 00:32:49 by skorte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		std::cout << "Give a level. DEBUG, INFO, WARNING or ERROR" << std::endl;
		return (1);
	}
	
	Harl thisHarl = Harl();
	thisHarl.filter(argv[1]);
	return (0);
}
