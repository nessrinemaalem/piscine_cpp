/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imaalem <imaalem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 21:26:03 by imaalem           #+#    #+#             */
/*   Updated: 2022/12/27 20:14:52 by imaalem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include <iostream>
#include "WrongAnimal.hpp"

class WrongAnimal;

class WrongCat : public WrongAnimal
{
	public:;\
	WrongCat();
	WrongCat	&operator=(const WrongCat &src);
	WrongCat(const WrongCat& src);
	virtual ~WrongCat();
	private:
	std::string	_Type;
};

#endif