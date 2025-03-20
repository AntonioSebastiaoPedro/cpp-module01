/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansebast <ansebast@student.42luanda.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 01:07:49 by ansebast          #+#    #+#             */
/*   Updated: 2025/03/20 21:02:35 by ansebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Harl.hpp"

int	level_to_int(std::string level)
{
	std::string levels[] = { "DEBUG", "INFO", "WARNING", "ERROR" };
	for (size_t i = 0; i < levels->size(); i++)
	{
		if (levels[i] == level)
			return (i);
	}
	return (-1);
}

int	main( int ac, char **av )
{
	Harl obj;
	if (ac != 2)
	{
		std::cerr << "Usage: ./harlFilter <LEVEL>";
		return (1);
	}
	
	obj.complain(level_to_int(av[1]));
	return (0);
}
