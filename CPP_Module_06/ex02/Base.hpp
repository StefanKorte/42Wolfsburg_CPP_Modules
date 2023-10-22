/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skorte <skorte@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 00:22:05 by skorte            #+#    #+#             */
/*   Updated: 2022/08/22 01:06:58 by skorte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_H
# define BASE_H

#include <iostream>
#include <cstdlib>
#include <ctime> // for clock()

class Base {
	public:
		virtual ~Base(void);
};

class A: public Base {};
class B: public Base {};
class C: public Base {};

Base *generate(void);
void identify(Base* base);
void identify(Base &base);

#endif
