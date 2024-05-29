/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imaalem <imaalem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 14:22:20 by imaalem           #+#    #+#             */
/*   Updated: 2022/07/08 14:30:52 by imaalem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

void	print_upper_str(char *str)
{
	char	c;

	for (int i = 0; str[i]; i++)
	{
		c = toupper(str[i]);
		std::cout << c;
	}
}

int	main(int ac, char **av)
{
	if (ac == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	for (int i = 1; av[i]; i++)
		print_upper_str(av[i]);
	std::cout << std::endl;
	return (0);
}