/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skorte <skorte@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 16:58:44 by skorte            #+#    #+#             */
/*   Updated: 2022/08/24 22:43:50 by skorte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

template <typename T>

class Array {
	private:
		T *_array;
		unsigned int _size;

	public:
		Array();
		Array(unsigned int n);
		Array(const Array &obj);
		~Array();
		Array &operator=(const Array &obj);

		unsigned int	size(void) const;
		T &operator[](unsigned int index);
};

// Default constructor
template<typename T>

Array<T>::Array() {
	_size = 0;
	_array = new T[0];
	if (!_array)
		std::cerr << "Error: Array allocation failed!" << std::endl;
}

// Constructor with given size
template<typename T>

Array<T>::Array(unsigned int n) {
	_size = n;
	_array = new T[_size];
	if (_array == NULL)
		std::cerr << "Error: Array allocation failed!" << std::endl;
	else
		for (unsigned int i = 0; i < _size; i++)
			_array[i] = 0;
}

// Copy constructor
template<typename T>

Array<T>::Array(const Array &tocopy) {
	_size = tocopy._size;
	_array = new T[_size];
	if (_array == NULL)
		std::cerr << "Error: Array allocation failed!" << std::endl;
	else
		for (unsigned int i = 0; i < _size; i++)
			_array[i] = tocopy._array[i];
}

// Destructor
template <typename T>

Array<T>::~Array() {
	delete[](_array);
}

// Copy operator
template <typename T>

Array<T>	&Array<T>::operator=(const Array &tocopy) {
	if (this != &tocopy)
	{
		_size = tocopy._size;
		delete[](_array);
		_array = new T[_size];
		if (_array == NULL) {
			std::cerr << "Error: Array allocation failed!" << std::endl;
			_size = 0;
		}
		else
			for (unsigned int i = 0; i < _size; i++)
				_array[i] = tocopy._array[i];
	}
	return (*this);
}

// Return array size function
template <typename T>

unsigned int	Array<T>::size(void) const {
	return (_size);
}

// Index element extractor function
template <typename T>

T	&Array<T>::operator[](unsigned int index) {
	if (index >= _size)
		throw std::out_of_range("Error: Invalid index.");
	return (_array[index]);
}

#endif
