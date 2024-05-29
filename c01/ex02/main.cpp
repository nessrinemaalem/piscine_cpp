/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imaalem <imaalem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 20:35:13 by imaalem           #+#    #+#             */
/*   Updated: 2022/07/25 12:54:42 by imaalem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
	std::string 	Astring = "HI THIS IS BRAIN";
	std::string		*stringPTR = &Astring;
	std::string&	stringREF = Astring;

	std::cout << "Memory address of Astring is : " << &Astring << std::endl;
	std::cout << "Memory address of stringPTR is : " << &stringPTR << std::endl;
	std::cout << "Memory address of stringREF is : " << &stringREF << std::endl;
	std::cout << std::endl;
	std::cout << "Value of Astring is : " << Astring << std::endl;
	std::cout << "Value of stringPTR is : " << *stringPTR << std::endl;
	std::cout << "Value of stringREF is : " << stringREF << std::endl;
	return (0);
}
