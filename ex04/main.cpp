/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansebast <ansebast@student.42luanda.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/16 18:16:45 by ansebast          #+#    #+#             */
/*   Updated: 2025/03/19 00:04:59 by ansebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <fstream>
# include "sed.hpp"

int	main(int ac, char **av)
{	
	if (!validate_args(ac, av))
		return (1);
	
	std::string line;
	std::ifstream file(av[1]);
	if (!file.good())
	{
		std::cerr << "This file is not valid.\n";
		return (1);
	}
	std::ofstream newFile(av[1] + std::string(".replace"));
	if(!newFile.good())
	{
		std::cerr << "An error occurred while creating the output file.\n";
		return (1);
	}
	while (getline(file, line))
	{
		line = str_replace(line, av[2], av[3]);
		newFile << line << std::endl;
	}
	newFile.close();
	file.close();
	return (0);
}
