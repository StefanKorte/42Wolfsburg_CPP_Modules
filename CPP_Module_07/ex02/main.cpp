/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skorte <skorte@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 16:57:17 by skorte            #+#    #+#             */
/*   Updated: 2022/08/24 22:53:20 by skorte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include <string>
#include "Array.hpp"

int main(void) {
//	int * a = new int();
//	std::cout << a << " " << *a << std::endl;

	std::cout << std::endl << "Array default constructor / destructor" << std::endl; 
	{
		Array<float> *arr0 = new Array<float>();
		std::cout << std::endl << "Array address " << (void *)arr0 << std::endl;
		delete arr0;
	}
	std::cout << std::endl << "Array size constructor" << std::endl;
	{
		unsigned int size = 4;
		Array<float> *arr = new Array<float>(size);
		std::cout << arr << " " << (*arr)[0] << std::endl;
		
		for (unsigned int i = 0; i < (*arr).size(); i++) {
			(*arr)[i] = i;
		}
		for (int i = -1; i <= (int)(*arr).size(); i++) {
			try {
				std::cout << "arr[" << i << "] = " << (*arr)[i] << std::endl;
			}
			catch (std::exception &exc) {
				std::cerr << "# " << exc.what() << std::endl;
			}
		}
	std::cout << std::endl << "Array copy constructor" << std::endl;
		Array<float> *arr_copy = new Array<float>(*arr);
		for (unsigned int i = 0; i < (*arr_copy).size(); i++) 
			std::cout << "arr_copy[" << i << "] = " << (*arr_copy)[i] << std::endl;
		for (unsigned int i = 0; i < (*arr_copy).size(); i++) 
			(*arr_copy)[i]=arr_copy->size() - (*arr_copy)[i];
		for (unsigned int i = 0; i < (*arr_copy).size(); i++) 
			std::cout << "modified arr_copy[" << i << "] = " << (*arr_copy)[i] << std::endl;
		for (unsigned int i = 0; i < (*arr).size(); i++) 
			std::cout << "arr[" << i << "] = " << (*arr)[i] << std::endl;
	std::cout << std::endl << "Array copy operator" << std::endl;
		*arr = *arr_copy;
		for (unsigned int i = 0; i < (*arr).size(); i++) 
			std::cout << "arr[" << i << "] = " << (*arr)[i] << std::endl;
		for (unsigned int i = 0; i < (*arr_copy).size(); i++) 
			(*arr_copy)[i]=arr_copy->size() - (*arr_copy)[i];
		for (unsigned int i = 0; i < (*arr_copy).size(); i++) 
			std::cout << "modified again arr_copy[" << i << "] = " << (*arr_copy)[i] << std::endl;
		for (unsigned int i = 0; i < (*arr).size(); i++) 
			std::cout << "arr[" << i << "] = " << (*arr)[i] << std::endl;

	delete arr;
	delete arr_copy;
	}
	return 0 ;
} 

/*
#include <iostream>
#include "Array.hpp"
#include <stdlib.h>

#define MAX_VAL 750
int main(int, char**)
{
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    //SCOPE
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    delete [] mirror;
	std::cout << "END" << std::endl;
    return 0;
} */

