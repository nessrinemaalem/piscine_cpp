/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imaalem <imaalem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 15:12:14 by imaalem           #+#    #+#             */
/*   Updated: 2023/06/12 17:30:56 by imaalem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN
# define RPN

#include <iostream>
#include <stack>
#include <cstdlib>
#include <string>

class  ReversePolishNotation
{
	private:
		std::stack<int>				_numbers;
	public:
		bool				checkErrors(int ac, char **av);
		bool				execute(std::string input);
		long long int		calculate(int a, int b, char c);
		ReversePolishNotation();
		ReversePolishNotation &operator=( ReversePolishNotation& src);
		ReversePolishNotation( ReversePolishNotation& src);
		~ ReversePolishNotation();
};

#endif