/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imaalem <imaalem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 21:26:03 by imaalem           #+#    #+#             */
/*   Updated: 2022/12/29 18:40:58 by imaalem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Animal;
class Brain;

class Cat : public Animal
{
	public:;
	void	makeSound();
	Cat();
	Cat(std::string newType);
	Cat	&operator=(const Cat &src);
	Cat(const Cat& src);
	virtual ~Cat();
	private:
	Brain		*myBrain;
};

#endif