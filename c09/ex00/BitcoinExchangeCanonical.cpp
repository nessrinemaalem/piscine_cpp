/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchangeCanonical.cpp                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imaalem <imaalem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 20:42:56 by imaalem           #+#    #+#             */
/*   Updated: 2023/06/12 16:55:25 by imaalem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

// getter

std::map<std::string, float> BitcoinExchange::getExchangeRate()
{
	return (this->_exchangeRate);
}

// canonical form

BitcoinExchange::BitcoinExchange(void) 
{
	// std::cout << "BitcoinExchange Default constructor called" << std::endl;
	UploadExchangeData();
}


BitcoinExchange::BitcoinExchange(BitcoinExchange& src)
{
	std::cout << "BitcoinExchange Copy operator called" << std::endl;
	*this = src;
}

BitcoinExchange& BitcoinExchange::operator=(BitcoinExchange& src)
{
	std::cout << "BitcoinExchange Copy assignment operator called" << std::endl;
	if (this != &src)
		this->_exchangeRate = src.getExchangeRate();
	return (*this);
}

BitcoinExchange::~BitcoinExchange()
{
	// std::cout << "BitcoinExchange Default destructor called" << std::endl;
}