/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imaalem <imaalem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 19:36:32 by imaalem           #+#    #+#             */
/*   Updated: 2022/12/27 20:09:48 by imaalem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int	main( void ) {

	Animal* meta = new Animal();
	Animal* j = new Dog();
	Animal* i = new Cat();

	std::cout << std::endl << "\033[38;5;240mGood sounds\033[0m" << std::endl;

	std::cout << meta->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	std::cout << j->getType() << " " << std::endl;

	meta->makeSound();
	i->makeSound();
	j->makeSound();

	std::cout << std::endl;

	WrongAnimal* k = new WrongAnimal();
	WrongAnimal* l = new WrongCat();

	std::cout << std::endl << "\033[38;5;240mBad sounds\033[0m" << std::endl;

	std::cout << k->getType() << " " << std::endl;
	std::cout << l->getType() << " " << std::endl;

	k->makeSound();
	l->makeSound();

	std::cout << std::endl;

	delete meta;
	delete i;
	delete j;
	delete k;
	delete l;
	
	return (0);
}
