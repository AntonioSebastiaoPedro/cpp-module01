/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansebast <ansebast@student.42luanda.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 19:44:56 by ansebast          #+#    #+#             */
/*   Updated: 2025/03/19 00:02:08 by ansebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "sed.hpp"

std::string str_replace(std::string line, std::string str1, std::string str2)
{
	std::string replace;
	std::string subStr;
	size_t posStr;
	int i;
	
	while (true)
	{
		i = 0;
		posStr = line.find(str1);
		if (posStr == std::string::npos)
		{
			replace.append(line);
			break ;
		}
		subStr = line.substr(i, posStr);
		replace.append(subStr);
		replace.append(str2);
		i += posStr + str1.length();
		line = line.substr(i);
	}
	return (replace);
}

bool	validate_args(int ac, char **av)
{
	if (ac != 4)
	{
		std::cerr << "Usage: ./sed <filename> <s1> <s2>\n";
		return (false);
	}
	if (std::string(av[2]).empty())
	{
		std::cerr << "The first string cannot be empty.\n";
		return (false);
	}
	return (true);
}
