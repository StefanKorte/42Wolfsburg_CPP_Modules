/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialize.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skorte <skorte@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 17:17:59 by skorte            #+#    #+#             */
/*   Updated: 2022/08/22 22:09:00 by skorte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdint.h> // for uintptr_t type definition
#include "Data.hpp"

/*
** With reinterpret_cast the CPU does not invoke any calculations.
** It just treats a set of bits in the memory like if it had another type.
*/

uintptr_t serialize(Data* ptr) {
//	void *q = (void*)ptr;
//	uintptr_t ret = (uintptr_t)q;
	uintptr_t ret = reinterpret_cast<uintptr_t>(ptr);
	return ret ;
}
Data* deserialize(uintptr_t raw) {
//	Data *ret = (Data*)raw;
	Data *ret = reinterpret_cast<Data *>(raw);
	return ret;
}
