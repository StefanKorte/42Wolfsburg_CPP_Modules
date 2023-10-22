/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skorte <skorte@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 15:19:59 by skorte            #+#    #+#             */
/*   Updated: 2022/08/25 19:40:32 by skorte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <list>
#include "MutantStack.hpp"

int main() {
	{
		MutantStack<int> mstack;
		mstack.push(5);
		mstack.push(17);

		std::list<int> mlist;
		mlist.push_back(5);
		mlist.push_back(17);
	
		std::cout << mstack.top() << std::endl; // back for std::list
		mstack.pop(); 							// pop_back for std::list
		std::cout << mstack.size() << std::endl;

		std::cout << "list " << mlist.back() << std::endl;
		mlist.pop_back();
		std::cout << "list " << mlist.size() << std::endl;

		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		mstack.push(0);

		mlist.push_back(3);
		mlist.push_back(5);
		mlist.push_back(737);
		mlist.push_back(0);

		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();
		++it;
		std::cout  << *it << std::endl;
		--it;

		std::list<int>::iterator lit = mlist.begin();
		std::list<int>::iterator lite = mlist.end();

		++lit;
		std::cout << "list " << *lit << std::endl;		
		--lit;

		while (it != ite)
		{
		std::cout << *it << std::endl;
		it++;
		}

		while (lit != lite)
		{
			std::cout << "list " << *lit << std::endl;
			++lit;
		}
	
		std::stack<int> s(mstack);
		std::list<int> l(mlist);
	}
	return 0;
}

/*
int main()
{
	MutantStack<float> mlist;
	std::cout << "mlist.size() = " << mlist.size() << std::endl;
	mlist.push(1.5);
	mlist.push(2.5);
	mlist.push(3.5);
	mlist.push(4.5);
	std::cout << "mlist.size() = " << mlist.size() << std::endl;
	MutantStack<float>::const_reverse_iterator it = mlist.rbegin();
	MutantStack<float>::const_reverse_iterator ite = mlist.rend();
	++it;
	--it;
	int ct = 0;
	std::cout << "testing const reverse iterator" << std::endl;
	while (it != ite)
	{
		std::cout << ct <<  ". *it = " << *it << std::endl;
		ct++;
		++it;
	}
	
	
	std::vector<float> check_vector;
	std::cout << "check_vector.size() = " << check_vector.size() << std::endl;
	check_vector.push_back(1.5);
	check_vector.push_back(2.5);
	check_vector.push_back(3.5);
	check_vector.push_back(4.5);
	std::cout << "check_vector.size() = " << check_vector.size() << std::endl;
	std::vector<float>::const_reverse_iterator it_v = check_vector.rbegin();
	std::vector<float>::const_reverse_iterator ite_v = check_vector.rend();
	++it_v;
	--it_v;
	int ct_v = 0;
	std::cout << "testing const reverse iterator" << std::endl;
	while (it_v != ite_v)
	{
		std::cout << ct_v <<  ". *it = " << *it_v << std::endl;
		ct_v++;
		++it_v;
	}
	return (0);
}

*/
