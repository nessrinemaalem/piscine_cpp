/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imaalem <imaalem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 13:02:05 by imaalem           #+#    #+#             */
/*   Updated: 2023/01/19 14:25:31 by imaalem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Conversions.hpp"

int main(int ac, char **av)
{
	if (ac != 2) {
		std::cout << "Wrong number of arguments, only one string as parameter is expected\n";
		return 0;
	}

	Conversions arg(av[1]);

	std::cout << "char: ";
	try {
		arg.toChar();
		std::cout << arg.getChar() << std::endl;;
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << "int: ";
	try {
		arg.toInt();
		std::cout << arg.getInt() << std::endl;;
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << "float: ";
	try {
		arg.toFloat();
		std::cout << std::fixed << std::setprecision(1) << arg.getFloat() << 'f' << std::endl;;
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << "double: ";
	try {
		arg.toDouble();
		std::cout << std::fixed << std::setprecision(1) << arg.getDouble() << std::endl;;
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	return 0;
}
