/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imaalem <imaalem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 20:39:42 by imaalem           #+#    #+#             */
/*   Updated: 2022/12/27 20:58:20 by imaalem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>

class Brain
{
public:
	Brain(void);
	Brain(std::string type);
	Brain(const Brain& src);
	Brain	&operator=(const Brain &src);
	virtual ~Brain();
protected:
	std::string ideas[100];
};

#endif