/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imaalem <imaalem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 16:08:13 by imaalem           #+#    #+#             */
/*   Updated: 2023/01/21 15:28:28 by imaalem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include <cstdlib>
#include <time.h>
#include <typeinfo>

Base	*generate(void)
{
	int		n;

	std::cout << "Generate an instance of a random child class of Base\n";
	srand(time(NULL));
	n = rand() % 3;
	if (n == 0)
	{
		Base *ptr = new A;	
		std::cout << "Type A pointer to object was created\n";
		return (ptr);
	}
	else if (n == 1)
	{
		Base *ptr = new B;
		std::cout << "Type B pointer to object was created\n";
		return (ptr);
	}
	else if (n == 2)
	{
		Base *ptr = new C;
		std::cout << "Type C pointer to object was created\n";
		return (ptr);
	}
	return (NULL);
}

void	identify(Base *p)
{
	std::cout << "Identify Base *p" << std::endl;
	A *a = dynamic_cast<A *>(p);
	if (a != NULL) {
		std::cout << "Pointer to Base class is A type" << std::endl;
		return ;
	}
	B *b = dynamic_cast<B *>(p);
	if (b != NULL) {
		std::cout << "Pointer to Base class is B type" << std::endl;
		return ;
	}
	C *c = dynamic_cast<C *>(p);
	if (c != NULL) {
		std::cout << "Pointer to Base class is C type" << std::endl;
		return ;
	}
}
 
void	identify(Base &r)
{
	std::cout << "Identify Base &r" << std::endl;

	try {
		A &a = dynamic_cast<A &>(r);
		(void)a;
		std::cout << "Ref to Base class is A type" << std::endl;
	}
	catch(std::bad_cast &re){
	}

	try {
		B &b = dynamic_cast<B &>(r);
		(void)b;
		std::cout << "Ref to Base class is B type" << std::endl;	
	}
	catch(std::bad_cast &re){
	}

	try{
		C &c = dynamic_cast<C &>(r);
		(void)c;
		std::cout << "Ref to Base class is C type" << std::endl;
	}
	catch(std::bad_cast &re){
	}
}

int main()
{
	Base *ptr = generate();
	identify(ptr);
	
	Base &ref = *ptr;
	identify(ref);
	delete ptr;

	return (0);
}