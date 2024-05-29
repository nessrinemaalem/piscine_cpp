/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imaalem <imaalem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 13:02:05 by imaalem           #+#    #+#             */
/*   Updated: 2023/01/22 16:55:33 by imaalem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <iostream>

// int main(void)
// {
// 	{
// 		size_t size = 5;
// 		int test[] = {42, -8, 7, 2147483647, 0};

// 		iter(test, size, print);
// 	}
// 	std::cout << "-------------------------------" << std::endl;

// 	{
// 		std::string test[] = {"Salut ", "ca ", "va ", "?"};
// 		iter(test, 4, print);
// 	}
	
// 	std::cout << "-------------------------------" << std::endl;
	
// 	return 0;
// }

// class Awesome {
	
// public:

// 	Awesome( void ) : _n( 42 ) { return; }
// 	int get( void ) const { return this->_n; }

// private:
// 	int _n;

// };

// std::ostream & operator<<( std::ostream & o, Awesome const & rhs ) { o << rhs.get(); return o; }

class Awesome {
	
public:

	Awesome( void ) : _n( 42 ) { return; }
	int get( void ) const { return this->_n; }

private:

	int _n;

};

std::ostream & operator<<( std::ostream & o, Awesome const & rhs ) { o << rhs.get(); return o; }

int main( void ) {

	{
		int size = 5;
		int test[] = {42, -8, 7, 2147483647, 0};

		iter(test, size, print);
		
		std::cout << "-------------------------------" << std::endl;
	
		iter(test, size, print);
	}

	std::cout << "-------------------------------" << std::endl;

	{
		std::string test[] = {"Salut ", "ca ", "va ", "?"};
		iter(test, 4, print);
	}
	
	std::cout << "----------" << std::endl;
	

	int tab[] = { 0, 1, 2, 3, 4 };
	Awesome tab2[5];

	iter( tab, 5, print );
	iter( tab2, 5, print );
	
	
	return 0;
}
