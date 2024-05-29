/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imaalem <imaalem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 13:02:05 by imaalem           #+#    #+#             */
/*   Updated: 2023/01/22 18:26:38 by imaalem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <iostream>
#include <cstdlib>

int main(int, char**) {
	
	Array< int > numbers(5);
	srand(time(NULL));

	std::cout << "---- Int ----\n";
	try
	{
		for (unsigned int i = 0; i < numbers.size(); i++)
		{
			const int value = rand();
			numbers[i] = value;
		}
		std::cout << "numbers =\n";
		std::cout << numbers << std::endl;
		std::cout << "*deep copying numbers to tmp*\n"; 
		Array< int > tmp = numbers;
		std::cout << "*changing tmp*\n"; 
		for (unsigned int i = 0; i < tmp.size(); i++)
		{
			const int value = rand();
			tmp[i] = value;
		}
		std::cout << std::endl << "results:\n tmp =\n"; 
		std::cout << tmp << "\n";
		std::cout << "and numbers =\n"; 
		std::cout << numbers;

	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	std::cout << "--- Memory Exception ---\n";
	try {
		numbers[-42] = 0;
	}
	catch(const std::exception& e) {
		std::cerr << e.what() << '\n';
	}

	std::cout << std::endl << "---- String ----" << std::endl;
	Array<std::string> stringArray(5);
	stringArray[0] = "Bonjour";
	stringArray[1] = "je m'appelle";
	stringArray[2] = "Bernard";
	stringArray[3] = "et je conduis";
	stringArray[4] = "des autocars";

	std::cout << stringArray << std::endl;
	return 0;
}
