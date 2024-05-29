/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imaalem <imaalem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 15:53:10 by imaalem           #+#    #+#             */
/*   Updated: 2022/07/28 18:37:49 by imaalem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

int	error_case(int ac, char **av)
{
	std::string	s1;
	std::string	s2;

	if (ac != 4)
	{
		std::cout << "Error:" << std::endl << "Wrong number of argument" << std::endl;
		return (-1);
	}
	s1 = av[2];
	s2 = av[3];
	if (s1.size() < 1 || s2.size() < 1)
	{
		std::cout << "Error:" << std::endl << "One of the string is empty" << std::endl;
		return (-2);
	}
	return (0);
}

void	replace_str_in_content(std::string filename, std::string s1, std::string s2)
{
	std::string		output_filename = filename + ".replace";
	std::string		line;
	size_t			s1_len;
	std::ifstream	ifs(filename.c_str());
	std::ofstream	ofs(output_filename.c_str());

	if (ifs.fail() || ofs.fail())
	{
		std::cout << "Error:" << std::endl << "Program has failed to open files" << std::endl;
		return ;
	}
	s1_len = s1.length();
	while (std::getline(ifs, line, '\n'))
	{
		for (size_t pos = 0; pos < line.length(); pos++)
		{
			if (line.compare(pos, s1_len, s1) == 0)
			{
				line.erase(pos, s1_len);
				line.insert(pos, s2);
				pos += s1_len;
			}
		}
		ofs << line << std::endl;
	}
	ifs.close();
	ofs.close();
}

int main(int ac, char **av)
{
	int error = error_case(ac, av);
	if (error < 0)
		return (error);
	replace_str_in_content(av[1], av[2], av[3]);
	return (0);
}