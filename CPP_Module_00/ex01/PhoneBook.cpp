/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skorte <skorte@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 02:04:26 by skorte            #+#    #+#             */
/*   Updated: 2022/07/11 01:02:44 by skorte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <cstdio>

PhoneBook::PhoneBook()
{
	std::cout << "\x1b[1;3;4;92m" << std::endl
		<< "Welcome to the AWESOMEST PHONEBOOK of them all!" 
		<< "\x1b[0m" << std::endl << std::endl;
	this->number_of_contacts = 0;
	this->oldest_contact = 0;
}

void	PhoneBook::add_contact()
{
	std::string input;

	std::cout << std::endl 
		<< "You chose to add a new contact to this AWESOME PhoneBook. Brilliant idea!" << std::endl;
	while (this->number_of_contacts == 8)
	{
		std::cout << "But your Awesome Phonebook is already full of awesome contacts. Do you want to proceed? (YES/NO)" << std::endl;
		std::cout << "> ";
		std::getline(std::cin, input);
		if (input == "NO")
			return ;
		else if (input == "YES")
			break ;
	}
	std::cout << std::endl 
		<< "So, please go ahead and make up some personal information!" << std::endl 
		<< std::endl;

	this->contacts[this->oldest_contact].set_contact();

	this->oldest_contact++;
	if (this->oldest_contact == 8)
		this->oldest_contact = 0;

	if (this->number_of_contacts < 8)
		this->number_of_contacts++;
	else
		std::cout << "Oops, I overwrote your oldest contact. But you surely won't miss that freak." << std::endl << std::endl;
}

void	PhoneBook::search_contact()
{
	if (this->number_of_contacts == 0)
	{
		std::cout << "Oops... you have no friends :-(" << std::endl;
		std::cout << "You need to ADD contacts to your Awesome Phonebook!" << std::endl << std::endl;
		return ;
	}

	std::cout <<  "\033[4m"; // underline on
	this->contacts[0].view_header();
	for (int i = 0; i < this->number_of_contacts; i++)
	{
		std::cout << "|";
		std::cout.width(10);
		std::cout << i + 1;
		std::cout << "|";
		this->contacts[i].view_contact_short();
	}
	std::cout << "\033[0m"; // underline off
	std::cout << std::endl;

	std::string input;
	while (true)
	{
		std::cout << "Which of your fake friends do you want to see in detail?" << std::endl;
		std::cout << "> ";
		std::getline(std::cin, input);
		if (input[0] >= '1' && input[0] < '1' + this->number_of_contacts && input[1] == 0)
			break ;
		std::cout << "Can't you think of a number between 1 and " << this->number_of_contacts << "? Try again! "<< std::endl;
	}
	this->contacts[input[0] - '1'].view_contact_details();
}
