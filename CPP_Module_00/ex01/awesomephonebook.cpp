/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   awesomephonebook.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skorte <skorte@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 01:16:46 by skorte            #+#    #+#             */
/*   Updated: 2022/07/11 00:58:45 by skorte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "PhoneBook.hpp"

int	main(void)
{
	PhoneBook phonebook;
	std::string	input;

	while (true)
	{
		std::cout << "Write ADD to add a contact, or SEARCH to search for a contact, or EXIT to exit..." << std::endl;
		std::cout << "> ";
		std::getline(std::cin, input);
		if (input == "EXIT")
			break ;
		else if (input == "ADD")
			phonebook.add_contact();
		else if (input == "SEARCH")
			phonebook.search_contact();
		else
			std::cout << "What do you want from me?" << std::endl;
	}
	std::cout << std::endl
		<< "Thanks for having used the AWESOMEST PHONEBOOK of them all!"  << std::endl
		<< "We will now delete all contact entries everywhere on your computer... Have a nice day!" << std::endl;
	return (0);
}
