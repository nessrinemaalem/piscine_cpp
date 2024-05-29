/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imaalem <imaalem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 21:26:03 by imaalem           #+#    #+#             */
/*   Updated: 2022/12/27 20:09:20 by imaalem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include <iostream>
#include "Animal.hpp"

class Animal;

class Cat : public Animal
{
	public:;
	std::string		getType();
	void	makeSound();
	Cat();
	Cat	&operator=(const Cat &src);
	Cat(const Cat& src);
	virtual ~Cat();
	protected:
	std::string	_Type;
};

#endif