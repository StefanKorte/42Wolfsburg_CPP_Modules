/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skorte <skorte@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 11:42:01 by skorte            #+#    #+#             */
/*   Updated: 2022/08/05 11:59:00 by skorte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(void)
{
	Harl thisHarl;
	
	std::cout << std::endl;
	std::cout << "Test: invalid input" << std::endl;
	thisHarl.complain("SOMETHING");
	std::cout << std::endl;
	std::cout << "Test: DEBUG" << std::endl;
	thisHarl.complain("DEBUG");
	std::cout << std::endl;
	std::cout << "Test: INFO" << std::endl;
	thisHarl.complain("INFO");
	std::cout << std::endl;
	std::cout << "Test: WARNING" << std::endl;
	thisHarl.complain("WARNING");
	std::cout << std::endl;
	std::cout << "Test: ERROR" << std::endl;
	thisHarl.complain("ERROR");
	std::cout << std::endl;

	return (0);
}
