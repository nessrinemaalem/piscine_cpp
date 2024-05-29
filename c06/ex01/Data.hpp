/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imaalem <imaalem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 14:58:23 by imaalem           #+#    #+#             */
/*   Updated: 2023/01/19 15:08:13 by imaalem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
#define DATA_HPP

#include <iostream>
#include <stdexcept>

class	Data
{
public:
	int		data;

	Data(void);	
	Data(int n);
	Data(Data const & rhs);
	Data	&operator= ( const Data & rhs);
	~Data(void);
};

std::ostream & operator << (std::ostream & sortie, const Data & rhs);

#endif
