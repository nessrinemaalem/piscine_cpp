/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imaalem <imaalem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 21:26:03 by imaalem           #+#    #+#             */
/*   Updated: 2022/12/27 20:09:23 by imaalem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include <iostream>
#include "Animal.hpp"

class Animal;

class Dog : public Animal
{
	public:;
	void	makeSound();
	std::string		getType();
	Dog();
	Dog	&operator=(const Dog &src);
	Dog(const Dog& src);
	virtual ~Dog();
	private:
	std::string	_Type;
};

#endif