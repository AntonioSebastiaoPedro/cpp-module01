/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansebast <ansebast@student.42luanda.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 00:19:06 by ansebast          #+#    #+#             */
/*   Updated: 2025/03/19 08:58:02 by ansebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Harl.hpp"

Harl::Harl() {}

void Harl::debug( void )
{
	std::cout << BLUE;
	std::cout << "Checking for memory leaks in the MiniRT project...\n";
	std::cout << RESET;
}

void Harl::info( void )
{
	std::cout << GREEN;
	std::cout << "FdF project compiled successfully!\n";
	std::cout << "Run ./FdF to view the map.\n";
	std::cout << RESET;
}

void Harl::warning( void )
{
	std::cout << YELLOW;
	std::cout << "The 42 rule discourages the use of global variables!\n";
	std::cout << "Consider refactoring your code.\n";
	std::cout << RESET;
}

void Harl::error( void )
{
	std::cout << RED;
	std::cout << "Segmentation fault!\n";
	std::cout << "Try using valgrind to identify the problem.\n";
	std::cout << RESET;
}


void Harl::complain( std::string level )
{
	std::string levels[] = { "DEBUG", "INFO", "WARNING", "ERROR" };
	ComplainFunction ptr[] = { &Harl::debug, &Harl::info, &Harl::warning, &Harl::error };
	
	for (size_t i = 0; i < levels->size(); i++)
	{
		if (levels[i] == level)
		{
			(this->*ptr[i])();
			break;
		}
	}
}
