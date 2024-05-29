/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imaalem <imaalem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 14:47:06 by imaalem           #+#    #+#             */
/*   Updated: 2023/01/19 15:13:34 by imaalem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"
#include <stdint.h>

uintptr_t	serialize(Data *ptr)
{
	std::cout << "serialize " << ptr << " towards uintptr\n";
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data *deserialize(uintptr_t raw)
{
	std::cout << "deserialize " << raw << " towards Data *\n";
	return (reinterpret_cast<Data *>(raw));
}

int main(void)
{

	Data		*data = new Data(42);
	Data		*tmp;
	uintptr_t	i = 0;

	std::cout << "At the begining:\n";
	std::cout << "Unsigned int ptr: " << i << std::endl;
	std::cout << "Data ptr: " << data << std::endl;
	std::cout << std::endl;

	std::cout << "Procesing\n";
	i = serialize(data);
	std::cout << "i is " << i << std::endl;
	tmp = deserialize(i);
	std::cout << std::endl;	

	std::cout << "Finally:\n";
	std::cout << "tmp is " << tmp << std::endl;
	std::cout << "wich is equal to Data ptr value\n";
	
	delete data;
	return (0);
}