/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skorte <skorte@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 14:04:47 by skorte            #+#    #+#             */
/*   Updated: 2022/08/24 22:45:21 by skorte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "iter.hpp"

void	add_one(int &value) {value++;}
void	touppercase(std::string &value)
{
	value[0] = toupper(value[0]);
}

int	main(void)
{
	int	array[] = {1, 2, 3, 4, 5};
	std::string	names[] = {"this", "is", "sparta"};

	iter(array, 5, add_one);
	iter(names, 3, touppercase);
	
	for (int i = 0; i < 5; i++)
		std::cout << "Array[" << i << "] = " << array[i] << std::endl;
	for (int i = 0; i < 3; i++)
		std::cout << "Names[" << i << "] = " << names[i] << std::endl;
	return (0);
}
