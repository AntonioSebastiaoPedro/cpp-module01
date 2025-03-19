/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansebast <ansebast@student.42luanda.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 00:19:06 by ansebast          #+#    #+#             */
/*   Updated: 2025/03/19 02:29:04 by ansebast         ###   ########.fr       */
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

void Harl::switch_off( void )
{
	std::cout << "[ Probably complaining about insignificant problems ]\n";
}


void Harl::complain( int level )
{
	ComplainFunction ptr;
	
	switch (level)
	{
	case DEBUG:
		ptr = &Harl::debug;
		(this->*ptr)();
	case INFO:
		ptr = &Harl::info;
		(this->*ptr)();
	case WARNING:
		ptr = &Harl::warning;
		(this->*ptr)();
	case ERROR:
		ptr = &Harl::error;
		(this->*ptr)();
		break;
	default:
		ptr = &Harl::switch_off;
		(this->*ptr)();
		break;
	}
}
