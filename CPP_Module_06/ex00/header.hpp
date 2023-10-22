/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skorte <skorte@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 20:54:47 by skorte            #+#    #+#             */
/*   Updated: 2022/08/23 23:04:22 by skorte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_HPP
# define HEADER_HPP

#include <ostream>
#include <iostream>
#include <sstream>
#include <string>
#include <stdint.h> // INT32_MIN/MAX
#include <limits>
#include <cstdlib> 
#include <cerrno>

// types
#define IS_CHAR 0
#define IS_INT 1
#define IS_FLOAT 2
#define IS_DOUBLE 3
#define IS_INF 4
#define UNKNOWN -1

// infinities
#define nan_Float  std::numeric_limits<float>::quiet_NaN()
#define inf_Float  std::numeric_limits<float>::infinity()
#define ninf_Float -std::numeric_limits<float>::infinity()
#define nan_Double std::numeric_limits<double>::quiet_NaN()
#define inf_Double  std::numeric_limits<double>::infinity()
#define ninf_Double -std::numeric_limits<double>::infinity()

// overflows
#define IS_PRINTABLE 0
#define IS_NOT_PRINTABLE 1
#define CHAR_OVERFLOW 2
#define INT_OVERFLOW 3
#define FLOAT_OVERFLOW 4
#define DOUBLE_OVERFLOW 5

// output functions
void	output_switch(char out_c, int  out_int, float out_float, double out_double, int overflow);

void	output(char out_c, int out_int, float out_float, double out_double);
void	output(std::string out_c, int out_int, float out_float, double out_double);
void	output(std::string out_c, std::string out_int, float out_float, double out_double);
void	output(std::string out_c, std::string out_int, std::string out_float, double out_double);
void	output(std::string out_c, std::string out_int, std::string out_float, std::string out_double);

#endif
