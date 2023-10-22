/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skorte <skorte@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 15:19:13 by skorte            #+#    #+#             */
/*   Updated: 2022/08/25 23:34:07 by skorte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "easyfind.hpp"

int main(){
	std::vector<int> arr;
	arr.push_back(0);
	arr.push_back(3);
	arr.push_back(36);
	arr.push_back(3);
	arr.push_back(2);
	
	std::cout << "Print array: " << std::endl;
	for (int i = 0; i < (int)(arr.size()); i++) {
		std::cout << "Content: " << arr[i] << "\tAddress: " << &(arr[i]) << std::endl;
	}
	std::cout << std::endl << "easyfind tests:" << std::endl;
	for (int j = 0; j < 40; j++) {
		try {
			std::cout << "easyfind(arr, " << j << ");\t" ;
			int res = *easyfind(arr, j);
			std::cout << "result: " << res << "\tAddress: " << easyfind(arr, j) << std::endl;
		}
		catch(const std::exception& exc) {
			std::cerr << "not found" << std::endl;
		}
	}
}
