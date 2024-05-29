/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imaalem <imaalem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 12:47:15 by imaalem           #+#    #+#             */
/*   Updated: 2023/06/12 17:15:50 by imaalem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BTC
#define BTC

#include <map>
#include <bitset>
#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
#include <cstdio>
#include <cstdlib>

# define SUCCESS 1
# define FAILURE -1

class BitcoinExchange
{
private:
	std::map<std::string, float>	_exchangeRate;
	std::ifstream				_csvStream;
	std::ifstream				_inputStream;
public:
	void	PrintOutput(char *fileName);
	int		PrintLineResult(std::string date, float value);
	void	UploadExchangeData();
	int		CheckErrors(char *fileName, std::string date, float value, std::string tmp);
	int		CheckDate(std::string date);
	int		CheckValue(float value);
	int		CheckFile(char *av);
	bool		FindExchangeDate(std::string  date, std::map<std::string, float>::iterator& exchange_it);
	// getter
	std::map<std::string, float> getExchangeRate();
	// canonical
	BitcoinExchange(void);
	BitcoinExchange(BitcoinExchange& src);
	BitcoinExchange	&operator=(BitcoinExchange &src);
	~BitcoinExchange();
};

#endif
