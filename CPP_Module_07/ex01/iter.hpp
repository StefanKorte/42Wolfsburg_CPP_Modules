/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skorte <skorte@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 14:04:50 by skorte            #+#    #+#             */
/*   Updated: 2022/08/24 16:59:44 by skorte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <stdlib.h>

template <typename T>

void iter(T *array, size_t len, void(*ft)(T &t))
{
	for(size_t i = 0; i < len; i++)
		ft(array[i]);
}

template <typename T>

void iter(T *array, size_t len, void(*ft)(T const &t))
{
	for(size_t i = 0; i < len; i++)
		ft(array[i]);
}


#endif
