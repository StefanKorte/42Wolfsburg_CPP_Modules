/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skorte <skorte@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 01:54:12 by skorte            #+#    #+#             */
/*   Updated: 2022/07/11 00:21:17 by skorte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <string>

class Contact
{
private:
	std::string data_names[5];
	std::string	data[5];
public:
	Contact();
	void	set_contact();
	void	view_header();
	void	view_contact_short();
	void	view_contact_details();
};

#endif