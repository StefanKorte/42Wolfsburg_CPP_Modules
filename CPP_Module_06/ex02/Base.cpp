/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skorte <skorte@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 00:25:34 by skorte            #+#    #+#             */
/*   Updated: 2022/08/22 16:52:35 by skorte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base::~Base(void) {
	std::cout << std::endl << "Base Destructor Called." << std::endl;
}

Base *generate(void)
{
	Base *ptr = NULL;
	std::srand(std::clock());
	int i = std::rand() % 3;
	switch(i) {
		case 0:
			ptr = (new A);
			break;
		case 1:
			ptr = (new B);
			break;
		case 2:
			ptr = (new C);
	}
	return ptr;
}


/*
** If the cast is successful, dynamic_cast returns a value of type new-type.
** If the cast fails and new-type is a pointer type, it returns a null pointer
** of that type. If the cast fails and new-type is a reference type, it throws
** an exception that matches a handler of type std::bad_cast.
*/

void identify(Base* base)
{
	A *a = dynamic_cast<A *>(base);
	if (a != NULL) {
		std::cout << "This pointer points to an object of class A." << std::endl;
		return ;
	}
	B *b = dynamic_cast<B *>(base);
	if (b != NULL) {
		std::cout << "This pointer points to an object of class B." << std::endl;
		return ;
	}
	C *c = dynamic_cast<C *>(base);
	if (c != NULL) {
		std::cout << "This pointer points to an object of class C." << std::endl;
		return ;
	}
	std::cout << "Error: Something went wrong!" << std::endl;
	return ;
}

void identify(Base &base) {	
	try {
		A &x = dynamic_cast<A &>(base);
		(void) x;
		std::cout << "This reference points to an object of class A." << std::endl;
		return ;
	}
	catch (std::exception& exc) {}
	try {
		B &x = dynamic_cast<B &>(base);
		(void) x;
		std::cout << "This reference points to an object of class B." << std::endl;
		return ;
	}
	catch (std::exception& exc) {}
	try {
		C &x = dynamic_cast<C &>(base);
		(void) x;
		std::cout << "This reference points to an object of class C." << std::endl;
		return ;
	}
	catch (std::exception& exc) {}
	std::cout << "Error: Something went wrong!" << std::endl;
	return ;
}
