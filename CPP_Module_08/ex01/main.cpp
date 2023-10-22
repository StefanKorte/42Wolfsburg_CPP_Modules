/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skorte <skorte@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 15:19:24 by skorte            #+#    #+#             */
/*   Updated: 2022/08/25 18:50:21 by skorte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ctime>
#include "Span.hpp"

int main()
{
	std::cout << "Span Test" << std::endl;
	Span sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	sp.printSpan();
	std::cout << "Longest Span:  " << sp.longestSpan() << std::endl;
	std::cout << "Shortest Span: " << sp.shortestSpan() << std::endl;

	std::cout << std::endl << "10000 num Test" << std::endl;
	Span sp2 = Span(10000);
	srand(time(NULL));
	for (int i = 0; i < 10000; i++){
		sp2.addNumber(rand());
	}
	std::cout << "Longest Span:  " << sp2.longestSpan() << std::endl;
	std::cout << "Shortest Span: " << sp2.shortestSpan() << std::endl;

	std::cout << std::endl << "Exception Tests" << std::endl;
	Span sp3 = Span(6);
	sp3.printSpan();
	try {sp3.shortestSpan();}
	catch (std::exception &exc) {
		std::cout << "Error: " << exc.what() << std::endl;}
	sp3.addNumber(6);
	sp3.printSpan();
	try {sp3.longestSpan();}
	catch (std::exception &exc) {
		std::cout << "Error: " << exc.what() << std::endl;}
	int to_add[] = {17, 44, 13, 5331, 5};
	sp3.addNumbers(to_add, 5);
	sp3.printSpan();
	try {sp3.addNumber(7);}
	catch (std::exception &exc) {
		std::cout << "Error: " << exc.what() << std::endl;}
	std::cout << "Longest Span:  " << sp3.longestSpan() << std::endl;
	std::cout << "Shortest Span: " << sp3.shortestSpan() << std::endl;
	return 0;
}
