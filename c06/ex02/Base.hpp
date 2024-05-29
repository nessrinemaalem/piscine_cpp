/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imaalem <imaalem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 16:07:08 by imaalem           #+#    #+#             */
/*   Updated: 2023/01/19 16:12:12 by imaalem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
# define BASE_HPP

#include <stdexcept>
#include <iostream>

class	Base
{
public:
	Base(void);
	virtual ~Base(void);
};

class	A : public Base {};
class	B : public Base {};
class	C : public Base {};

#endif
