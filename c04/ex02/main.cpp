/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imaalem <imaalem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 19:36:32 by imaalem           #+#    #+#             */
/*   Updated: 2022/12/29 18:44:01 by imaalem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int	main( void ) {

	std::cout << "Main base" << std::endl;
	const Animal* i = new Dog();
	const Animal* j = new Cat();

	delete i;//should not create a leak
	delete j;

	std::cout << std::endl << "More tests" << std::endl;

	Dog cpyDog; {
		Dog tmp = Dog(cpyDog);
	}
	
	Animal	*Attila[10];

	for (int k = 0 ; k < 5 ; k++)
		Attila[k] = new Dog();
	for (int k = 5 ; k < 10 ; k++)
		Attila[k] = new Cat();

	for (int k = 0 ; k < 10 ; k++)
		delete Attila[k];

	// to check if really abstract, de-comment
	// Animal *test = new Animal();
	// Animal = test;

	return 0;
}