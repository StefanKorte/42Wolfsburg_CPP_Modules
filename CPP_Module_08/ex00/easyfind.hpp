/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skorte <skorte@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 15:15:42 by skorte            #+#    #+#             */
/*   Updated: 2022/08/25 17:06:22 by skorte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <exception>
#include <iostream>
#include <vector>
#include <algorithm>

template<typename T>
/*
int &easyfind(T &arr, int n) {
	int i = n;
	i = 0;
	while (arr[i] != n && i < (int)(arr.size() - 1))
		i++;
	if (arr[i] != n)
		throw std::exception();
	return (arr[i]);
}
*/

typename T::iterator easyfind(T &container, int value) {
	typename T::iterator it = std::find(container.begin(), container.end(), value);
	if (it == container.end())
		throw std::exception();
	return it;
};