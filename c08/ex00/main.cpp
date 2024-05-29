/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imaalem <imaalem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 12:00:58 by imaalem           #+#    #+#             */
/*   Updated: 2023/01/25 12:33:30 by imaalem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

template <typename T>
void testor() {
	T myvector;
	myvector.push_back(1);
	myvector.push_back(2);
	myvector.push_back(9);
	myvector.push_back(3);
	myvector.push_back(5);
	int	it;

	std::cout << "Succesfull test\n";
	it = easyfind(myvector, 2);
	if (it != -42)
		std::cout << "Element found: " << it << '\n';

	std::cout << std::endl;
	try
	{
		std::cout << "Unsuccefull test\n";
		it = easyfind(myvector, 10);
		if (it != -42)
			std::cout << "Element found: " << it << '\n';;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

int main(void) {
	std::cout << "* Testing with int *\n";
	testor<std::list<int> >();
	std::cout << "=================\n";
	std::cout << "* Testing with unsigned int *\n";
	testor<std::list<unsigned int> >();
	std::cout << "=================\n";
	std::cout << "* Testing with float *\n";
	testor<std::list<float> >();
	return 0;
} 