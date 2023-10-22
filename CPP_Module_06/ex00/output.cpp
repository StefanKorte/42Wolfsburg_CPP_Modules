/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   output.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skorte <skorte@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 20:53:32 by skorte            #+#    #+#             */
/*   Updated: 2022/08/23 23:36:13 by skorte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

void	output_switch(char out_c, int  out_int, float out_float, double out_double, int overflow) {
	switch (overflow) {
		case IS_PRINTABLE: {
			output(out_c, out_int, out_float, out_double);
			return ;
		}
		case IS_NOT_PRINTABLE: {
			output("Non displayable", out_int, out_float, out_double);
			return ;
		}
		case CHAR_OVERFLOW: {
			output("impossible", out_int, out_float, out_double);
			return ;
		}
		case INT_OVERFLOW: {
			output("impossible", "out of range", out_float, out_double);		
			return ;
		}
		case FLOAT_OVERFLOW: {
			output("impossible", "out of range", "out of range", out_double);
			return ;
		case DOUBLE_OVERFLOW: {	
			output("impossible", "out of range", "out of range", "out of range");
			return;
		}
		}
	}
	return ;
}

void	output(char out_c, int  out_int, float out_float, double out_double) {
	std::cout
	<< "char: " << out_c << std::endl
	<< "int: " << out_int << std::endl
	<< "float: " << out_float << "f" << std::endl
	<< "double: " << out_double << std::endl;
	return ;
}
void	output(std::string out_c, int  out_int, float out_float, double out_double) {
	std::cout
	<< "char: " << out_c << std::endl
	<< "int: " << out_int << std::endl
	<< "float: " << out_float << "f" << std::endl
	<< "double: " << out_double << std::endl;
	return ;
}
void	output(std::string out_c, std::string out_int, float out_float, double out_double) {
	std::cout
	<< "char: " << out_c << std::endl
	<< "int: " << out_int << std::endl
	<< "float: " << out_float << "f" << std::endl
	<< "double: " << out_double << std::endl;
	return ;
}
void	output(std::string out_c, std::string out_int, std::string out_float, double out_double) {
	std::cout
	<< "char: " << out_c << std::endl
	<< "int: " << out_int << std::endl
	<< "float: " << out_float << std::endl
	<< "double: " << out_double << std::endl;
	return ;
}
void	output(std::string out_c, std::string out_int, std::string out_float, std::string out_double) {
	std::cout 
	<< "char: " << out_c << std::endl
	<< "int: " << out_int << std::endl
	<< "float: " <<  out_float << std::endl
	<< "double: " << out_double << std::endl;
	return ;
}
