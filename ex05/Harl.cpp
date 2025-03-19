/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansebast <ansebast@student.42luanda.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 00:19:06 by ansebast          #+#    #+#             */
/*   Updated: 2025/03/19 01:55:35 by ansebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Harl.hpp"

Harl::Harl() {}

void Harl::debug( void )
{
	std::cout << BLUE << "Checking for memory leaks in the MiniRT project...\n";
}

void Harl::info( void )
{
	std::cout << GREEN << "FdF project compiled successfully!\nRun ./FdF to view the map.\n";
}

void Harl::warning( void )
{
	std::cout << YELLOW << "The 42 rule discourages the use of global variables! Consider refactoring your code.\n";
}

void Harl::error( void )
{
	std::cout << RED << "Segmentation fault!\nTry using valgrind to identify the problem.\n";
}


void Harl::complain( std::string level )
{
	ComplainFunction ptr;

	if (level == "DEBUG")
		ptr = &Harl::debug;
	else if (level == "ERROR")
		ptr = &Harl::error;
	else if (level == "WARNING")
		ptr = &Harl::warning;
	else if (level == "INFO")
		ptr = &Harl::info;
	(this->*ptr)();
}
