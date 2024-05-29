/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imaalem <imaalem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 11:06:44 by imaalem           #+#    #+#             */
/*   Updated: 2023/01/25 19:39:54 by imaalem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <exception>
#include <list>
#include <algorithm>
#include <stack>

class Span
{
public:
	// action
	void	addNumber(int nb);
	int		shortestSpan(void);
	int		longestSpan(void);
	class TooFewException : public std::exception
	{
	public:
		const char* what() const throw() {
			return "Too few numbers in the container!";
		}
	};
	class FullException : public std::exception
	{
	public:
		const char* what() const throw() {
			return "Too many numbers in the container!";
		}
	};
	// canonical
	Span(unsigned int size);
	Span(Span const &src);
	Span &operator=(Span const &src);
	~Span();
private:
	std::vector<int>	_cont;			
	unsigned int		_size;
};



#endif