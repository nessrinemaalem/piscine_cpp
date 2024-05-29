/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imaalem <imaalem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 14:18:02 by imaalem           #+#    #+#             */
/*   Updated: 2022/07/21 19:12:43 by imaalem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"

int	main()
{
	PhoneBook	phonebook;
	std::string	cmd;

	phonebook.initPhoneBook();
	std::cout << "☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆" << std::endl;
	std::cout << "☆   Welcome is your awesome PhoneBook 🤩   ☆" << std::endl;
	std::cout << "☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆" << std::endl;
	phonebook.used = 0;
	while (std::getline(std::cin, cmd))
	{
		if (cmd == "ADD")
			phonebook.contacts[phonebook.findIndex()].add();
		else if (cmd == "SEARCH")
			phonebook.search();
		else if (cmd == "EXIT")
		{
			std::cout << "Mission accomplished! See you soon 😙" << std::endl;
			std::cout << "☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆" << std::endl;
			break;
		}
	}
	return (0);
}
