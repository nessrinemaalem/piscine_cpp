/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imaalem <imaalem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 21:26:03 by imaalem           #+#    #+#             */
/*   Updated: 2022/12/29 18:11:23 by imaalem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Animal;
class Brain;

class Dog : public Animal
{
	public:;
	void	makeSound();
	Dog();
	Dog(std::string newType);
	Dog	&operator=(const Dog &src);
	Dog(const Dog& src);
	virtual ~Dog();
	private:
	Brain		*myBrain;
};

#endif