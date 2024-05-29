/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imaalem <imaalem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 14:55:53 by imaalem           #+#    #+#             */
/*   Updated: 2023/01/19 15:14:48 by imaalem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

Data::Data(void)
{
	std::cout << "Data Default constructor called" << std::endl;
}

Data::Data(int i) : data(i)
{
	std::cout << "Data constructor called" << std::endl;
}


Data::Data(const Data & rhs)
{
	std::cout << "Copy Constructor called" << std::endl;
	this->data = rhs.data;
	*this = rhs;
	return ;
}

Data &Data::operator=(const Data & rhs)
{
	std::cout << "Operator assignment called" << std::endl;
	this->data = rhs.data;
	return (*this);
}

Data::~Data(void)
{
	std::cout << "Data Destructor called" << std::endl;
	return ;
}

std::ostream & operator << (std::ostream & cout, const Data & rhs)
{
	std::cout << rhs.data << std::endl;
	return (cout);
}
