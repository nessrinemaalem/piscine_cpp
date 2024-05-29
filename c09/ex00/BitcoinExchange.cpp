/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imaalem <imaalem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 12:47:12 by imaalem           #+#    #+#             */
/*   Updated: 2023/06/12 17:18:19 by imaalem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

void	BitcoinExchange::PrintOutput(char *fileName)
{
	std::string	tmp = "";

	_inputStream.open(fileName);
	getline(_inputStream, tmp); // on passe le titre
	while (getline(_inputStream, tmp))
	{
		size_t		pipeIndex = tmp.find('|');
		if (pipeIndex == std::string::npos)
		{
			std::cout << "Error: bad input => " << tmp << std::endl;
			continue;
		}
		std::string date = tmp.substr(0, pipeIndex);
		float		value = atof(tmp.substr(pipeIndex + 2, tmp.length()).c_str());

		if (pipeIndex == std::string::npos || value == 0.0)
		{
			std::cout << "Error: bad input => " << tmp << std::endl;
			continue;
		}
		if (CheckErrors(fileName, date, value, tmp) == FAILURE)
			continue;
		else
			PrintLineResult(date, value);
	}
}

// error management

int	BitcoinExchange::CheckErrors(char *fileName, std::string date, float value, std::string tmp)
{
	if (CheckFile(fileName) == FAILURE)
		exit(EXIT_FAILURE);
	if (CheckDate(date) == FAILURE)
	{
		std::cout << " => " << tmp << std::endl;
		return (FAILURE);
	}
	if (CheckValue(value) == FAILURE)
		return (FAILURE);
	else
		return (SUCCESS);
}

int	BitcoinExchange::CheckFile(char *av)
{
	std::FILE* file_ptr;

	file_ptr = fopen(av, "r");
	if (!file_ptr)
	{
		std::cout << "Error: could not open file." << std::endl;
		return (FAILURE);
	}
	fclose(file_ptr);
	return (SUCCESS);
}

int		BitcoinExchange::CheckDate(std::string date)
{
	int		year = atoi(date.substr(0, date.find('-')).c_str());
	int		month = atoi(date.substr(date.find('-') + 1, 2).c_str());
	int		day = atoi(date.substr(date.find('-') + 4, 6).c_str());

	if ((-2147483648 > year) || (year > 2147483647))
	{
		std::cout << "Error: bad year input";
		return (FAILURE);
	}
	if ( month < 1 || month > 12)
	{
		std::cout << "Error: bad month input";
		return (FAILURE);
	}
	if ( day < 1 || day > 31)
	{
		std::cout << "Error: bad day input";
		return (FAILURE);
	}
	if ((month % 2 == 0 && day > 30) || (month == 2 && day > 29))
	{
		std::cout << "Error: invalid date";
		return (FAILURE);
	}
	return (SUCCESS);
}

int		BitcoinExchange::CheckValue(float value)
{
	if (value < 0)
	{
		std::cout << "Error: not a positive number.\n";
		return (FAILURE);
	}
	if (1000 < value)
	{
		std::cout << "Error: too large a number.\n";
		return (FAILURE);
	}
	return (SUCCESS);
}

bool BitcoinExchange::FindExchangeDate(std::string  date, std::map<std::string, float>::iterator& exchange_it)
{
	if ((exchange_it = _exchangeRate.find(date)) == _exchangeRate.end())
	{
		if ((exchange_it = _exchangeRate.lower_bound(date)) == _exchangeRate.begin())
		{
			std::cout << "Error: No previous date found => " << date << std::endl ;	
			return (false);
		}
		exchange_it--;
	}
	return (true);
}

int	BitcoinExchange::PrintLineResult(std::string date, float value)
{
	std::map<std::string, float>::iterator	exchangeRate;

	if (FindExchangeDate(date, exchangeRate) == true)
	{
		std::cout << date << " => " << value << " = ";
		std::cout << value * exchangeRate->second << std::endl;
	}
	else
		return (FAILURE);
	return (SUCCESS);
}

// data.csv upload

void	BitcoinExchange::UploadExchangeData()
{
	std::string	tmp = "";

	_csvStream.open("data.csv");
	getline(_csvStream, tmp); // on skip le titre
	while (getline(_csvStream, tmp))
	{
		size_t comaIndex = tmp.find(',');
		_exchangeRate[tmp.substr(0, comaIndex)] = atof(tmp.substr(comaIndex + 1, tmp.length()).c_str());
	}
	_csvStream.close();
}