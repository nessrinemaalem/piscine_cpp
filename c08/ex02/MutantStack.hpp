/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imaalem <imaalem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 14:17:40 by imaalem           #+#    #+#             */
/*   Updated: 2023/01/26 14:33:39 by imaalem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <stack>

template <class T>
class MutantStack : public std::stack<T>
{
public:
	typedef typename std::stack<T>::container_type::iterator	iterator;
	// action
	iterator begin(){return(this->c.begin());};
	iterator end(){return(this->c.end());};
	// canonical
	MutantStack(){};
	MutantStack(MutantStack const &src){this->c = src.c;};
	MutantStack &operator=(MutantStack const &src){*this = src; return (*this);};
	~MutantStack(){};
};

#endif