/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skorte <skorte@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 01:56:27 by skorte            #+#    #+#             */
/*   Updated: 2022/07/11 01:06:27 by skorte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{
	
}

void	Contact::set_contact()
{
	this->data_names[0] = "first name";
	this->data_names[1] = "last name";
	this->data_names[2] = "nickname";
	this->data_names[3] = "phone number";
	this->data_names[4] = "darkest secret";
	int i = 0;
	while (i < 5)
	{
		std::cout << "Please enter a " << this->data_names[i] << ": ";
		std::getline(std::cin, this->data[i]);
		int j = 0;
		while (this->data[i][j] == ' ' || this->data[i][j] == '\t')
			j++;
		if (this->data[i][j] != '\0')
			i++;
		else
			std::cout << "That's nothing! Use your imagination!!" << std::endl;
	}
	std::cout << std::endl;
}

void	Contact::view_contact_details()
{
	std::cout << std::endl;
	for (int i = 0; i < 5; i++)
	{
		std::cout << this->data_names[i] << ": ";
		std::cout << this->data[i] << std::endl;
	}
	std::cout << std::endl;
}

void	Contact::view_header()
{
	std::cout << "                                             " << std::endl;
	std::cout << "|     index|";
	for (int i = 0; i < 3; i++)
	{
		std::cout.width(10);
		std::cout << this->data_names[i];
		std::cout << "|";
	}
	std::cout << std::endl;
}

void	Contact::view_contact_short()
{
	for (int i = 0; i < 3; i++)
	{
		std::string	data = this->data[i];
		for (int j = 0; data[j]; j++)
		{
			if (j == 10)
				data[9] = '.';
			if (j >= 10)
				data[j] = '\0';
		}
		std::cout.width(10);
		std::cout << data;
		std::cout << "|";
	}
	std::cout << std::endl;
}
