/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMeVector.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imaalem <imaalem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 14:33:04 by imaalem           #+#    #+#             */
/*   Updated: 2023/06/02 17:42:10 by imaalem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

// canonical form

PmergeMeVector::PmergeMeVector() 
{
	// std::cout << "PmergeMeVector Default constructor called" << std::endl;
}

PmergeMeVector::PmergeMeVector(PmergeMeVector& src)
{
	std::cout << "PmergeMeVector Copy operator called" << std::endl;
	*this = src;
}

PmergeMeVector& PmergeMeVector::operator=(PmergeMeVector& src)
{
	std::cout << "PmergeMeVector Copy assignment operator called" << std::endl;
	if (this != &src)
		this->_firstChain = src._firstChain;
	return (*this);
}

PmergeMeVector::~PmergeMeVector()
{
	// std::cout << "PmergeMeVector Default destructor called" << std::endl;
}