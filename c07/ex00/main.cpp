/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imaalem <imaalem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 13:02:05 by imaalem           #+#    #+#             */
/*   Updated: 2023/01/21 16:05:24 by imaalem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Whatever.hpp"
#include "Awesome.hpp"
#include <iostream>

int main(void)
{
	{
		Awesome	a(42), b(24);

		swap(a, b);
		std::cout << "a = " << a << " " << ", b = " << b << std::endl;
		std::cout << "max is: " << max(a, b) << std::endl;
		std::cout << "min is: " << min(a, b) << std::endl;
	}

	std::cout << "----------" << std::endl;

	int a = 2;
	int b = 3;
	
	::swap( a, b );
	
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	
	std::string c = "chaine1";
	std::string d = "chaine2";

	::swap( c, d );
	
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	
	return (0);
}
