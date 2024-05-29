/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imaalem <imaalem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 13:26:53 by imaalem           #+#    #+#             */
/*   Updated: 2022/12/28 21:43:00 by imaalem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class Animal
{
public:
	virtual void	makeSound();
	std::string		getType();
	Animal(void);
	Animal(std::string type);
	Animal(Animal& src);
	Animal	&operator=(Animal &src);
	virtual ~Animal();
protected:
	std::string	_Type;
};

#endif
