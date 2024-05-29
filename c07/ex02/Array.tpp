/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imaalem <imaalem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 18:47:15 by imaalem           #+#    #+#             */
/*   Updated: 2023/01/22 18:25:27 by imaalem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template <typename T>
unsigned int	Array<T>::size(void)
{
	return (this->_size);
}

template <typename T>
Array<T>::Array(void) : _size(0), _array(NULL)
{
	std::cout << "Default constructor Array called\n";
}

template <typename T>
Array<T>::Array(unsigned int size) : _size(size), _array(new T[size])
{
	std::cout << "Constructor Array called\n";
}

template <typename T>
Array<T>::Array(Array &src)
{
	_size = src._size;
	_array = new T[_size];
	for (unsigned int i = 0; i < _size; i++)
		_array[i] = src._array[i];
}

template <typename T>
Array<T>& Array<T>::operator=(Array &src)
{
	if (this == &src)
		return (*this);
	// delete [] _array;	//	invalid free
	if (src._size == 0) {
		this->_size = 0;
		this->_array = NULL;
		return *this;
	}	
	this->_size = src._size;
	this->_array = new T[this->_size];
	if (&src != this)
		for (unsigned int i = 0 ; i < this->_size ; i++)
			this->_array[i] = src._array[i]; 
	return *this;
}

template<typename T>
T	&Array<T>::operator[](unsigned int i) const
{
	if (i >= this->_size)
		throw ExceptionSegMemory();
	else
		return (this->_array[i]);
}

template <typename T>
Array<T>::~Array()
{
	std::cout << "Array Destructor called\n";
	if (_array)
		delete[] _array;	
}

template <typename T>
std::ostream	&operator<<(std::ostream &c, Array<T> &src)
{
	for (unsigned int i = 0; i < src.size(); i++)
		c << src[i] << std::endl;
	return (c);
}