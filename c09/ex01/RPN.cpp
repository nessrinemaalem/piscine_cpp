/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imaalem <imaalem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 15:11:27 by imaalem           #+#    #+#             */
/*   Updated: 2023/06/12 17:48:54 by imaalem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

bool	ReversePolishNotation::checkErrors(int ac, char **av)
{
	if (ac !=2)
		return (true);

	std::string	input(av[1]);
	
	for (int i = 0; input[i]; i++)
	{
		if (input[i] != ' ' && input[i] != '+' && input[i] != '-' && input[i] != '*' && input[i] != '/' && isdigit(input[i]) == 0)
			return (true);
	}
	return (false);
}

long long int	ReversePolishNotation::calculate(int a, int b, char c)
{
	if (c == '+')
		return (a + b);
	if (c == '-')
		return (a - b);
	if (c == '*')
	{
	    if (a > 0 && b > 2147483647 / a)
	    	return (2147483647);
	    else if (a < 0 && b < -2147483648 / a)
	    	return (-2147483648);
    	return a * b;
	}
	else
	{
		if (b == 0)
			return (2147483647);
		else if (a == -2147483648 && b == -1)
			return (2147483647);
		return (a / b);
	}
}

bool	ReversePolishNotation::execute(std::string input)
{
	int			a;
	int			b;
	std::string	tmp = "";

	size_t	i = 0;
	while (i != input.length())
	{
		if (input.find(' ', i) == std::string::npos)
		{
			tmp = input.substr(i, input.find('\0', i) - i);
			i =  input.length();
		}
		else
		{
			tmp = input.substr(i, input.find(' ', i) - i);
			i += input.find(' ', i) - i + 1;
		}
		if (atoi(tmp.c_str()) >= 10)
			return (false);
		if (tmp == "+" || tmp == "-" || tmp == "*" || tmp == "/")
		{
			if (_numbers.size() < 2)
				return (false);
			if (tmp[0] == '/' && _numbers.top() == 0)
				return (false);
			b = _numbers.top();
			_numbers.pop();
			a = _numbers.top();
			_numbers.pop();
			if (calculate(a, b, tmp[0]) == -2147483648 || 2147483647 == calculate(a, b, tmp[0]))
				return (false);
			_numbers.push(calculate(a, b, tmp[0]));
		}
		else
			_numbers.push(atoi(tmp.c_str()));
	}
	if (_numbers.size() != 1)
		return (false);
	std::cout << _numbers.top() << std::endl;
	return (true);
}

// canonical form

ReversePolishNotation::ReversePolishNotation() 
{
	// std::cout << "ReversePolishNotation Default constructor called" << std::endl;
}


ReversePolishNotation::ReversePolishNotation(ReversePolishNotation& src)
{
	std::cout << "ReversePolishNotation Copy operator called" << std::endl;
	*this = src;
}

ReversePolishNotation& ReversePolishNotation::operator=(ReversePolishNotation& src)
{
	std::cout << "ReversePolishNotation Copy assignment operator called" << std::endl;
	if (this != &src)
		this->_numbers = src._numbers;
	return (*this);
}

ReversePolishNotation::~ReversePolishNotation()
{
	// std::cout << "ReversePolishNotation Default destructor called" << std::endl;
}