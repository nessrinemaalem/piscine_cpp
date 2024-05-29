/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMeList.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imaalem <imaalem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 14:33:04 by imaalem           #+#    #+#             */
/*   Updated: 2023/06/01 17:29:58 by imaalem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

// canonical form

PmergeMeList::PmergeMeList() 
{
	// std::cout << "PmergeMeList Default constructor called" << std::endl;
}

PmergeMeList::PmergeMeList(PmergeMeList& src)
{
	std::cout << "PmergeMeList Copy operator called" << std::endl;
	*this = src;
}

PmergeMeList& PmergeMeList::operator=(PmergeMeList& src)
{
	std::cout << "PmergeMeList Copy assignment operator called" << std::endl;
	if (this != &src)
		this->_firstChain = src._firstChain;
	return (*this);
}

PmergeMeList::~PmergeMeList()
{
	// std::cout << "PmergeMeList Default destructor called" << std::endl;
}