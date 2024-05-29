/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imaalem <imaalem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 13:26:53 by imaalem           #+#    #+#             */
/*   Updated: 2022/12/29 18:37:50 by imaalem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>


class Animal
{
public:
	virtual void	makeSound() = 0;
	std::string		getType() const;
	
	Animal(void);
	Animal(std::string type);
	Animal(const Animal& src);
	Animal	&operator=(const Animal &src);
	virtual ~Animal();
protected:
	std::string	_Type;
};

#endif
