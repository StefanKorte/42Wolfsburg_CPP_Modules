/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skorte <skorte@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 23:16:47 by skorte            #+#    #+#             */
/*   Updated: 2022/08/05 11:09:55 by skorte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>	// cout error messages	
#include <fstream>	// for ifstream, open and close files
#include <string>

int main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "Error: Wrong number of arguments." << std::endl;
		return (1);
	}

	std::string filename = argv[1];

	std::ifstream infile;
	infile.open(filename, std::ifstream::in);
	if (!infile.good())
	{
		std::cout << "Error: Could not open input file." << std::endl;
		return (1);
	}

	std::ofstream outfile;
	outfile.open(filename + ".replace", std::ifstream::out);
	if (!outfile.good())
	{
		std::cout << "Error: Could not create output file." << std::endl;		
		infile.close();
		return (1);
	}

	std::string string1 = argv[2];
	std::string string2 = argv[3];
	std::string line;

	std::size_t	s1_size = string1.size();
	std::size_t	s2_size = string2.size();
	std::size_t i;

	while (std::getline(infile, line))
	{
		if(s1_size != 0) // string.find would never stop otherwise
		{
			i = line.find(string1);
			while (i < line.size())
				{
					line.erase(i, s1_size);
					line.insert(i, string2);
					i = line.find(string1);
				}
		}
		outfile << line << std::endl;
	}
	outfile.close();
	infile.close();

	return (0);
}
