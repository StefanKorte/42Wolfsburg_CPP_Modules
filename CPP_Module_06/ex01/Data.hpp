/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skorte <skorte@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 16:58:23 by skorte            #+#    #+#             */
/*   Updated: 2022/08/22 22:08:53 by skorte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
# define DATA_HPP

# include <iostream>

class Data {
	private:
		int		_some_data;
		Data();  // default constructor, private, not usable

	public:
		Data(const int some_data);
		Data(const Data& tocopy);
		~Data();
		Data & operator=(const Data& tocopy);

		int getData() const;

};

std::ostream& operator<<(std::ostream& os, const Data& tocout);

#endif
