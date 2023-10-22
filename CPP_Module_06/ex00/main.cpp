/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skorte <skorte@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 18:14:49 by skorte            #+#    #+#             */
/*   Updated: 2022/08/23 23:38:34 by skorte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

static int check_inf(std::string input) {
	std::string inf[8] = 
		{"inf", "inff",
		 "+inf", "+inff",
		 "-inf", "-inff", 
		 "nan", "nanf"};
	int i = 0;
	while (i < 8){
		if (input.compare(inf[i]) == 0)
			break ;
		i++;
	}
	return i ;
}

static void output_inf(int inf_type) {
	switch (inf_type) {
		case 0: {}
		case 1: {
			output("impossible", "impossible", inf_Float, inf_Double);
			return ;
		}
		case 2: {		
			output("impossible", "impossible", ninf_Float, ninf_Double);
			return ;
		}
		case 3: {		
			output("impossible", "impossible", nan_Float, nan_Double);
			return ;
		}
	}
	return ;
}

static int	is_type(std::string input) {

	bool check_float = 0;

//	Check if character
	if (input.length() == 1){
		char c = static_cast<char>(input[0]);
		if ('0' <= c && c <= '9')
			return (IS_INT);
		else if (std::isprint(c))
			return (IS_CHAR);
	}

// Check if infinity
	int i = check_inf(input);
	if (i != 8)
		return (IS_INF);

// Check for double
	char *endptr = NULL;
	const char *input_c = input.c_str();
	double double_test = std::strtod(input_c, &endptr);
	if (*endptr == 'f' || *endptr == 'e') {
		check_float = 1;
		endptr++;
	}
	else if (errno != 0 && errno != ERANGE)
		return (UNKNOWN) ;
	else {
		while (*endptr == ' ')
			endptr++;
		if (*endptr != '\0')
			return (UNKNOWN) ;
	}

// Check if float
	if (check_float) {
		float float_test = std::strtof(input_c, &endptr);
		(void)float_test;
		if (errno)
			return (UNKNOWN) ;
		if (*endptr != 'f')
			return (UNKNOWN) ;
		endptr++; // skip 'f'
		while (*endptr == ' ')
			endptr++;
		if (*endptr != '\0')
			return (UNKNOWN) ;
		return (IS_FLOAT) ;
	}
	
// Check if int
	if (double_test == static_cast<double>(static_cast<int>(double_test)))
		return (IS_INT);
	else
		return (IS_DOUBLE);
}

static int is_overflow(float out_float) {

	if (out_float == inf_Float || out_float == ninf_Float)
		return (FLOAT_OVERFLOW) ;
	else if (out_float > INT32_MAX || out_float < INT32_MIN)
		return (INT_OVERFLOW) ;

	int out_int = static_cast<int>(out_float);
	
	if (std::isprint(out_int))
		return (IS_PRINTABLE) ;
	else if (0 <= out_int && out_int < 128)
		return (IS_NOT_PRINTABLE) ;
	return (CHAR_OVERFLOW) ;
}

static void convert(std::string input, int type) {
	int overflow = 0;
	switch (type) {
		case IS_CHAR: {
			char c = input[0];
			output(c, static_cast<int>(c), static_cast<float>(c), static_cast<double>(c));
			return ;
		}
		case IS_INT: {
			int out_int = static_cast<int>(std::strtol(input.c_str(), NULL, 10));

			char out_char = static_cast<char>(out_int);
			float out_float = static_cast<float>(out_int);
			double out_double = static_cast<double>(out_int);

			overflow = is_overflow(out_float);
			output_switch(out_char, out_int, out_float, out_double, overflow);
			return ;
		}
		case IS_FLOAT: {
			float out_float = std::strtof(input.c_str(), NULL);

			char out_char 		= static_cast<char>(out_float);
			int out_int 		= static_cast<int>(out_float);
			double out_double 	= static_cast<double>(out_float);

			overflow = is_overflow(out_float);
			output_switch(out_char, out_int, out_float, out_double, overflow);
			return ;
		}
		case IS_DOUBLE: {
			double out_double = std::strtod(input.c_str(), NULL);

			char out_char 	= static_cast<int>(out_double);
			int out_int 	= static_cast<int>(out_double);
			float out_float = static_cast<float>(out_double);
			if (errno == ERANGE)
				overflow = DOUBLE_OVERFLOW;
			else
				overflow = is_overflow(out_float);			
			output_switch(out_char, out_int, out_float, out_double, overflow);
			return ;
		}
		case IS_INF: {
			int inf_type = check_inf(input) / 2;
			output_inf(inf_type);
			return ;
		}
		case UNKNOWN: {
			std::cout << "Error: Input cannot be converted." << std::endl;
			return ;
		}
	}
	return ;
}
	
int main(int argc, char **argv)
{
	if (argc != 2 || !argv[1][0])
	{
		std::cerr << "Error: Wrong number of arguments." << std::endl;
		return 1;
	}
	std::string input = argv[1];
	int type = is_type(input);
	if (type == UNKNOWN){
		std::cerr << "Error: Input cannot be converted." << std::endl;
		return (-1);
	}
	convert(input, type);
	return 0;
}