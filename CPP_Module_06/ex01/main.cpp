/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skorte <skorte@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 16:57:11 by skorte            #+#    #+#             */
/*   Updated: 2022/08/22 22:09:17 by skorte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"
#include <cstdlib>
#include <ctime>
#include <stdint.h> // for uintptr_t type definition

uintptr_t 	serialize(Data* ptr);
Data* 		deserialize(uintptr_t raw);

int main(void)
{
	std::srand(time(NULL));
	Data dat = Data(rand());
	Data* dat_ptr = &dat;
	std::cout << std::endl;

	std::cout << "Original data: "<< dat << std::endl;
	std::cout << "Original address: "<< dat_ptr << std::endl;
	std::cout << std::endl;

	uintptr_t dat_serial = serialize(&dat);
	std::cout << "Serialized address: "<< dat_serial << std::endl;
	std::cout << std::endl;
	
	Data *dat_deserial = deserialize(dat_serial);
	std::cout << "Deserialized address: "<< dat_deserial << std::endl;
	std::cout << "Deserialized data: "<< *dat_deserial << std::endl;
	std::cout << std::endl;

	return (0);
}
