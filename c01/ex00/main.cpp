/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imaalem <imaalem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 16:04:44 by imaalem           #+#    #+#             */
/*   Updated: 2022/07/22 14:46:37 by imaalem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>
#include <string>

int	main() 
{
	Zombie* JeanMichelPoitouCharentes = newZombie("JeanMichelPoitouCharentes"); //on the heap

	JeanMichelPoitouCharentes->announce();
	delete JeanMichelPoitouCharentes;
	randomChump("PhilippedelaCreuse"); //on the stack
	return (0);
}