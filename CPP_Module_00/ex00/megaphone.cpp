/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skorte <skorte@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 23:34:11 by skorte            #+#    #+#             */
/*   Updated: 2022/07/05 01:15:25 by skorte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main (int argc, char *argv[])
{
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	argv++;
	
	while (argv[0])
	{
		size_t i = 0;
		while (argv[0][i])
		{
			argv[0][i] = std::toupper(argv[0][i]);
			i++;
		}
		std::cout << argv[0];
		argv++;
	}
	std::cout << std::endl;
	return (0);
}
