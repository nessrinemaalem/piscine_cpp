/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imaalem <imaalem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 16:06:08 by imaalem           #+#    #+#             */
/*   Updated: 2023/01/19 16:09:29 by imaalem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base::Base(void)
{
	std::cout << "Base Constuctor called" << std::endl;
}

Base::~Base(void)
{
	std::cout << "Base Destructor called" << std::endl;
}
