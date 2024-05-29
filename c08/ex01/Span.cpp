/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imaalem <imaalem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 18:24:38 by imaalem           #+#    #+#             */
/*   Updated: 2023/01/25 20:05:41 by imaalem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int	Span::longestSpan(void)
{
	int tmp = 0;

	if (_cont.size() <= 1)
		throw TooFewException();
	else
		tmp = *std::max_element(_cont.begin(), _cont.end()) - *std::min_element(_cont.begin(), _cont.end());
	return (std::abs(tmp));
}

int	Span::shortestSpan(void)
{
	int	tmp1 = 0;
	int	tmp2 = longestSpan();

	if (_cont.size() <= 1)
		throw TooFewException();
	std::sort(_cont.begin(), _cont.end());
	for (unsigned int i = 0 ; i < _cont.size() ; i++)
	{
		tmp1 = std::abs(_cont[i + 1] - _cont[i]);
		if (tmp1 < tmp2)
			tmp2 = tmp1;
	}
	return (tmp2);
}

void	Span::addNumber(int nb)
{
	if (_cont.size() < this->_size)
		_cont.push_back(nb);
	else
		throw FullException();
	return ;
}

Span::Span(unsigned int size) : _size(size)
{
	std::cout << "Span constructor called\n";
}

Span::Span(Span const &src)
{
	*this = src;
}

Span	&Span::operator=(Span const &src)
{
	this->_cont = src._cont;
	this->_size = src._size;
	return (*this);
}

Span::~Span()
{
	std::cout << "Span destructor called\n";
}
