/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imaalem <imaalem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 21:30:40 by imaalem           #+#    #+#             */
/*   Updated: 2022/07/28 21:42:17 by imaalem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main()
{
	Harl	annoyingHarl;

	annoyingHarl.complain("DEBUG");
	annoyingHarl.complain("INFO");
	annoyingHarl.complain("WARNING");
	annoyingHarl.complain("ERROR");
	annoyingHarl.complain("RANDOM_SHIT");
	return (0);
}